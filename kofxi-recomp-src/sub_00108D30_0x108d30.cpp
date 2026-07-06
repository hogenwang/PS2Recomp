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

// Function: sub_00108D30
// Address: 0x108d30 - 0x1092c8
void sub_00108D30_0x108d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108D30_0x108d30");
#endif

    switch (ctx->pc) {
        case 0x108d4cu: goto label_108d4c;
        case 0x108d5cu: goto label_108d5c;
        case 0x108d6cu: goto label_108d6c;
        case 0x108d88u: goto label_108d88;
        case 0x108d98u: goto label_108d98;
        case 0x108db4u: goto label_108db4;
        case 0x108dc4u: goto label_108dc4;
        case 0x108dd0u: goto label_108dd0;
        case 0x108dd8u: goto label_108dd8;
        case 0x108de4u: goto label_108de4;
        case 0x108df4u: goto label_108df4;
        case 0x108ec8u: goto label_108ec8;
        case 0x108f04u: goto label_108f04;
        case 0x108f20u: goto label_108f20;
        case 0x108f4cu: goto label_108f4c;
        case 0x108fd0u: goto label_108fd0;
        case 0x108fe0u: goto label_108fe0;
        case 0x109004u: goto label_109004;
        case 0x109010u: goto label_109010;
        case 0x109020u: goto label_109020;
        case 0x109048u: goto label_109048;
        case 0x109054u: goto label_109054;
        case 0x109068u: goto label_109068;
        case 0x109074u: goto label_109074;
        case 0x1090d8u: goto label_1090d8;
        case 0x1090e8u: goto label_1090e8;
        case 0x1090f8u: goto label_1090f8;
        case 0x109108u: goto label_109108;
        case 0x109118u: goto label_109118;
        case 0x109148u: goto label_109148;
        case 0x109168u: goto label_109168;
        case 0x109178u: goto label_109178;
        case 0x109188u: goto label_109188;
        case 0x109198u: goto label_109198;
        case 0x1091c8u: goto label_1091c8;
        case 0x1091f8u: goto label_1091f8;
        case 0x109228u: goto label_109228;
        case 0x109238u: goto label_109238;
        case 0x109244u: goto label_109244;
        case 0x109254u: goto label_109254;
        case 0x109264u: goto label_109264;
        case 0x109270u: goto label_109270;
        case 0x10927cu: goto label_10927c;
        case 0x109288u: goto label_109288;
        case 0x109294u: goto label_109294;
        default: break;
    }

    ctx->pc = 0x108d30u;

    // 0x108d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108d34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x108d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x108d38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108d3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108d40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108d44: 0xc041c56  jal         func_107158
    ctx->pc = 0x108D44u;
    SET_GPR_U32(ctx, 31, 0x108D4Cu);
    ctx->pc = 0x108D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D44u;
    // 0x108d48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108D44u, 0x108D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D4Cu;
label_108d4c:
    // 0x108d4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d54: 0xc041c56  jal         func_107158
    ctx->pc = 0x108D54u;
    SET_GPR_U32(ctx, 31, 0x108D5Cu);
    ctx->pc = 0x108D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D54u;
    // 0x108d58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108D54u, 0x108D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D5Cu;
label_108d5c:
    // 0x108d5c: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x108d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x108d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d64: 0xc041c56  jal         func_107158
    ctx->pc = 0x108D64u;
    SET_GPR_U32(ctx, 31, 0x108D6Cu);
    ctx->pc = 0x108D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D64u;
    // 0x108d68: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108D64u, 0x108D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D6Cu;
label_108d6c:
    // 0x108d6c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x108d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x108d70: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x108d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x108d74: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x108d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x108d78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x108D78u;
    {
        const bool branch_taken_0x108d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108D78u;
        // 0x108d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d78) {
            ctx->pc = 0x108DA0u;
            goto label_108da0;
        }
    }
    ctx->pc = 0x108D80u;
    // 0x108d80: 0xc041c56  jal         func_107158
    ctx->pc = 0x108D80u;
    SET_GPR_U32(ctx, 31, 0x108D88u);
    ctx->pc = 0x108D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D80u;
    // 0x108d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108D80u, 0x108D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D88u;
label_108d88:
    // 0x108d88: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x108d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x108d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d90: 0xc041c56  jal         func_107158
    ctx->pc = 0x108D90u;
    SET_GPR_U32(ctx, 31, 0x108D98u);
    ctx->pc = 0x108D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D90u;
    // 0x108d94: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108D90u, 0x108D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D98u;
label_108d98:
    // 0x108d98: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x108d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x108d9c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x108d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_108da0:
    // 0x108da0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108da4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x108DA4u;
    {
        const bool branch_taken_0x108da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DA4u;
        // 0x108da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108da4) {
            ctx->pc = 0x108DDCu;
            goto label_108ddc;
        }
    }
    ctx->pc = 0x108DACu;
    // 0x108dac: 0xc041c56  jal         func_107158
    ctx->pc = 0x108DACu;
    SET_GPR_U32(ctx, 31, 0x108DB4u);
    ctx->pc = 0x108DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DACu;
    // 0x108db0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108DACu, 0x108DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DB4u;
label_108db4:
    // 0x108db4: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x108db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x108db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dbc: 0xc041c56  jal         func_107158
    ctx->pc = 0x108DBCu;
    SET_GPR_U32(ctx, 31, 0x108DC4u);
    ctx->pc = 0x108DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DBCu;
    // 0x108dc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108DBCu, 0x108DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DC4u;
label_108dc4:
    // 0x108dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108DC4u;
    {
        const bool branch_taken_0x108dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DC4u;
        // 0x108dc8: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108dc4) {
            ctx->pc = 0x108DD8u;
            goto label_108dd8;
        }
    }
    ctx->pc = 0x108DCCu;
    // 0x108dcc: 0x0  nop
    ctx->pc = 0x108dccu;
    // NOP
label_108dd0:
    // 0x108dd0: 0xc042534  jal         func_1094D0
    ctx->pc = 0x108DD0u;
    SET_GPR_U32(ctx, 31, 0x108DD8u);
    ctx->pc = 0x108DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DD0u;
    // 0x108dd4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1094D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094D0u, 0x108DD0u, 0x108DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DD8u;
label_108dd8:
    // 0x108dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108ddc:
    // 0x108ddc: 0xc041c56  jal         func_107158
    ctx->pc = 0x108DDCu;
    SET_GPR_U32(ctx, 31, 0x108DE4u);
    ctx->pc = 0x108DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DDCu;
    // 0x108de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108DDCu, 0x108DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DE4u;
label_108de4:
    // 0x108de4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108DE4u;
    {
        const bool branch_taken_0x108de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108DE4u;
        // 0x108de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108de4) {
            ctx->pc = 0x108DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108dd0;
        }
    }
    ctx->pc = 0x108DECu;
    // 0x108dec: 0xc0424b2  jal         func_1092C8
    ctx->pc = 0x108DECu;
    SET_GPR_U32(ctx, 31, 0x108DF4u);
    ctx->pc = 0x108DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108DECu;
    // 0x108df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1092C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092C8u, 0x108DECu, 0x108DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108DF4u;
label_108df4:
    // 0x108df4: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x108df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x108df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108dfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108e00: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x108E00u;
    {
        const bool branch_taken_0x108e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E00u;
        // 0x108e04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e00) {
            ctx->pc = 0x108E28u;
            goto label_108e28;
        }
    }
    ctx->pc = 0x108E08u;
    // 0x108e08: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x108E08u;
    {
        const bool branch_taken_0x108e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x108e08) {
            ctx->pc = 0x108E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108E08u;
            // 0x108e0c: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108E2Cu;
            goto label_108e2c;
        }
    }
    ctx->pc = 0x108E10u;
    // 0x108e10: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x108E10u;
    {
        const bool branch_taken_0x108e10 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x108e10) {
            ctx->pc = 0x108E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108E10u;
            // 0x108e14: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108E24u;
            goto label_108e24;
        }
    }
    ctx->pc = 0x108E18u;
    // 0x108e18: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x108e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x108e1c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x108e1cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x108e20: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x108e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_108e24:
    // 0x108e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108e28:
    // 0x108e28: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x108e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_108e2c:
    // 0x108e2c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x108e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x108e30: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x108E30u;
    {
        const bool branch_taken_0x108e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E30u;
        // 0x108e34: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e30) {
            ctx->pc = 0x108E4Cu;
            goto label_108e4c;
        }
    }
    ctx->pc = 0x108E38u;
    // 0x108e38: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x108e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x108e3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x108E3Cu;
    {
        const bool branch_taken_0x108e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108e3c) {
            ctx->pc = 0x108E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108E3Cu;
            // 0x108e40: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108E50u;
            goto label_108e50;
        }
    }
    ctx->pc = 0x108E44u;
    // 0x108e44: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x108e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x108e48: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x108e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_108e4c:
    // 0x108e4c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x108e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_108e50:
    // 0x108e50: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x108e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x108e54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x108e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108e58: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x108e58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x108e5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108e60: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x108e60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x108e64: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x108e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x108e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x108E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E6Cu;
        // 0x108e70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108E74u;
    // 0x108e74: 0x0  nop
    ctx->pc = 0x108e74u;
    // NOP
    // 0x108e78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x108e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x108e7c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x108e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x108e80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108e84: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x108e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x108e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e90: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x108e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108e94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x108e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108e98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108e9c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x108e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x108ea0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x108ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x108ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x108ea8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108eac: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x108eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x108eb0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x108eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x108eb4: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x108eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x108eb8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x108eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108ebc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x108ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x108ec0: 0xc041c56  jal         func_107158
    ctx->pc = 0x108EC0u;
    SET_GPR_U32(ctx, 31, 0x108EC8u);
    ctx->pc = 0x108EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EC0u;
    // 0x108ec4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108EC0u, 0x108EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EC8u;
label_108ec8:
    // 0x108ec8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x108ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ecc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x108eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x108ed0: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x108ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x108ed4: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x108ed4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x108ed8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x108ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x108edc: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x108edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x108ee0: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x108ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x108ee4: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x108ee4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x108ee8: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x108ee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x108eec: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108EECu;
    {
        const bool branch_taken_0x108eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x108EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EECu;
        // 0x108ef0: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108eec) {
            ctx->pc = 0x108F04u;
            goto label_108f04;
        }
    }
    ctx->pc = 0x108EF4u;
    // 0x108ef4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x108ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x108ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108efc: 0xc04305a  jal         func_10C168
    ctx->pc = 0x108EFCu;
    SET_GPR_U32(ctx, 31, 0x108F04u);
    ctx->pc = 0x108F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EFCu;
    // 0x108f00: 0x24a5a118  addiu       $a1, $a1, -0x5EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x108EFCu, 0x108F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F04u;
label_108f04:
    // 0x108f04: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x108f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x108f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x108f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x108f10: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x108f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x108f14: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x108f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x108f18: 0xc041c56  jal         func_107158
    ctx->pc = 0x108F18u;
    SET_GPR_U32(ctx, 31, 0x108F20u);
    ctx->pc = 0x108F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F18u;
    // 0x108f1c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108F18u, 0x108F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F20u;
label_108f20:
    // 0x108f20: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x108f20u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x108f24: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x108f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x108f28: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108F28u;
    {
        const bool branch_taken_0x108f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x108F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F28u;
        // 0x108f2c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f28) {
            ctx->pc = 0x108F4Cu;
            goto label_108f4c;
        }
    }
    ctx->pc = 0x108F30u;
    // 0x108f30: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108F30u;
    {
        const bool branch_taken_0x108f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x108F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F30u;
        // 0x108f34: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f30) {
            ctx->pc = 0x108F4Cu;
            goto label_108f4c;
        }
    }
    ctx->pc = 0x108F38u;
    // 0x108f38: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108F38u;
    {
        const bool branch_taken_0x108f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x108F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F38u;
        // 0x108f3c: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f38) {
            ctx->pc = 0x108F4Cu;
            goto label_108f4c;
        }
    }
    ctx->pc = 0x108F40u;
    // 0x108f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f44: 0xc04305a  jal         func_10C168
    ctx->pc = 0x108F44u;
    SET_GPR_U32(ctx, 31, 0x108F4Cu);
    ctx->pc = 0x108F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F44u;
    // 0x108f48: 0x24a5a140  addiu       $a1, $a1, -0x5EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x108F44u, 0x108F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F4Cu;
label_108f4c:
    // 0x108f4c: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x108f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x108f50: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x108f50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x108f54: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x108f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x108f58: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x108f58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x108f5c: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x108f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x108f60: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x108f60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x108f64: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x108f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x108f68: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x108f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x108f6c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x108f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x108f70: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x108f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x108f74: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x108f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x108f78: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x108f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x108f7c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x108f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x108f80: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x108f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x108f84: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x108f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x108f88: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x108f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x108f8c: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x108f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x108f90: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x108f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x108f94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x108f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108f98: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108f98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108f9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108f9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108fa0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108fa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108fa8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x108FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FB0u;
        // 0x108fb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108FB8u;
    // 0x108fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108fbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108fc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108fc8: 0xc041c56  jal         func_107158
    ctx->pc = 0x108FC8u;
    SET_GPR_U32(ctx, 31, 0x108FD0u);
    ctx->pc = 0x108FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108FC8u;
    // 0x108fcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108FC8u, 0x108FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108FD0u;
label_108fd0:
    // 0x108fd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108FD0u;
    {
        const bool branch_taken_0x108fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FD0u;
        // 0x108fd4: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fd0) {
            ctx->pc = 0x109004u;
            goto label_109004;
        }
    }
    ctx->pc = 0x108FD8u;
    // 0x108fd8: 0xc042526  jal         func_109498
    ctx->pc = 0x108FD8u;
    SET_GPR_U32(ctx, 31, 0x108FE0u);
    ctx->pc = 0x108FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108FD8u;
    // 0x108fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109498u, 0x108FD8u, 0x108FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108FE0u;
label_108fe0:
    // 0x108fe0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108fe4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x108fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x108fe8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x108fec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108ff0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108ff0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x108ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ff8: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x108ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x108ffc: 0xc042526  jal         func_109498
    ctx->pc = 0x108FFCu;
    SET_GPR_U32(ctx, 31, 0x109004u);
    ctx->pc = 0x109000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108FFCu;
    // 0x109000: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109498u, 0x108FFCu, 0x109004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109004u;
label_109004:
    // 0x109004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109008: 0xc041c56  jal         func_107158
    ctx->pc = 0x109008u;
    SET_GPR_U32(ctx, 31, 0x109010u);
    ctx->pc = 0x10900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109008u;
    // 0x10900c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109008u, 0x109010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109010u;
label_109010:
    // 0x109010: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x109010u;
    {
        const bool branch_taken_0x109010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109010u;
        // 0x109014: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109010) {
            ctx->pc = 0x109048u;
            goto label_109048;
        }
    }
    ctx->pc = 0x109018u;
    // 0x109018: 0xc042526  jal         func_109498
    ctx->pc = 0x109018u;
    SET_GPR_U32(ctx, 31, 0x109020u);
    ctx->pc = 0x10901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109018u;
    // 0x10901c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109498u, 0x109018u, 0x109020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109020u;
label_109020:
    // 0x109020: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x109020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x109024: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x109024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x109028: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x109028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10902c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x10902cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x109030: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x109030u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x109034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109038: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x109038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x10903c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109040: 0xc042526  jal         func_109498
    ctx->pc = 0x109040u;
    SET_GPR_U32(ctx, 31, 0x109048u);
    ctx->pc = 0x109044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109040u;
    // 0x109044: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109498u, 0x109040u, 0x109048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109048u;
label_109048:
    // 0x109048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10904c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10904Cu;
    SET_GPR_U32(ctx, 31, 0x109054u);
    ctx->pc = 0x109050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10904Cu;
    // 0x109050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x10904Cu, 0x109054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109054u;
label_109054:
    // 0x109054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109054u;
    {
        const bool branch_taken_0x109054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109054u;
        // 0x109058: 0x3c05003e  lui         $a1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109054) {
            ctx->pc = 0x109068u;
            goto label_109068;
        }
    }
    ctx->pc = 0x10905Cu;
    // 0x10905c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109060: 0xc04305a  jal         func_10C168
    ctx->pc = 0x109060u;
    SET_GPR_U32(ctx, 31, 0x109068u);
    ctx->pc = 0x109064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109060u;
    // 0x109064: 0x24a5a160  addiu       $a1, $a1, -0x5EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x109060u, 0x109068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109068u;
label_109068:
    // 0x109068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10906c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10906Cu;
    SET_GPR_U32(ctx, 31, 0x109074u);
    ctx->pc = 0x109070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10906Cu;
    // 0x109070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x10906Cu, 0x109074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109074u;
label_109074:
    // 0x109074: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109074u;
    {
        const bool branch_taken_0x109074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109074u;
        // 0x109078: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109074) {
            ctx->pc = 0x109094u;
            goto label_109094;
        }
    }
    ctx->pc = 0x10907Cu;
    // 0x10907c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109080: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x109080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x109084: 0x24a5a188  addiu       $a1, $a1, -0x5E78
    ctx->pc = 0x109084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943112));
    // 0x109088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10908c: 0x804305a  j           func_10C168
    ctx->pc = 0x10908Cu;
    ctx->pc = 0x109090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10908Cu;
    // 0x109090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    sub_0010C168_0x10c168(rdram, ctx, runtime); return;
    ctx->pc = 0x109094u;
label_109094:
    // 0x109094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109098: 0x3e00008  jr          $ra
    ctx->pc = 0x109098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109098u;
        // 0x10909c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1090A0u;
    // 0x1090a0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1090a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1090a4: 0x804305a  j           func_10C168
    ctx->pc = 0x1090A4u;
    ctx->pc = 0x1090A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090A4u;
    // 0x1090a8: 0x24a5a1b8  addiu       $a1, $a1, -0x5E48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    sub_0010C168_0x10c168(rdram, ctx, runtime); return;
    ctx->pc = 0x1090ACu;
    // 0x1090ac: 0x0  nop
    ctx->pc = 0x1090acu;
    // NOP
    // 0x1090b0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1090b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1090b4: 0x804305a  j           func_10C168
    ctx->pc = 0x1090B4u;
    ctx->pc = 0x1090B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090B4u;
    // 0x1090b8: 0x24a5a1e8  addiu       $a1, $a1, -0x5E18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    sub_0010C168_0x10c168(rdram, ctx, runtime); return;
    ctx->pc = 0x1090BCu;
    // 0x1090bc: 0x0  nop
    ctx->pc = 0x1090bcu;
    // NOP
    // 0x1090c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1090c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1090c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1090c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1090c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1090cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1090ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1090d0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1090D0u;
    SET_GPR_U32(ctx, 31, 0x1090D8u);
    ctx->pc = 0x1090D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090D0u;
    // 0x1090d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1090D0u, 0x1090D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090D8u;
label_1090d8:
    // 0x1090d8: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1090d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1090dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1090dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090e0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1090E0u;
    SET_GPR_U32(ctx, 31, 0x1090E8u);
    ctx->pc = 0x1090E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090E0u;
    // 0x1090e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1090E0u, 0x1090E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090E8u;
label_1090e8:
    // 0x1090e8: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x1090e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x1090ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1090ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090f0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1090F0u;
    SET_GPR_U32(ctx, 31, 0x1090F8u);
    ctx->pc = 0x1090F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090F0u;
    // 0x1090f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1090F0u, 0x1090F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090F8u;
label_1090f8:
    // 0x1090f8: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x1090f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x1090fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1090fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109100: 0xc041c56  jal         func_107158
    ctx->pc = 0x109100u;
    SET_GPR_U32(ctx, 31, 0x109108u);
    ctx->pc = 0x109104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109100u;
    // 0x109104: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109100u, 0x109108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109108u;
label_109108:
    // 0x109108: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x109108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x10910c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109110: 0xc041c56  jal         func_107158
    ctx->pc = 0x109110u;
    SET_GPR_U32(ctx, 31, 0x109118u);
    ctx->pc = 0x109114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109110u;
    // 0x109114: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109110u, 0x109118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109118u;
label_109118:
    // 0x109118: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x109118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10911c: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x10911cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x109120: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x109120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x109124: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x109124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x109128: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x109128u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 7), 0))); // MMIO: 0x10000000
    // 0x10912c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x10912cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x109130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109134: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x109134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109138: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x109138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10913c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10913cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x109140: 0xc041c56  jal         func_107158
    ctx->pc = 0x109140u;
    SET_GPR_U32(ctx, 31, 0x109148u);
    ctx->pc = 0x109144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109140u;
    // 0x109144: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109140u, 0x109148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109148u;
label_109148:
    // 0x109148: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x109148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10914c: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x10914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x109150: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x109150u;
    {
        const bool branch_taken_0x109150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109150u;
        // 0x109154: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109150) {
            ctx->pc = 0x10915Cu;
            goto label_10915c;
        }
    }
    ctx->pc = 0x109158u;
    // 0x109158: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x109158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_10915c:
    // 0x10915c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10915cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109160: 0xc041c56  jal         func_107158
    ctx->pc = 0x109160u;
    SET_GPR_U32(ctx, 31, 0x109168u);
    ctx->pc = 0x109164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109160u;
    // 0x109164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109160u, 0x109168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109168u;
label_109168:
    // 0x109168: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x109168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x10916c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109170: 0xc041c56  jal         func_107158
    ctx->pc = 0x109170u;
    SET_GPR_U32(ctx, 31, 0x109178u);
    ctx->pc = 0x109174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109170u;
    // 0x109174: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109170u, 0x109178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109178u;
label_109178:
    // 0x109178: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x109178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x10917c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109180: 0xc041c56  jal         func_107158
    ctx->pc = 0x109180u;
    SET_GPR_U32(ctx, 31, 0x109188u);
    ctx->pc = 0x109184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109180u;
    // 0x109184: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109180u, 0x109188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109188u;
label_109188:
    // 0x109188: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x109188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x10918c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109190: 0xc041c56  jal         func_107158
    ctx->pc = 0x109190u;
    SET_GPR_U32(ctx, 31, 0x109198u);
    ctx->pc = 0x109194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109190u;
    // 0x109194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109190u, 0x109198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109198u;
label_109198:
    // 0x109198: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x109198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10919c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10919cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x1091a0: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x1091a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x1091a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1091a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1091a8: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x1091a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x1091ac: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1091acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1091b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1091b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1091b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1091b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1091b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1091bc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1091bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1091c0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1091C0u;
    SET_GPR_U32(ctx, 31, 0x1091C8u);
    ctx->pc = 0x1091C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091C0u;
    // 0x1091c4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1091C0u, 0x1091C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091C8u;
label_1091c8:
    // 0x1091c8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1091c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1091cc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1091ccu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x1091d0: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1091d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1091d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1091d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1091d8: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x1091d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x1091dc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1091dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1091e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1091e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091e4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1091e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1091e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1091e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1091ec: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1091ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1091f0: 0xc041c56  jal         func_107158
    ctx->pc = 0x1091F0u;
    SET_GPR_U32(ctx, 31, 0x1091F8u);
    ctx->pc = 0x1091F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091F0u;
    // 0x1091f4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x1091F0u, 0x1091F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091F8u;
label_1091f8:
    // 0x1091f8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1091f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1091fc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1091fcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x109200: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x109200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x109204: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x109204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x109208: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x109208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x10920c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10920cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x109210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109214: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x109214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x109218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10921c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10921cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x109220: 0xc041c56  jal         func_107158
    ctx->pc = 0x109220u;
    SET_GPR_U32(ctx, 31, 0x109228u);
    ctx->pc = 0x109224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109220u;
    // 0x109224: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109220u, 0x109228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109228u;
label_109228:
    // 0x109228: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x109228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x10922c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10922cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109230: 0xc041c56  jal         func_107158
    ctx->pc = 0x109230u;
    SET_GPR_U32(ctx, 31, 0x109238u);
    ctx->pc = 0x109234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109230u;
    // 0x109234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109230u, 0x109238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109238u;
label_109238:
    // 0x109238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10923c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10923Cu;
    SET_GPR_U32(ctx, 31, 0x109244u);
    ctx->pc = 0x109240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10923Cu;
    // 0x109240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x10923Cu, 0x109244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109244u;
label_109244:
    // 0x109244: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x109244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x109248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10924c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10924Cu;
    SET_GPR_U32(ctx, 31, 0x109254u);
    ctx->pc = 0x109250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10924Cu;
    // 0x109250: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x10924Cu, 0x109254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109254u;
label_109254:
    // 0x109254: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x109254u;
    {
        const bool branch_taken_0x109254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109254u;
        // 0x109258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109254) {
            ctx->pc = 0x109294u;
            goto label_109294;
        }
    }
    ctx->pc = 0x10925Cu;
    // 0x10925c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10925Cu;
    SET_GPR_U32(ctx, 31, 0x109264u);
    ctx->pc = 0x109260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10925Cu;
    // 0x109260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x10925Cu, 0x109264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109264u;
label_109264:
    // 0x109264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109268: 0xc041c56  jal         func_107158
    ctx->pc = 0x109268u;
    SET_GPR_U32(ctx, 31, 0x109270u);
    ctx->pc = 0x10926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109268u;
    // 0x10926c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109268u, 0x109270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109270u;
label_109270:
    // 0x109270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109274: 0xc041c56  jal         func_107158
    ctx->pc = 0x109274u;
    SET_GPR_U32(ctx, 31, 0x10927Cu);
    ctx->pc = 0x109278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109274u;
    // 0x109278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109274u, 0x10927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10927Cu;
label_10927c:
    // 0x10927c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10927cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109280: 0xc041c56  jal         func_107158
    ctx->pc = 0x109280u;
    SET_GPR_U32(ctx, 31, 0x109288u);
    ctx->pc = 0x109284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109280u;
    // 0x109284: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x109280u, 0x109288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109288u;
label_109288:
    // 0x109288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10928c: 0xc041c56  jal         func_107158
    ctx->pc = 0x10928Cu;
    SET_GPR_U32(ctx, 31, 0x109294u);
    ctx->pc = 0x109290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10928Cu;
    // 0x109290: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x10928Cu, 0x109294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109294u;
label_109294:
    // 0x109294: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10929c: 0x3e00008  jr          $ra
    ctx->pc = 0x10929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1092A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10929Cu;
        // 0x1092a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10929Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1092A4u;
    // 0x1092a4: 0x0  nop
    ctx->pc = 0x1092a4u;
    // NOP
    // 0x1092a8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1092a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1092ac: 0x804305a  j           func_10C168
    ctx->pc = 0x1092ACu;
    ctx->pc = 0x1092B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092ACu;
    // 0x1092b0: 0x24a5a200  addiu       $a1, $a1, -0x5E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    sub_0010C168_0x10c168(rdram, ctx, runtime); return;
    ctx->pc = 0x1092B4u;
    // 0x1092b4: 0x0  nop
    ctx->pc = 0x1092b4u;
    // NOP
    // 0x1092b8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1092b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1092bc: 0x804305a  j           func_10C168
    ctx->pc = 0x1092BCu;
    ctx->pc = 0x1092C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092BCu;
    // 0x1092c0: 0x24a5a238  addiu       $a1, $a1, -0x5DC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    sub_0010C168_0x10c168(rdram, ctx, runtime); return;
    ctx->pc = 0x1092C4u;
    // 0x1092c4: 0x0  nop
    ctx->pc = 0x1092c4u;
    // NOP
}
