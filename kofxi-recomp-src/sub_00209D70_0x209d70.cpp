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

// Function: sub_00209D70
// Address: 0x209d70 - 0x20a220
void sub_00209D70_0x209d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209D70_0x209d70");
#endif

    switch (ctx->pc) {
        case 0x209d90u: goto label_209d90;
        case 0x209db0u: goto label_209db0;
        case 0x209dd0u: goto label_209dd0;
        case 0x209df0u: goto label_209df0;
        case 0x209e10u: goto label_209e10;
        case 0x209e40u: goto label_209e40;
        case 0x209e90u: goto label_209e90;
        case 0x209e98u: goto label_209e98;
        case 0x209ea8u: goto label_209ea8;
        case 0x209eb8u: goto label_209eb8;
        case 0x209eccu: goto label_209ecc;
        case 0x209edcu: goto label_209edc;
        case 0x209ef4u: goto label_209ef4;
        case 0x209f34u: goto label_209f34;
        case 0x209f58u: goto label_209f58;
        case 0x209f6cu: goto label_209f6c;
        case 0x209f90u: goto label_209f90;
        case 0x209fa4u: goto label_209fa4;
        case 0x209fb8u: goto label_209fb8;
        case 0x209fe0u: goto label_209fe0;
        case 0x209ff0u: goto label_209ff0;
        case 0x20a004u: goto label_20a004;
        case 0x20a02cu: goto label_20a02c;
        case 0x20a048u: goto label_20a048;
        case 0x20a088u: goto label_20a088;
        case 0x20a09cu: goto label_20a09c;
        case 0x20a0acu: goto label_20a0ac;
        case 0x20a0b8u: goto label_20a0b8;
        case 0x20a0ecu: goto label_20a0ec;
        case 0x20a0fcu: goto label_20a0fc;
        case 0x20a108u: goto label_20a108;
        case 0x20a13cu: goto label_20a13c;
        case 0x20a158u: goto label_20a158;
        case 0x20a198u: goto label_20a198;
        case 0x20a1a4u: goto label_20a1a4;
        case 0x20a1b4u: goto label_20a1b4;
        case 0x20a1c0u: goto label_20a1c0;
        case 0x20a1e0u: goto label_20a1e0;
        case 0x20a1e8u: goto label_20a1e8;
        case 0x20a1f8u: goto label_20a1f8;
        case 0x20a200u: goto label_20a200;
        case 0x20a20cu: goto label_20a20c;
        case 0x20a214u: goto label_20a214;
        default: break;
    }

    ctx->pc = 0x209d70u;

    // 0x209d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x209d80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x209d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d88: 0xc083ae8  jal         func_20EBA0
    ctx->pc = 0x209D88u;
    SET_GPR_U32(ctx, 31, 0x209D90u);
    ctx->pc = 0x209D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D88u;
    // 0x209d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EBA0u, 0x209D88u, 0x209D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D90u;
label_209d90:
    // 0x209d90: 0x2a21000d  slti        $at, $s1, 0xD
    ctx->pc = 0x209d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x209d94: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x209D94u;
    {
        const bool branch_taken_0x209d94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x209d94) {
            ctx->pc = 0x209DA0u;
            goto label_209da0;
        }
    }
    ctx->pc = 0x209D9Cu;
    // 0x209d9c: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x209d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_209da0:
    // 0x209da0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x209da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x209da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209da8: 0xc082730  jal         func_209CC0
    ctx->pc = 0x209DA8u;
    SET_GPR_U32(ctx, 31, 0x209DB0u);
    ctx->pc = 0x209DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DA8u;
    // 0x209dac: 0x24a5f8e0  addiu       $a1, $a1, -0x720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209CC0u, 0x209DA8u, 0x209DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DB0u;
label_209db0:
    // 0x209db0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209DB0u;
    {
        const bool branch_taken_0x209db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209db0) {
            ctx->pc = 0x209DC0u;
            goto label_209dc0;
        }
    }
    ctx->pc = 0x209DB8u;
    // 0x209db8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x209DB8u;
    {
        const bool branch_taken_0x209db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DB8u;
        // 0x209dbc: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209db8) {
            ctx->pc = 0x209E1Cu;
            goto label_209e1c;
        }
    }
    ctx->pc = 0x209DC0u;
label_209dc0:
    // 0x209dc0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x209dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x209dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209dc8: 0xc082730  jal         func_209CC0
    ctx->pc = 0x209DC8u;
    SET_GPR_U32(ctx, 31, 0x209DD0u);
    ctx->pc = 0x209DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DC8u;
    // 0x209dcc: 0x24a5f8e8  addiu       $a1, $a1, -0x718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209CC0u, 0x209DC8u, 0x209DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DD0u;
label_209dd0:
    // 0x209dd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209DD0u;
    {
        const bool branch_taken_0x209dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209dd0) {
            ctx->pc = 0x209DE0u;
            goto label_209de0;
        }
    }
    ctx->pc = 0x209DD8u;
    // 0x209dd8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x209DD8u;
    {
        const bool branch_taken_0x209dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DD8u;
        // 0x209ddc: 0x2411000e  addiu       $s1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dd8) {
            ctx->pc = 0x209E1Cu;
            goto label_209e1c;
        }
    }
    ctx->pc = 0x209DE0u;
label_209de0:
    // 0x209de0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x209de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x209de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209de8: 0xc082730  jal         func_209CC0
    ctx->pc = 0x209DE8u;
    SET_GPR_U32(ctx, 31, 0x209DF0u);
    ctx->pc = 0x209DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DE8u;
    // 0x209dec: 0x24a5f8f0  addiu       $a1, $a1, -0x710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209CC0u, 0x209DE8u, 0x209DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DF0u;
label_209df0:
    // 0x209df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x209DF0u;
    {
        const bool branch_taken_0x209df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209df0) {
            ctx->pc = 0x209E00u;
            goto label_209e00;
        }
    }
    ctx->pc = 0x209DF8u;
    // 0x209df8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x209DF8u;
    {
        const bool branch_taken_0x209df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DF8u;
        // 0x209dfc: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209df8) {
            ctx->pc = 0x209E1Cu;
            goto label_209e1c;
        }
    }
    ctx->pc = 0x209E00u;
label_209e00:
    // 0x209e00: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x209e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x209e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e08: 0xc082730  jal         func_209CC0
    ctx->pc = 0x209E08u;
    SET_GPR_U32(ctx, 31, 0x209E10u);
    ctx->pc = 0x209E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E08u;
    // 0x209e0c: 0x24a5f900  addiu       $a1, $a1, -0x700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209CC0u, 0x209E08u, 0x209E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E10u;
label_209e10:
    // 0x209e10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x209E10u;
    {
        const bool branch_taken_0x209e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209e10) {
            ctx->pc = 0x209E1Cu;
            goto label_209e1c;
        }
    }
    ctx->pc = 0x209E18u;
    // 0x209e18: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x209e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_209e1c:
    // 0x209e1c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x209e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x209e20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x209e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x209e24: 0x8c63f78c  lw          $v1, -0x874($v1)
    ctx->pc = 0x209e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965132)));
    // 0x209e28: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209e2c: 0xa451be90  sh          $s1, -0x4170($v0)
    ctx->pc = 0x209e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 17));
    // 0x209e30: 0x24849e60  addiu       $a0, $a0, -0x61A0
    ctx->pc = 0x209e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    // 0x209e34: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x209e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x209e38: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209E38u;
    SET_GPR_U32(ctx, 31, 0x209E40u);
    ctx->pc = 0x209E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E38u;
    // 0x209e3c: 0xac43be8c  sw          $v1, -0x4174($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950540), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209E38u, 0x209E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E40u;
label_209e40:
    // 0x209e40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x209e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x209E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E4Cu;
        // 0x209e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209E54u;
    // 0x209e54: 0x0  nop
    ctx->pc = 0x209e54u;
    // NOP
    // 0x209e58: 0x0  nop
    ctx->pc = 0x209e58u;
    // NOP
    // 0x209e5c: 0x0  nop
    ctx->pc = 0x209e5cu;
    // NOP
    // 0x209e60: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209e64: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x209e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x209e68: 0x2484a330  addiu       $a0, $a0, -0x5CD0
    ctx->pc = 0x209e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943536));
    // 0x209e6c: 0x80558d4  j           func_156350
    ctx->pc = 0x209E6Cu;
    ctx->pc = 0x209E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E6Cu;
    // 0x209e70: 0x24a59e80  addiu       $a1, $a1, -0x6180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    sub_00156350_0x156350(rdram, ctx, runtime); return;
    ctx->pc = 0x209E74u;
    // 0x209e74: 0x0  nop
    ctx->pc = 0x209e74u;
    // NOP
    // 0x209e78: 0x0  nop
    ctx->pc = 0x209e78u;
    // NOP
    // 0x209e7c: 0x0  nop
    ctx->pc = 0x209e7cu;
    // NOP
    // 0x209e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209e88: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x209E88u;
    SET_GPR_U32(ctx, 31, 0x209E90u);
    ctx->pc = 0x209E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E88u;
    // 0x209e8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x209E88u, 0x209E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E90u;
label_209e90:
    // 0x209e90: 0xc0d0c28  jal         func_3430A0
    ctx->pc = 0x209E90u;
    SET_GPR_U32(ctx, 31, 0x209E98u);
    ctx->pc = 0x3430A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3430A0u, 0x209E90u, 0x209E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E98u;
label_209e98:
    // 0x209e98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x209E98u;
    {
        const bool branch_taken_0x209e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e98) {
            ctx->pc = 0x209EC0u;
            goto label_209ec0;
        }
    }
    ctx->pc = 0x209EA0u;
    // 0x209ea0: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x209EA0u;
    SET_GPR_U32(ctx, 31, 0x209EA8u);
    ctx->pc = 0x209EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EA0u;
    // 0x209ea4: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x209EA0u, 0x209EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EA8u;
label_209ea8:
    // 0x209ea8: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209eac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209eb0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x209EB0u;
    SET_GPR_U32(ctx, 31, 0x209EB8u);
    ctx->pc = 0x209EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EB0u;
    // 0x209eb4: 0x24849830  addiu       $a0, $a0, -0x67D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x209EB0u, 0x209EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EB8u;
label_209eb8:
    // 0x209eb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x209EB8u;
    {
        const bool branch_taken_0x209eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209eb8) {
            ctx->pc = 0x209EDCu;
            goto label_209edc;
        }
    }
    ctx->pc = 0x209EC0u;
label_209ec0:
    // 0x209ec0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x209ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x209ec4: 0xc0691f0  jal         func_1A47C0
    ctx->pc = 0x209EC4u;
    SET_GPR_U32(ctx, 31, 0x209ECCu);
    ctx->pc = 0x209EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EC4u;
    // 0x209ec8: 0x9444be90  lhu         $a0, -0x4170($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A47C0u, 0x209EC4u, 0x209ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209ECCu;
label_209ecc:
    // 0x209ecc: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209ed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209ed4: 0xc082678  jal         func_2099E0
    ctx->pc = 0x209ED4u;
    SET_GPR_U32(ctx, 31, 0x209EDCu);
    ctx->pc = 0x209ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209ED4u;
    // 0x209ed8: 0x24849840  addiu       $a0, $a0, -0x67C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x209ED4u, 0x209EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EDCu;
label_209edc:
    // 0x209edc: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209ee0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x209ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x209ee4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x209ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x209ee8: 0x24849f00  addiu       $a0, $a0, -0x6100
    ctx->pc = 0x209ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942464));
    // 0x209eec: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209EECu;
    SET_GPR_U32(ctx, 31, 0x209EF4u);
    ctx->pc = 0x209EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209EECu;
    // 0x209ef0: 0xa443be92  sh          $v1, -0x416E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294950546), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209EECu, 0x209EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209EF4u;
label_209ef4:
    // 0x209ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x209EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209EF8u;
        // 0x209efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F00u;
    // 0x209f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209f04: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x209f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x209f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209f0c: 0x2484be92  addiu       $a0, $a0, -0x416E
    ctx->pc = 0x209f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950546));
    // 0x209f10: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x209f10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209f14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x209f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x209f18: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x209f18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x209f1c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x209f1cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209f20: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x209F20u;
    {
        const bool branch_taken_0x209f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209f20) {
            ctx->pc = 0x209F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209F20u;
            // 0x209f24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209F38u;
            goto label_209f38;
        }
    }
    ctx->pc = 0x209F28u;
    // 0x209f28: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209f2c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209F2Cu;
    SET_GPR_U32(ctx, 31, 0x209F34u);
    ctx->pc = 0x209F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F2Cu;
    // 0x209f30: 0x24849f40  addiu       $a0, $a0, -0x60C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209F2Cu, 0x209F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F34u;
label_209f34:
    // 0x209f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209f38:
    // 0x209f38: 0x3e00008  jr          $ra
    ctx->pc = 0x209F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F38u;
        // 0x209f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F40u;
    // 0x209f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209f44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x209f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f50: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x209F50u;
    SET_GPR_U32(ctx, 31, 0x209F58u);
    ctx->pc = 0x209F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F50u;
    // 0x209f54: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x209F50u, 0x209F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F58u;
label_209f58:
    // 0x209f58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x209F58u;
    {
        const bool branch_taken_0x209f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f58) {
            ctx->pc = 0x209F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209F58u;
            // 0x209f5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209F70u;
            goto label_209f70;
        }
    }
    ctx->pc = 0x209F60u;
    // 0x209f60: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209f64: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209F64u;
    SET_GPR_U32(ctx, 31, 0x209F6Cu);
    ctx->pc = 0x209F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F64u;
    // 0x209f68: 0x24849f80  addiu       $a0, $a0, -0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209F64u, 0x209F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F6Cu;
label_209f6c:
    // 0x209f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209f70:
    // 0x209f70: 0x3e00008  jr          $ra
    ctx->pc = 0x209F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F70u;
        // 0x209f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F78u;
    // 0x209f78: 0x0  nop
    ctx->pc = 0x209f78u;
    // NOP
    // 0x209f7c: 0x0  nop
    ctx->pc = 0x209f7cu;
    // NOP
    // 0x209f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209f88: 0xc0d0c60  jal         func_343180
    ctx->pc = 0x209F88u;
    SET_GPR_U32(ctx, 31, 0x209F90u);
    ctx->pc = 0x343180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343180u, 0x209F88u, 0x209F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F90u;
label_209f90:
    // 0x209f90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209F90u;
    {
        const bool branch_taken_0x209f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f90) {
            ctx->pc = 0x209FACu;
            goto label_209fac;
        }
    }
    ctx->pc = 0x209F98u;
    // 0x209f98: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x209f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x209f9c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209F9Cu;
    SET_GPR_U32(ctx, 31, 0x209FA4u);
    ctx->pc = 0x209FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F9Cu;
    // 0x209fa0: 0x24846930  addiu       $a0, $a0, 0x6930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209F9Cu, 0x209FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FA4u;
label_209fa4:
    // 0x209fa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x209FA4u;
    {
        const bool branch_taken_0x209fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FA4u;
        // 0x209fa8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fa4) {
            ctx->pc = 0x209FBCu;
            goto label_209fbc;
        }
    }
    ctx->pc = 0x209FACu;
label_209fac:
    // 0x209fac: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209fb0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209FB0u;
    SET_GPR_U32(ctx, 31, 0x209FB8u);
    ctx->pc = 0x209FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FB0u;
    // 0x209fb4: 0x24849fd0  addiu       $a0, $a0, -0x6030 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209FB0u, 0x209FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FB8u;
label_209fb8:
    // 0x209fb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209fbc:
    // 0x209fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x209FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FBCu;
        // 0x209fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209FC4u;
    // 0x209fc4: 0x0  nop
    ctx->pc = 0x209fc4u;
    // NOP
    // 0x209fc8: 0x0  nop
    ctx->pc = 0x209fc8u;
    // NOP
    // 0x209fcc: 0x0  nop
    ctx->pc = 0x209fccu;
    // NOP
    // 0x209fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209fd8: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x209FD8u;
    SET_GPR_U32(ctx, 31, 0x209FE0u);
    ctx->pc = 0x209FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FD8u;
    // 0x209fdc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x209FD8u, 0x209FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FE0u;
label_209fe0:
    // 0x209fe0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x209fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x209fe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x209fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209fe8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x209FE8u;
    SET_GPR_U32(ctx, 31, 0x209FF0u);
    ctx->pc = 0x209FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FE8u;
    // 0x209fec: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x209FE8u, 0x209FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209FF0u;
label_209ff0:
    // 0x209ff0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x209ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x209ff4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x209ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x209ff8: 0x2484a010  addiu       $a0, $a0, -0x5FF0
    ctx->pc = 0x209ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942736));
    // 0x209ffc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x209FFCu;
    SET_GPR_U32(ctx, 31, 0x20A004u);
    ctx->pc = 0x20A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209FFCu;
    // 0x20a000: 0xac404378  sw          $zero, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x209FFCu, 0x20A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A004u;
label_20a004:
    // 0x20a004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a008: 0x3e00008  jr          $ra
    ctx->pc = 0x20A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A008u;
        // 0x20a00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A010u;
    // 0x20a010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a014: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20a014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a024: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x20A024u;
    SET_GPR_U32(ctx, 31, 0x20A02Cu);
    ctx->pc = 0x20A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A024u;
    // 0x20a028: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x20A024u, 0x20A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A02Cu;
label_20a02c:
    // 0x20a02c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x20a02cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20a030: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x20a030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x20a034: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20A034u;
    {
        const bool branch_taken_0x20a034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a034) {
            ctx->pc = 0x20A038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A034u;
            // 0x20a038: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A064u;
            goto label_20a064;
        }
    }
    ctx->pc = 0x20A03Cu;
    // 0x20a03c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x20a03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x20a040: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20A040u;
    SET_GPR_U32(ctx, 31, 0x20A048u);
    ctx->pc = 0x20A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A040u;
    // 0x20a044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20A040u, 0x20A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A048u;
label_20a048:
    // 0x20a048: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x20a048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x20a04c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x20a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x20a050: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x20a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x20a054: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x20a054u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20a058: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x20a058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x20a05c: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x20a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x20a060: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x20a060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_20a064:
    // 0x20a064: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20A064u;
    {
        const bool branch_taken_0x20a064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a064) {
            ctx->pc = 0x20A068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A064u;
            // 0x20a068: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A0BCu;
            goto label_20a0bc;
        }
    }
    ctx->pc = 0x20A06Cu;
    // 0x20a06c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x20a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x20a070: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x20a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x20a074: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20A074u;
    {
        const bool branch_taken_0x20a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a074) {
            ctx->pc = 0x20A078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A074u;
            // 0x20a078: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A0A4u;
            goto label_20a0a4;
        }
    }
    ctx->pc = 0x20A07Cu;
    // 0x20a07c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x20a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x20a080: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20A080u;
    SET_GPR_U32(ctx, 31, 0x20A088u);
    ctx->pc = 0x20A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A080u;
    // 0x20a084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20A080u, 0x20A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A088u;
label_20a088:
    // 0x20a088: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20a088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20a08c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x20a08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x20a090: 0x24849950  addiu       $a0, $a0, -0x66B0
    ctx->pc = 0x20a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941008));
    // 0x20a094: 0xc0558d4  jal         func_156350
    ctx->pc = 0x20A094u;
    SET_GPR_U32(ctx, 31, 0x20A09Cu);
    ctx->pc = 0x20A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A094u;
    // 0x20a098: 0x24a572a0  addiu       $a1, $a1, 0x72A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x20A094u, 0x20A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A09Cu;
label_20a09c:
    // 0x20a09c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20A09Cu;
    {
        const bool branch_taken_0x20a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a09c) {
            ctx->pc = 0x20A0B8u;
            goto label_20a0b8;
        }
    }
    ctx->pc = 0x20A0A4u;
label_20a0a4:
    // 0x20a0a4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20A0A4u;
    SET_GPR_U32(ctx, 31, 0x20A0ACu);
    ctx->pc = 0x20A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0A4u;
    // 0x20a0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20A0A4u, 0x20A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0ACu;
label_20a0ac:
    // 0x20a0ac: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20a0b0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x20A0B0u;
    SET_GPR_U32(ctx, 31, 0x20A0B8u);
    ctx->pc = 0x20A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0B0u;
    // 0x20a0b4: 0x2484a0d0  addiu       $a0, $a0, -0x5F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x20A0B0u, 0x20A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0B8u;
label_20a0b8:
    // 0x20a0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a0bc:
    // 0x20a0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C0u;
        // 0x20a0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A0C8u;
    // 0x20a0c8: 0x0  nop
    ctx->pc = 0x20a0c8u;
    // NOP
    // 0x20a0cc: 0x0  nop
    ctx->pc = 0x20a0ccu;
    // NOP
    // 0x20a0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a0d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a0dc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x20a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x20a0e0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x20a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20a0e4: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x20A0E4u;
    SET_GPR_U32(ctx, 31, 0x20A0ECu);
    ctx->pc = 0x20A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0E4u;
    // 0x20a0e8: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x20A0E4u, 0x20A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0ECu;
label_20a0ec:
    // 0x20a0ec: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x20a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x20a0f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a0f4: 0xc082678  jal         func_2099E0
    ctx->pc = 0x20A0F4u;
    SET_GPR_U32(ctx, 31, 0x20A0FCu);
    ctx->pc = 0x20A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0F4u;
    // 0x20a0f8: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x20A0F4u, 0x20A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0FCu;
label_20a0fc:
    // 0x20a0fc: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20a100: 0xc082674  jal         func_2099D0
    ctx->pc = 0x20A100u;
    SET_GPR_U32(ctx, 31, 0x20A108u);
    ctx->pc = 0x20A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A100u;
    // 0x20a104: 0x2484a120  addiu       $a0, $a0, -0x5EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x20A100u, 0x20A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A108u;
label_20a108:
    // 0x20a108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a10c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A10Cu;
        // 0x20a110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A114u;
    // 0x20a114: 0x0  nop
    ctx->pc = 0x20a114u;
    // NOP
    // 0x20a118: 0x0  nop
    ctx->pc = 0x20a118u;
    // NOP
    // 0x20a11c: 0x0  nop
    ctx->pc = 0x20a11cu;
    // NOP
    // 0x20a120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a124: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a12c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a134: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x20A134u;
    SET_GPR_U32(ctx, 31, 0x20A13Cu);
    ctx->pc = 0x20A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A134u;
    // 0x20a138: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x20A134u, 0x20A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A13Cu;
label_20a13c:
    // 0x20a13c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x20a13cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20a140: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x20a140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x20a144: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20A144u;
    {
        const bool branch_taken_0x20a144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a144) {
            ctx->pc = 0x20A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A144u;
            // 0x20a148: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A174u;
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A14Cu;
    // 0x20a14c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x20a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x20a150: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20A150u;
    SET_GPR_U32(ctx, 31, 0x20A158u);
    ctx->pc = 0x20A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A150u;
    // 0x20a154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20A150u, 0x20A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A158u;
label_20a158:
    // 0x20a158: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x20a158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x20a15c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x20a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x20a160: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x20a160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x20a164: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x20a164u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20a168: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x20a168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x20a16c: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x20a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x20a170: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x20a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_20a174:
    // 0x20a174: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x20A174u;
    {
        const bool branch_taken_0x20a174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a174) {
            ctx->pc = 0x20A178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A174u;
            // 0x20a178: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A1C4u;
            goto label_20a1c4;
        }
    }
    ctx->pc = 0x20A17Cu;
    // 0x20a17c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x20a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x20a180: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x20a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x20a184: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A184u;
    {
        const bool branch_taken_0x20a184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a184) {
            ctx->pc = 0x20A188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A184u;
            // 0x20a188: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A1ACu;
            goto label_20a1ac;
        }
    }
    ctx->pc = 0x20A18Cu;
    // 0x20a18c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x20a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x20a190: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20A190u;
    SET_GPR_U32(ctx, 31, 0x20A198u);
    ctx->pc = 0x20A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A190u;
    // 0x20a194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20A190u, 0x20A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A198u;
label_20a198:
    // 0x20a198: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x20a198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x20a19c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x20A19Cu;
    SET_GPR_U32(ctx, 31, 0x20A1A4u);
    ctx->pc = 0x20A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A19Cu;
    // 0x20a1a0: 0x248464b0  addiu       $a0, $a0, 0x64B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x20A19Cu, 0x20A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1A4u;
label_20a1a4:
    // 0x20a1a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20A1A4u;
    {
        const bool branch_taken_0x20a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a1a4) {
            ctx->pc = 0x20A1C0u;
            goto label_20a1c0;
        }
    }
    ctx->pc = 0x20A1ACu;
label_20a1ac:
    // 0x20a1ac: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x20A1ACu;
    SET_GPR_U32(ctx, 31, 0x20A1B4u);
    ctx->pc = 0x20A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1ACu;
    // 0x20a1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x20A1ACu, 0x20A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1B4u;
label_20a1b4:
    // 0x20a1b4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20a1b8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x20A1B8u;
    SET_GPR_U32(ctx, 31, 0x20A1C0u);
    ctx->pc = 0x20A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1B8u;
    // 0x20a1bc: 0x24849fd0  addiu       $a0, $a0, -0x6030 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x20A1B8u, 0x20A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1C0u;
label_20a1c0:
    // 0x20a1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a1c4:
    // 0x20a1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x20A1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1C8u;
        // 0x20a1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A1D0u;
    // 0x20a1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a1d8: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x20A1D8u;
    SET_GPR_U32(ctx, 31, 0x20A1E0u);
    ctx->pc = 0x20A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1D8u;
    // 0x20a1dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x20A1D8u, 0x20A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1E0u;
label_20a1e0:
    // 0x20a1e0: 0xc0691f0  jal         func_1A47C0
    ctx->pc = 0x20A1E0u;
    SET_GPR_U32(ctx, 31, 0x20A1E8u);
    ctx->pc = 0x20A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1E0u;
    // 0x20a1e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A47C0u, 0x20A1E0u, 0x20A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1E8u;
label_20a1e8:
    // 0x20a1e8: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20a1ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a1f0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x20A1F0u;
    SET_GPR_U32(ctx, 31, 0x20A1F8u);
    ctx->pc = 0x20A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1F0u;
    // 0x20a1f4: 0x24849830  addiu       $a0, $a0, -0x67D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x20A1F0u, 0x20A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1F8u;
label_20a1f8:
    // 0x20a1f8: 0xc087f02  jal         func_21FC08
    ctx->pc = 0x20A1F8u;
    SET_GPR_U32(ctx, 31, 0x20A200u);
    ctx->pc = 0x21FC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC08u, 0x20A1F8u, 0x20A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A200u;
label_20a200:
    // 0x20a200: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20a200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20a204: 0xc082674  jal         func_2099D0
    ctx->pc = 0x20A204u;
    SET_GPR_U32(ctx, 31, 0x20A20Cu);
    ctx->pc = 0x20A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A204u;
    // 0x20a208: 0x2484a220  addiu       $a0, $a0, -0x5DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x20A204u, 0x20A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A20Cu;
label_20a20c:
    // 0x20a20c: 0xc082888  jal         func_20A220
    ctx->pc = 0x20A20Cu;
    SET_GPR_U32(ctx, 31, 0x20A214u);
    ctx->pc = 0x20A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A220u, 0x20A20Cu, 0x20A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A214u;
label_20a214:
    // 0x20a214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a218: 0x3e00008  jr          $ra
    ctx->pc = 0x20A218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A218u;
        // 0x20a21c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A220u;
}
