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

// Function: sub_001B1D28
// Address: 0x1b1d28 - 0x1b1eb8
void sub_001B1D28_0x1b1d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1D28_0x1b1d28");
#endif

    switch (ctx->pc) {
        case 0x1b1d64u: goto label_1b1d64;
        case 0x1b1d6cu: goto label_1b1d6c;
        case 0x1b1d74u: goto label_1b1d74;
        case 0x1b1d7cu: goto label_1b1d7c;
        case 0x1b1d84u: goto label_1b1d84;
        case 0x1b1d8cu: goto label_1b1d8c;
        case 0x1b1d94u: goto label_1b1d94;
        case 0x1b1d9cu: goto label_1b1d9c;
        case 0x1b1da4u: goto label_1b1da4;
        case 0x1b1dacu: goto label_1b1dac;
        case 0x1b1db4u: goto label_1b1db4;
        case 0x1b1dbcu: goto label_1b1dbc;
        case 0x1b1dccu: goto label_1b1dcc;
        case 0x1b1ddcu: goto label_1b1ddc;
        case 0x1b1df0u: goto label_1b1df0;
        case 0x1b1e10u: goto label_1b1e10;
        case 0x1b1e2cu: goto label_1b1e2c;
        case 0x1b1e50u: goto label_1b1e50;
        case 0x1b1e74u: goto label_1b1e74;
        case 0x1b1e7cu: goto label_1b1e7c;
        default: break;
    }

    ctx->pc = 0x1b1d28u;

label_1b1d28:
    // 0x1b1d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1d2c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b1d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b1d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1d34: 0x24902348  addiu       $s0, $a0, 0x2348
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 9032));
    // 0x1b1d38: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1b1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1b1d3c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1b1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1b1d40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b1d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1d44: 0x24635318  addiu       $v1, $v1, 0x5318
    ctx->pc = 0x1b1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21272));
    // 0x1b1d48: 0x24427b38  addiu       $v0, $v0, 0x7B38
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31544));
    // 0x1b1d4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b1d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b1d50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b1d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b1d54: 0x5480004b  bnel        $a0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B1D54u;
    {
        const bool branch_taken_0x1b1d54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d54) {
            ctx->pc = 0x1B1D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1D54u;
            // 0x1b1d58: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1E84u;
            goto label_1b1e84;
        }
    }
    ctx->pc = 0x1B1D5Cu;
    // 0x1b1d5c: 0xc06b476  jal         func_1AD1D8
    ctx->pc = 0x1B1D5Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D64u);
    ctx->pc = 0x1AD1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD1D8u, 0x1B1D5Cu, 0x1B1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D64u;
label_1b1d64:
    // 0x1b1d64: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B1D64u;
    SET_GPR_U32(ctx, 31, 0x1B1D6Cu);
    ctx->pc = 0x1AD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD238u, 0x1B1D64u, 0x1B1D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D6Cu;
label_1b1d6c:
    // 0x1b1d6c: 0xc073018  jal         func_1CC060
    ctx->pc = 0x1B1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D74u);
    ctx->pc = 0x1CC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC060u, 0x1B1D6Cu, 0x1B1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D74u;
label_1b1d74:
    // 0x1b1d74: 0xc072cac  jal         func_1CB2B0
    ctx->pc = 0x1B1D74u;
    SET_GPR_U32(ctx, 31, 0x1B1D7Cu);
    ctx->pc = 0x1CB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB2B0u, 0x1B1D74u, 0x1B1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D7Cu;
label_1b1d7c:
    // 0x1b1d7c: 0xc072a26  jal         func_1CA898
    ctx->pc = 0x1B1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D84u);
    ctx->pc = 0x1CA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA898u, 0x1B1D7Cu, 0x1B1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D84u;
label_1b1d84:
    // 0x1b1d84: 0xc06b9e4  jal         func_1AE790
    ctx->pc = 0x1B1D84u;
    SET_GPR_U32(ctx, 31, 0x1B1D8Cu);
    ctx->pc = 0x1AE790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE790u, 0x1B1D84u, 0x1B1D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D8Cu;
label_1b1d8c:
    // 0x1b1d8c: 0xc06d95c  jal         func_1B6570
    ctx->pc = 0x1B1D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D94u);
    ctx->pc = 0x1B6570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6570u, 0x1B1D8Cu, 0x1B1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D94u;
label_1b1d94:
    // 0x1b1d94: 0xc06d39a  jal         func_1B4E68
    ctx->pc = 0x1B1D94u;
    SET_GPR_U32(ctx, 31, 0x1B1D9Cu);
    ctx->pc = 0x1B4E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E68u, 0x1B1D94u, 0x1B1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D9Cu;
label_1b1d9c:
    // 0x1b1d9c: 0xc06baba  jal         func_1AEAE8
    ctx->pc = 0x1B1D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1DA4u);
    ctx->pc = 0x1AEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEAE8u, 0x1B1D9Cu, 0x1B1DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DA4u;
label_1b1da4:
    // 0x1b1da4: 0xc06d2b8  jal         func_1B4AE0
    ctx->pc = 0x1B1DA4u;
    SET_GPR_U32(ctx, 31, 0x1B1DACu);
    ctx->pc = 0x1B4AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AE0u, 0x1B1DA4u, 0x1B1DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DACu;
label_1b1dac:
    // 0x1b1dac: 0xc071af0  jal         func_1C6BC0
    ctx->pc = 0x1B1DACu;
    SET_GPR_U32(ctx, 31, 0x1B1DB4u);
    ctx->pc = 0x1C6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6BC0u, 0x1B1DACu, 0x1B1DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DB4u;
label_1b1db4:
    // 0x1b1db4: 0xc0739d2  jal         func_1CE748
    ctx->pc = 0x1B1DB4u;
    SET_GPR_U32(ctx, 31, 0x1B1DBCu);
    ctx->pc = 0x1CE748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE748u, 0x1B1DB4u, 0x1B1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DBCu;
label_1b1dbc:
    // 0x1b1dbc: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b1dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b1dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dc4: 0xc06d2c4  jal         func_1B4B10
    ctx->pc = 0x1B1DC4u;
    SET_GPR_U32(ctx, 31, 0x1B1DCCu);
    ctx->pc = 0x1B1DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DC4u;
    // 0x1b1dc8: 0x24841c70  addiu       $a0, $a0, 0x1C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B10u, 0x1B1DC4u, 0x1B1DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DCCu;
label_1b1dcc:
    // 0x1b1dcc: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1b1dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1b1dd0: 0x24841c88  addiu       $a0, $a0, 0x1C88
    ctx->pc = 0x1b1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7304));
    // 0x1b1dd4: 0xc071abe  jal         func_1C6AF8
    ctx->pc = 0x1B1DD4u;
    SET_GPR_U32(ctx, 31, 0x1B1DDCu);
    ctx->pc = 0x1B1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DD4u;
    // 0x1b1dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AF8u, 0x1B1DD4u, 0x1B1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DDCu;
label_1b1ddc:
    // 0x1b1ddc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b1de0: 0x24842368  addiu       $a0, $a0, 0x2368
    ctx->pc = 0x1b1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9064));
    // 0x1b1de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1de8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1B1DE8u;
    SET_GPR_U32(ctx, 31, 0x1B1DF0u);
    ctx->pc = 0x1B1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DE8u;
    // 0x1b1dec: 0x24060c80  addiu       $a2, $zero, 0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1B1DE8u, 0x1B1DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DF0u;
label_1b1df0:
    // 0x1b1df0: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b1df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1b1df4: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x1b1df8: 0x24c61ce8  addiu       $a2, $a2, 0x1CE8
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7400));
    // 0x1b1dfc: 0x25087b88  addiu       $t0, $t0, 0x7B88
    ctx->pc = 0x1b1dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31624));
    // 0x1b1e00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b1e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1e08: 0xc073878  jal         func_1CE1E0
    ctx->pc = 0x1B1E08u;
    SET_GPR_U32(ctx, 31, 0x1B1E10u);
    ctx->pc = 0x1B1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E08u;
    // 0x1b1e0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E0u, 0x1B1E08u, 0x1B1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E10u;
label_1b1e10:
    // 0x1b1e10: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b1e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b1e14: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x1b1e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x1b1e18: 0x24a51d08  addiu       $a1, $a1, 0x1D08
    ctx->pc = 0x1b1e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7432));
    // 0x1b1e1c: 0x24e77b98  addiu       $a3, $a3, 0x7B98
    ctx->pc = 0x1b1e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31640));
    // 0x1b1e20: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1b1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1e24: 0xc0737f2  jal         func_1CDFC8
    ctx->pc = 0x1B1E24u;
    SET_GPR_U32(ctx, 31, 0x1B1E2Cu);
    ctx->pc = 0x1B1E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E24u;
    // 0x1b1e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDFC8u, 0x1B1E24u, 0x1B1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E2Cu;
label_1b1e2c:
    // 0x1b1e2c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1e30: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1b1e34: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x1b1e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x1b1e38: 0x24e77ba8  addiu       $a3, $a3, 0x7BA8
    ctx->pc = 0x1b1e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31656));
    // 0x1b1e3c: 0x24a51cc8  addiu       $a1, $a1, 0x1CC8
    ctx->pc = 0x1b1e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7368));
    // 0x1b1e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1e48: 0xc0737f2  jal         func_1CDFC8
    ctx->pc = 0x1B1E48u;
    SET_GPR_U32(ctx, 31, 0x1B1E50u);
    ctx->pc = 0x1B1E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E48u;
    // 0x1b1e4c: 0xac62235c  sw          $v0, 0x235C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 9052), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDFC8u, 0x1B1E48u, 0x1B1E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E50u;
label_1b1e50:
    // 0x1b1e50: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1e54: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1b1e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1b1e58: 0x24632360  addiu       $v1, $v1, 0x2360
    ctx->pc = 0x1b1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9056));
    // 0x1b1e5c: 0xaca22350  sw          $v0, 0x2350($a1)
    ctx->pc = 0x1b1e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 9040), GPR_U32(ctx, 2));
    // 0x1b1e60: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b1e64: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b1e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b1e68: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b1e68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b1e6c: 0xc06e8ee  jal         func_1BA3B8
    ctx->pc = 0x1B1E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E74u);
    ctx->pc = 0x1B1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E6Cu;
    // 0x1b1e70: 0xacc02358  sw          $zero, 0x2358($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 9048), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA3B8u, 0x1B1E6Cu, 0x1B1E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E74u;
label_1b1e74:
    // 0x1b1e74: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1B1E74u;
    SET_GPR_U32(ctx, 31, 0x1B1E7Cu);
    ctx->pc = 0x1AD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD250u, 0x1B1E74u, 0x1B1E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E7Cu;
label_1b1e7c:
    // 0x1b1e7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1e80: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1b1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b1e84:
    // 0x1b1e84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1e88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b1e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b1e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1E90u;
        // 0x1b1e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1E98u;
    // 0x1b1e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1e9c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1ea4: 0xac402348  sw          $zero, 0x2348($v0)
    ctx->pc = 0x1b1ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9032), GPR_U32(ctx, 0));
    // 0x1b1ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1eac: 0x806c74a  j           func_1B1D28
    ctx->pc = 0x1B1EACu;
    ctx->pc = 0x1B1EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1EACu;
    // 0x1b1eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1D28u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1b1d28;
    ctx->pc = 0x1B1EB4u;
    // 0x1b1eb4: 0x0  nop
    ctx->pc = 0x1b1eb4u;
    // NOP
    if (ctx->pc == 0x1b1eb4u) { ctx->pc = 0x1b1eb8u; }
}
