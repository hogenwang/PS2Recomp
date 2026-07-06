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

// Function: sub_002B1DF0
// Address: 0x2b1df0 - 0x2b1f68
void sub_002B1DF0_0x2b1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1DF0_0x2b1df0");
#endif

    switch (ctx->pc) {
        case 0x2b1e30u: goto label_2b1e30;
        case 0x2b1e4cu: goto label_2b1e4c;
        case 0x2b1e54u: goto label_2b1e54;
        case 0x2b1e80u: goto label_2b1e80;
        case 0x2b1eacu: goto label_2b1eac;
        case 0x2b1ed4u: goto label_2b1ed4;
        case 0x2b1f08u: goto label_2b1f08;
        case 0x2b1f18u: goto label_2b1f18;
        case 0x2b1f2cu: goto label_2b1f2c;
        case 0x2b1f3cu: goto label_2b1f3c;
        default: break;
    }

    ctx->pc = 0x2b1df0u;

    // 0x2b1df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b1df4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b1df8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b1df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b1dfc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b1dfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e00: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b1e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b1e04: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b1e04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b1e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b1e0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b1e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b1e14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b1e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b1e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1e1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b1e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b1e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b1e24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b1e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e28: 0xc0a38ea  jal         func_28E3A8
    ctx->pc = 0x2B1E28u;
    SET_GPR_U32(ctx, 31, 0x2B1E30u);
    ctx->pc = 0x2B1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E28u;
    // 0x2b1e2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E3A8u, 0x2B1E28u, 0x2B1E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E30u;
label_2b1e30:
    // 0x2b1e30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1E30u;
    {
        const bool branch_taken_0x2b1e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E30u;
        // 0x2b1e34: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e30) {
            ctx->pc = 0x2B1E44u;
            goto label_2b1e44;
        }
    }
    ctx->pc = 0x2B1E38u;
    // 0x2b1e38: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x2b1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x2b1e3c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2B1E3Cu;
    {
        const bool branch_taken_0x2b1e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E3Cu;
        // 0x2b1e40: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e3c) {
            ctx->pc = 0x2B1EFCu;
            goto label_2b1efc;
        }
    }
    ctx->pc = 0x2B1E44u;
label_2b1e44:
    // 0x2b1e44: 0xc0a2e20  jal         func_28B880
    ctx->pc = 0x2B1E44u;
    SET_GPR_U32(ctx, 31, 0x2B1E4Cu);
    ctx->pc = 0x28B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B880u, 0x2B1E44u, 0x2B1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E4Cu;
label_2b1e4c:
    // 0x2b1e4c: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x2B1E4Cu;
    SET_GPR_U32(ctx, 31, 0x2B1E54u);
    ctx->pc = 0x2B1E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E4Cu;
    // 0x2b1e50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x2B1E4Cu, 0x2B1E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E54u;
label_2b1e54:
    // 0x2b1e54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b1e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e58: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1E58u;
    {
        const bool branch_taken_0x2b1e58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E58u;
        // 0x2b1e5c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e58) {
            ctx->pc = 0x2B1E70u;
            goto label_2b1e70;
        }
    }
    ctx->pc = 0x2B1E60u;
    // 0x2b1e60: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1e64: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x2b1e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x2b1e68: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2B1E68u;
    {
        const bool branch_taken_0x2b1e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E68u;
        // 0x2b1e6c: 0x24060807  addiu       $a2, $zero, 0x807 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e68) {
            ctx->pc = 0x2B1EFCu;
            goto label_2b1efc;
        }
    }
    ctx->pc = 0x2B1E70u;
label_2b1e70:
    // 0x2b1e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1e74: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2b1e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2b1e78: 0xc0a1558  jal         func_285560
    ctx->pc = 0x2B1E78u;
    SET_GPR_U32(ctx, 31, 0x2B1E80u);
    ctx->pc = 0x2B1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1E78u;
    // 0x2b1e7c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x2B1E78u, 0x2B1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1E80u;
label_2b1e80:
    // 0x2b1e80: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1E80u;
    {
        const bool branch_taken_0x2b1e80 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E80u;
        // 0x2b1e84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e80) {
            ctx->pc = 0x2B1E98u;
            goto label_2b1e98;
        }
    }
    ctx->pc = 0x2B1E88u;
    // 0x2b1e88: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1e8c: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x2b1e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x2b1e90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B1E90u;
    {
        const bool branch_taken_0x2b1e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E90u;
        // 0x2b1e94: 0x24060802  addiu       $a2, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e90) {
            ctx->pc = 0x2B1EFCu;
            goto label_2b1efc;
        }
    }
    ctx->pc = 0x2B1E98u;
label_2b1e98:
    // 0x2b1e98: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B1E98u;
    {
        const bool branch_taken_0x2b1e98 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1E98u;
        // 0x2b1e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1e98) {
            ctx->pc = 0x2B1EB8u;
            goto label_2b1eb8;
        }
    }
    ctx->pc = 0x2B1EA0u;
    // 0x2b1ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ea4: 0xc0a3cde  jal         func_28F378
    ctx->pc = 0x2B1EA4u;
    SET_GPR_U32(ctx, 31, 0x2B1EACu);
    ctx->pc = 0x2B1EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1EA4u;
    // 0x2b1ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F378u, 0x2B1EA4u, 0x2B1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1EACu;
label_2b1eac:
    // 0x2b1eac: 0x2410080d  addiu       $s0, $zero, 0x80D
    ctx->pc = 0x2b1eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x2b1eb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B1EB0u;
    {
        const bool branch_taken_0x2b1eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EB0u;
        // 0x2b1eb4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1eb0) {
            ctx->pc = 0x2B1EE8u;
            goto label_2b1ee8;
        }
    }
    ctx->pc = 0x2B1EB8u;
label_2b1eb8:
    // 0x2b1eb8: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B1EB8u;
    {
        const bool branch_taken_0x2b1eb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EB8u;
        // 0x2b1ebc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1eb8) {
            ctx->pc = 0x2B1EDCu;
            goto label_2b1edc;
        }
    }
    ctx->pc = 0x2B1EC0u;
    // 0x2b1ec0: 0x8e8600d8  lw          $a2, 0xD8($s4)
    ctx->pc = 0x2b1ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x2b1ec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ecc: 0xc0a3ccc  jal         func_28F330
    ctx->pc = 0x2B1ECCu;
    SET_GPR_U32(ctx, 31, 0x2B1ED4u);
    ctx->pc = 0x2B1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1ECCu;
    // 0x2b1ed0: 0x24100809  addiu       $s0, $zero, 0x809 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F330u, 0x2B1ECCu, 0x2B1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1ED4u;
label_2b1ed4:
    // 0x2b1ed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1ED4u;
    {
        const bool branch_taken_0x2b1ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1ED4u;
        // 0x2b1ed8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ed4) {
            ctx->pc = 0x2B1EE8u;
            goto label_2b1ee8;
        }
    }
    ctx->pc = 0x2B1EDCu;
label_2b1edc:
    // 0x2b1edc: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x2b1edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x2b1ee0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1EE0u;
    {
        const bool branch_taken_0x2b1ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EE0u;
        // 0x2b1ee4: 0x2406007c  addiu       $a2, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ee0) {
            ctx->pc = 0x2B1EFCu;
            goto label_2b1efc;
        }
    }
    ctx->pc = 0x2B1EE8u;
label_2b1ee8:
    // 0x2b1ee8: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1EE8u;
    {
        const bool branch_taken_0x2b1ee8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1EE8u;
        // 0x2b1eec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ee8) {
            ctx->pc = 0x2B1F10u;
            goto label_2b1f10;
        }
    }
    ctx->pc = 0x2B1EF0u;
    // 0x2b1ef0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b1ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1ef4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1ef8: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x2b1ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_2b1efc:
    // 0x2b1efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b1efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1f00: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B1F00u;
    SET_GPR_U32(ctx, 31, 0x2B1F08u);
    ctx->pc = 0x2B1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F00u;
    // 0x2b1f04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B1F00u, 0x2B1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F08u;
label_2b1f08:
    // 0x2b1f08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1F08u;
    {
        const bool branch_taken_0x2b1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f08) {
            ctx->pc = 0x2B1F1Cu;
            goto label_2b1f1c;
        }
    }
    ctx->pc = 0x2B1F10u;
label_2b1f10:
    // 0x2b1f10: 0xc0ac6f0  jal         func_2B1BC0
    ctx->pc = 0x2B1F10u;
    SET_GPR_U32(ctx, 31, 0x2B1F18u);
    ctx->pc = 0x2B1F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F10u;
    // 0x2b1f14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1BC0u, 0x2B1F10u, 0x2B1F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F18u;
label_2b1f18:
    // 0x2b1f18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b1f18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f1c:
    // 0x2b1f1c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1F1Cu;
    {
        const bool branch_taken_0x2b1f1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f1c) {
            ctx->pc = 0x2B1F2Cu;
            goto label_2b1f2c;
        }
    }
    ctx->pc = 0x2B1F24u;
    // 0x2b1f24: 0xc0a390c  jal         func_28E430
    ctx->pc = 0x2B1F24u;
    SET_GPR_U32(ctx, 31, 0x2B1F2Cu);
    ctx->pc = 0x2B1F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F24u;
    // 0x2b1f28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E430u, 0x2B1F24u, 0x2B1F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F2Cu;
label_2b1f2c:
    // 0x2b1f2c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1F2Cu;
    {
        const bool branch_taken_0x2b1f2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F2Cu;
        // 0x2b1f30: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f2c) {
            ctx->pc = 0x2B1F40u;
            goto label_2b1f40;
        }
    }
    ctx->pc = 0x2B1F34u;
    // 0x2b1f34: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x2B1F34u;
    SET_GPR_U32(ctx, 31, 0x2B1F3Cu);
    ctx->pc = 0x2B1F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1F34u;
    // 0x2b1f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2B1F34u, 0x2B1F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1F3Cu;
label_2b1f3c:
    // 0x2b1f3c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2b1f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b1f40:
    // 0x2b1f40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b1f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1f44: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b1f44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b1f48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b1f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1f4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b1f4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1f50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b1f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1f54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F5Cu;
        // 0x2b1f60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1F64u;
    // 0x2b1f64: 0x0  nop
    ctx->pc = 0x2b1f64u;
    // NOP
}
