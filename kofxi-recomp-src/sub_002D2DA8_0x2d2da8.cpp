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

// Function: sub_002D2DA8
// Address: 0x2d2da8 - 0x2d2f68
void sub_002D2DA8_0x2d2da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2DA8_0x2d2da8");
#endif

    switch (ctx->pc) {
        case 0x2d2de4u: goto label_2d2de4;
        case 0x2d2df0u: goto label_2d2df0;
        case 0x2d2df8u: goto label_2d2df8;
        case 0x2d2e00u: goto label_2d2e00;
        case 0x2d2e18u: goto label_2d2e18;
        case 0x2d2e38u: goto label_2d2e38;
        case 0x2d2e4cu: goto label_2d2e4c;
        case 0x2d2e54u: goto label_2d2e54;
        case 0x2d2e64u: goto label_2d2e64;
        case 0x2d2e84u: goto label_2d2e84;
        case 0x2d2ea0u: goto label_2d2ea0;
        case 0x2d2ea4u: goto label_2d2ea4;
        case 0x2d2ea8u: goto label_2d2ea8;
        case 0x2d2eccu: goto label_2d2ecc;
        case 0x2d2ed8u: goto label_2d2ed8;
        case 0x2d2ee4u: goto label_2d2ee4;
        case 0x2d2f0cu: goto label_2d2f0c;
        case 0x2d2f30u: goto label_2d2f30;
        case 0x2d2f38u: goto label_2d2f38;
        default: break;
    }

    ctx->pc = 0x2d2da8u;

    // 0x2d2da8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d2da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d2dac: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d2dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d2db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2db4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d2db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2db8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d2db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d2dbc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2d2dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2d2dc0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d2dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dc4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d2dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2d2dc8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d2dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2dcc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2d2dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2d2dd0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d2dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d2dd4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2d2dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2d2dd8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2d2dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2d2ddc: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D2DDCu;
    SET_GPR_U32(ctx, 31, 0x2D2DE4u);
    ctx->pc = 0x2D2DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DDCu;
    // 0x2d2de0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D2DDCu, 0x2D2DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DE4u;
label_2d2de4:
    // 0x2d2de4: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2d2de4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2de8: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D2DE8u;
    SET_GPR_U32(ctx, 31, 0x2D2DF0u);
    ctx->pc = 0x2D2DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DE8u;
    // 0x2d2dec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D2DE8u, 0x2D2DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2DF0u;
label_2d2df0:
    // 0x2d2df0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D2DF0u;
    {
        const bool branch_taken_0x2d2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DF0u;
        // 0x2d2df4: 0x8e950004  lw          $s5, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2df0) {
            ctx->pc = 0x2D2EB0u;
            goto label_2d2eb0;
        }
    }
    ctx->pc = 0x2D2DF8u;
label_2d2df8:
    // 0x2d2df8: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D2DF8u;
    SET_GPR_U32(ctx, 31, 0x2D2E00u);
    ctx->pc = 0x2D2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2DF8u;
    // 0x2d2dfc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D2DF8u, 0x2D2E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E00u;
label_2d2e00:
    // 0x2d2e00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e04: 0x16000048  bnez        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2D2E04u;
    {
        const bool branch_taken_0x2d2e04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e04) {
            ctx->pc = 0x2D2F28u;
            goto label_2d2f28;
        }
    }
    ctx->pc = 0x2D2E0Cu;
    // 0x2d2e0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e10: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D2E10u;
    SET_GPR_U32(ctx, 31, 0x2D2E18u);
    ctx->pc = 0x2D2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E10u;
    // 0x2d2e14: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D2E10u, 0x2D2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E18u;
label_2d2e18:
    // 0x2d2e18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e1c: 0x16000042  bnez        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2D2E1Cu;
    {
        const bool branch_taken_0x2d2e1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e1c) {
            ctx->pc = 0x2D2F28u;
            goto label_2d2f28;
        }
    }
    ctx->pc = 0x2D2E24u;
    // 0x2d2e24: 0x2644fffd  addiu       $a0, $s2, -0x3
    ctx->pc = 0x2d2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967293));
    // 0x2d2e28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d2e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e2c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2d2e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d2e30: 0xc0b517a  jal         func_2D45E8
    ctx->pc = 0x2D2E30u;
    SET_GPR_U32(ctx, 31, 0x2D2E38u);
    ctx->pc = 0x2D2E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E30u;
    // 0x2d2e34: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D45E8u, 0x2D2E30u, 0x2D2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E38u;
label_2d2e38:
    // 0x2d2e38: 0x26a4fffe  addiu       $a0, $s5, -0x2
    ctx->pc = 0x2d2e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x2d2e3c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x2d2e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d2e40: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d2e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e44: 0xc0b517a  jal         func_2D45E8
    ctx->pc = 0x2D2E44u;
    SET_GPR_U32(ctx, 31, 0x2D2E4Cu);
    ctx->pc = 0x2D2E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E44u;
    // 0x2d2e48: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D45E8u, 0x2D2E44u, 0x2D2E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E4Cu;
label_2d2e4c:
    // 0x2d2e4c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2d2e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d2e50: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2d2e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d2e54:
    // 0x2d2e54: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2d2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d2e58: 0x27a80028  addiu       $t0, $sp, 0x28
    ctx->pc = 0x2d2e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2d2e5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e60: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d2e60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d2e64:
    // 0x2d2e64: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2e68: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2d2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d2e6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d2e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d2e70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d2e74: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d2e74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d2e78: 0xdc46fff0  ld          $a2, -0x10($v0)
    ctx->pc = 0x2d2e78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x2d2e7c: 0xc0b4bda  jal         func_2D2F68
    ctx->pc = 0x2D2E7Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E84u);
    ctx->pc = 0x2D2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E7Cu;
    // 0x2d2e80: 0xdc45fff8  ld          $a1, -0x8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F68u, 0x2D2E7Cu, 0x2D2E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E84u;
label_2d2e84:
    // 0x2d2e84: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d2e88: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x2d2e88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2e8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d2e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d2e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e98: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d2e98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d2e9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d2e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d2ea0:
    // 0x2d2ea0: 0xc0b495a  jal         func_2D2568
label_2d2ea4:
    if (ctx->pc == 0x2D2EA4u) {
        ctx->pc = 0x2D2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EA0u;
        // 0x2d2ea4: 0xae270004  sw          $a3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2EA8u;
        goto label_2d2ea8;
    }
    ctx->pc = 0x2D2EA0u;
    SET_GPR_U32(ctx, 31, 0x2D2EA8u);
    ctx->pc = 0x2D2EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2EA0u;
    // 0x2d2ea4: 0xae270004  sw          $a3, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2568u, 0x2D2EA0u, 0x2D2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2EA8u;
label_2d2ea8:
    // 0x2d2ea8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D2EA8u;
    {
        const bool branch_taken_0x2d2ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ea8) {
            ctx->pc = 0x2D2F28u;
            goto label_2d2f28;
        }
    }
    ctx->pc = 0x2D2EB0u;
label_2d2eb0:
    // 0x2d2eb0: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x2d2eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d2eb4: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x2d2eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d2eb8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2D2EB8u;
    {
        const bool branch_taken_0x2d2eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EB8u;
        // 0x2d2ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2eb8) {
            ctx->pc = 0x2D2DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2df8;
        }
    }
    ctx->pc = 0x2D2EC0u;
    // 0x2d2ec0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2ec4: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2EC4u;
    {
        const bool branch_taken_0x2d2ec4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2d2ec4) {
            ctx->pc = 0x2D2EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2EC4u;
            // 0x2d2ec8: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2EE8u;
            goto label_2d2ee8;
        }
    }
    ctx->pc = 0x2D2ECCu;
label_2d2ecc:
    // 0x2d2ecc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2ed0: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D2ED0u;
    SET_GPR_U32(ctx, 31, 0x2D2ED8u);
    ctx->pc = 0x2D2ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2ED0u;
    // 0x2d2ed4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D2ED0u, 0x2D2ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2ED8u;
label_2d2ed8:
    // 0x2d2ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2edc: 0x16000012  bnez        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D2EDCu;
    {
        const bool branch_taken_0x2d2edc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2edc) {
            ctx->pc = 0x2D2F28u;
            goto label_2d2f28;
        }
    }
    ctx->pc = 0x2D2EE4u;
label_2d2ee4:
    // 0x2d2ee4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2d2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2d2ee8:
    // 0x2d2ee8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d2ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2eec: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2d2eecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2d2ef0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2d2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x2d2ef4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d2ef8: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2EF8u;
    {
        const bool branch_taken_0x2d2ef8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2d2ef8) {
            ctx->pc = 0x2D2EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2EF8u;
            // 0x2d2efc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2F1Cu;
            goto label_2d2f1c;
        }
    }
    ctx->pc = 0x2D2F00u;
    // 0x2d2f00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2f04: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D2F04u;
    SET_GPR_U32(ctx, 31, 0x2D2F0Cu);
    ctx->pc = 0x2D2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2F04u;
    // 0x2d2f08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D2F04u, 0x2D2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F0Cu;
label_2d2f0c:
    // 0x2d2f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f10: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2F10u;
    {
        const bool branch_taken_0x2d2f10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f10) {
            ctx->pc = 0x2D2F28u;
            goto label_2d2f28;
        }
    }
    ctx->pc = 0x2D2F18u;
    // 0x2d2f18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2d2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d2f1c:
    // 0x2d2f1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d2f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f20: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2d2f20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2d2f24: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x2d2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_2d2f28:
    // 0x2d2f28: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D2F28u;
    SET_GPR_U32(ctx, 31, 0x2D2F30u);
    ctx->pc = 0x2D2F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2F28u;
    // 0x2d2f2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D2F28u, 0x2D2F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F30u;
label_2d2f30:
    // 0x2d2f30: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D2F30u;
    SET_GPR_U32(ctx, 31, 0x2D2F38u);
    ctx->pc = 0x2D2F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2F30u;
    // 0x2d2f34: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D2F30u, 0x2D2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F38u;
label_2d2f38:
    // 0x2d2f38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d2f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f3c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d2f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2f40: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d2f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2f44: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d2f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2f48: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2d2f48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2f4c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d2f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2f50: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2d2f50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d2f54: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2d2f54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2f58: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2d2f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d2f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F5Cu;
        // 0x2d2f60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2F64u;
    // 0x2d2f64: 0x0  nop
    ctx->pc = 0x2d2f64u;
    // NOP
    if (ctx->pc == 0x2d2f64u) { ctx->pc = 0x2d2f68u; }
}
