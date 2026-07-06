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

// Function: sub_001F7D68
// Address: 0x1f7d68 - 0x1f7ee8
void sub_001F7D68_0x1f7d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7D68_0x1f7d68");
#endif

    switch (ctx->pc) {
        case 0x1f7d88u: goto label_1f7d88;
        case 0x1f7d98u: goto label_1f7d98;
        case 0x1f7dc4u: goto label_1f7dc4;
        case 0x1f7dd8u: goto label_1f7dd8;
        case 0x1f7dfcu: goto label_1f7dfc;
        case 0x1f7e10u: goto label_1f7e10;
        case 0x1f7e24u: goto label_1f7e24;
        case 0x1f7e34u: goto label_1f7e34;
        case 0x1f7e48u: goto label_1f7e48;
        case 0x1f7e5cu: goto label_1f7e5c;
        case 0x1f7e74u: goto label_1f7e74;
        case 0x1f7e8cu: goto label_1f7e8c;
        case 0x1f7ea0u: goto label_1f7ea0;
        case 0x1f7eccu: goto label_1f7ecc;
        default: break;
    }

    ctx->pc = 0x1f7d68u;

    // 0x1f7d68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f7d6c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1f7d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1f7d70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f7d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f7d74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f7d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f7d7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f7d80: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7D80u;
    SET_GPR_U32(ctx, 31, 0x1F7D88u);
    ctx->pc = 0x1F7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D80u;
    // 0x1f7d84: 0x26110950  addiu       $s1, $s0, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7D80u, 0x1F7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D88u;
label_1f7d88:
    // 0x1f7d88: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1F7D88u;
    {
        const bool branch_taken_0x1f7d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D88u;
        // 0x1f7d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d88) {
            ctx->pc = 0x1F7ED0u;
            goto label_1f7ed0;
        }
    }
    ctx->pc = 0x1F7D90u;
    // 0x1f7d90: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7D90u;
    SET_GPR_U32(ctx, 31, 0x1F7D98u);
    ctx->pc = 0x1F7D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D90u;
    // 0x1f7d94: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7D90u, 0x1F7D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D98u;
label_1f7d98:
    // 0x1f7d98: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x1F7D98u;
    {
        const bool branch_taken_0x1f7d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7d98) {
            ctx->pc = 0x1F7D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7D98u;
            // 0x1f7d9c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7ED4u;
            goto label_1f7ed4;
        }
    }
    ctx->pc = 0x1F7DA0u;
    // 0x1f7da0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1f7da4: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F7DA4u;
    {
        const bool branch_taken_0x1f7da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DA4u;
        // 0x1f7da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7da4) {
            ctx->pc = 0x1F7ED0u;
            goto label_1f7ed0;
        }
    }
    ctx->pc = 0x1F7DACu;
    // 0x1f7dac: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1f7dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1f7db0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f7db4: 0x54830047  bnel        $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1F7DB4u;
    {
        const bool branch_taken_0x1f7db4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7db4) {
            ctx->pc = 0x1F7DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7DB4u;
            // 0x1f7db8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7ED4u;
            goto label_1f7ed4;
        }
    }
    ctx->pc = 0x1F7DBCu;
    // 0x1f7dbc: 0xc07dff2  jal         func_1F7FC8
    ctx->pc = 0x1F7DBCu;
    SET_GPR_U32(ctx, 31, 0x1F7DC4u);
    ctx->pc = 0x1F7DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DBCu;
    // 0x1f7dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FC8u, 0x1F7DBCu, 0x1F7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DC4u;
label_1f7dc4:
    // 0x1f7dc4: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F7DC4u;
    {
        const bool branch_taken_0x1f7dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7dc4) {
            ctx->pc = 0x1F7DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7DC4u;
            // 0x1f7dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7ED0u;
            goto label_1f7ed0;
        }
    }
    ctx->pc = 0x1F7DCCu;
    // 0x1f7dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7dd0: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7DD0u;
    SET_GPR_U32(ctx, 31, 0x1F7DD8u);
    ctx->pc = 0x1F7DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DD0u;
    // 0x1f7dd4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7DD0u, 0x1F7DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DD8u;
label_1f7dd8:
    // 0x1f7dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7ddc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7DDCu;
    {
        const bool branch_taken_0x1f7ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DDCu;
        // 0x1f7de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ddc) {
            ctx->pc = 0x1F7DF4u;
            goto label_1f7df4;
        }
    }
    ctx->pc = 0x1F7DE4u;
    // 0x1f7de4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1f7de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1f7de8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1F7DE8u;
    {
        const bool branch_taken_0x1f7de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DE8u;
        // 0x1f7dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7de8) {
            ctx->pc = 0x1F7ED0u;
            goto label_1f7ed0;
        }
    }
    ctx->pc = 0x1F7DF0u;
    // 0x1f7df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7df4:
    // 0x1f7df4: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7DF4u;
    SET_GPR_U32(ctx, 31, 0x1F7DFCu);
    ctx->pc = 0x1F7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DF4u;
    // 0x1f7df8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7DF4u, 0x1F7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DFCu;
label_1f7dfc:
    // 0x1f7dfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7e00: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7E00u;
    {
        const bool branch_taken_0x1f7e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E00u;
        // 0x1f7e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e00) {
            ctx->pc = 0x1F7E1Cu;
            goto label_1f7e1c;
        }
    }
    ctx->pc = 0x1F7E08u;
    // 0x1f7e08: 0xc07ad84  jal         func_1EB610
    ctx->pc = 0x1F7E08u;
    SET_GPR_U32(ctx, 31, 0x1F7E10u);
    ctx->pc = 0x1F7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E08u;
    // 0x1f7e0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB610u, 0x1F7E08u, 0x1F7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E10u;
label_1f7e10:
    // 0x1f7e10: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F7E10u;
    {
        const bool branch_taken_0x1f7e10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1F7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E10u;
        // 0x1f7e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e10) {
            ctx->pc = 0x1F7ED0u;
            goto label_1f7ed0;
        }
    }
    ctx->pc = 0x1F7E18u;
    // 0x1f7e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7e1c:
    // 0x1f7e1c: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1F7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E24u);
    ctx->pc = 0x1F7E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E1Cu;
    // 0x1f7e20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA38u, 0x1F7E1Cu, 0x1F7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E24u;
label_1f7e24:
    // 0x1f7e24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7E24u;
    {
        const bool branch_taken_0x1f7e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E24u;
        // 0x1f7e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e24) {
            ctx->pc = 0x1F7E3Cu;
            goto label_1f7e3c;
        }
    }
    ctx->pc = 0x1F7E2Cu;
    // 0x1f7e2c: 0xc07ad84  jal         func_1EB610
    ctx->pc = 0x1F7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E34u);
    ctx->pc = 0x1F7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E2Cu;
    // 0x1f7e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB610u, 0x1F7E2Cu, 0x1F7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E34u;
label_1f7e34:
    // 0x1f7e34: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F7E34u;
    {
        const bool branch_taken_0x1f7e34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1F7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E34u;
        // 0x1f7e38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e34) {
            ctx->pc = 0x1F7ED0u;
            goto label_1f7ed0;
        }
    }
    ctx->pc = 0x1F7E3Cu;
label_1f7e3c:
    // 0x1f7e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e40: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7E40u;
    SET_GPR_U32(ctx, 31, 0x1F7E48u);
    ctx->pc = 0x1F7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E40u;
    // 0x1f7e44: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7E40u, 0x1F7E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E48u;
label_1f7e48:
    // 0x1f7e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7e4c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7E4Cu;
    {
        const bool branch_taken_0x1f7e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7e4c) {
            ctx->pc = 0x1F7E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7E4Cu;
            // 0x1f7e50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E68u;
            goto label_1f7e68;
        }
    }
    ctx->pc = 0x1F7E54u;
    // 0x1f7e54: 0xc07e01a  jal         func_1F8068
    ctx->pc = 0x1F7E54u;
    SET_GPR_U32(ctx, 31, 0x1F7E5Cu);
    ctx->pc = 0x1F7E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E54u;
    // 0x1f7e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8068u, 0x1F7E54u, 0x1F7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E5Cu;
label_1f7e5c:
    // 0x1f7e5c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F7E5Cu;
    {
        const bool branch_taken_0x1f7e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E5Cu;
        // 0x1f7e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e5c) {
            ctx->pc = 0x1F7ED0u;
            goto label_1f7ed0;
        }
    }
    ctx->pc = 0x1F7E64u;
    // 0x1f7e64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f7e68:
    // 0x1f7e68: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1f7e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f7e6c: 0xc07ef96  jal         func_1FBE58
    ctx->pc = 0x1F7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E74u);
    ctx->pc = 0x1F7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E6Cu;
    // 0x1f7e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE58u, 0x1F7E6Cu, 0x1F7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E74u;
label_1f7e74:
    // 0x1f7e74: 0x26030d88  addiu       $v1, $s0, 0xD88
    ctx->pc = 0x1f7e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1f7e78: 0x8c710288  lw          $s1, 0x288($v1)
    ctx->pc = 0x1f7e78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x1f7e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e80: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1f7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1f7e84: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F7E84u;
    SET_GPR_U32(ctx, 31, 0x1F7E8Cu);
    ctx->pc = 0x1F7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E84u;
    // 0x1f7e88: 0x8c700284  lw          $s0, 0x284($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1F7E84u, 0x1F7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E8Cu;
label_1f7e8c:
    // 0x1f7e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f7e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e90: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x1f7e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x1f7e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e98: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1F7E98u;
    SET_GPR_U32(ctx, 31, 0x1F7EA0u);
    ctx->pc = 0x1F7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E98u;
    // 0x1f7e9c: 0x34c64240  ori         $a2, $a2, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1F7E98u, 0x1F7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7EA0u;
label_1f7ea0:
    // 0x1f7ea0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f7ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7ea4: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7EA4u;
    {
        const bool branch_taken_0x1f7ea4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1F7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EA4u;
        // 0x1f7ea8: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ea4) {
            ctx->pc = 0x1F7EB4u;
            goto label_1f7eb4;
        }
    }
    ctx->pc = 0x1F7EACu;
    // 0x1f7eac: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7EACu;
    {
        const bool branch_taken_0x1f7eac = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1F7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EACu;
        // 0x1f7eb0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7eac) {
            ctx->pc = 0x1F7EC0u;
            goto label_1f7ec0;
        }
    }
    ctx->pc = 0x1F7EB4u;
label_1f7eb4:
    // 0x1f7eb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7EB4u;
    {
        const bool branch_taken_0x1f7eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EB4u;
        // 0x1f7eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7eb4) {
            ctx->pc = 0x1F7ED0u;
            goto label_1f7ed0;
        }
    }
    ctx->pc = 0x1F7EBCu;
    // 0x1f7ebc: 0x0  nop
    ctx->pc = 0x1f7ebcu;
    // NOP
label_1f7ec0:
    // 0x1f7ec0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f7ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ec4: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1F7EC4u;
    SET_GPR_U32(ctx, 31, 0x1F7ECCu);
    ctx->pc = 0x1F7EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7EC4u;
    // 0x1f7ec8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFB8u, 0x1F7EC4u, 0x1F7ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7ECCu;
label_1f7ecc:
    // 0x1f7ecc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f7eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f7ed0:
    // 0x1f7ed0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7ed4:
    // 0x1f7ed4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f7ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7ed8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7edc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EDCu;
        // 0x1f7ee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7EE4u;
    // 0x1f7ee4: 0x0  nop
    ctx->pc = 0x1f7ee4u;
    // NOP
}
