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

// Function: sub_0028EA70
// Address: 0x28ea70 - 0x28eb88
void sub_0028EA70_0x28ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EA70_0x28ea70");
#endif

    switch (ctx->pc) {
        case 0x28ea70u: goto label_28ea70;
        case 0x28ea74u: goto label_28ea74;
        case 0x28ea78u: goto label_28ea78;
        case 0x28ea7cu: goto label_28ea7c;
        case 0x28ea80u: goto label_28ea80;
        case 0x28ea84u: goto label_28ea84;
        case 0x28ea88u: goto label_28ea88;
        case 0x28ea8cu: goto label_28ea8c;
        case 0x28ea90u: goto label_28ea90;
        case 0x28ea94u: goto label_28ea94;
        case 0x28ea98u: goto label_28ea98;
        case 0x28ea9cu: goto label_28ea9c;
        case 0x28eaa0u: goto label_28eaa0;
        case 0x28eaa4u: goto label_28eaa4;
        case 0x28eaa8u: goto label_28eaa8;
        case 0x28eaacu: goto label_28eaac;
        case 0x28eab0u: goto label_28eab0;
        case 0x28eab4u: goto label_28eab4;
        case 0x28eab8u: goto label_28eab8;
        case 0x28eabcu: goto label_28eabc;
        case 0x28eac0u: goto label_28eac0;
        case 0x28eac4u: goto label_28eac4;
        case 0x28eac8u: goto label_28eac8;
        case 0x28eaccu: goto label_28eacc;
        case 0x28ead0u: goto label_28ead0;
        case 0x28ead4u: goto label_28ead4;
        case 0x28ead8u: goto label_28ead8;
        case 0x28eadcu: goto label_28eadc;
        case 0x28eae0u: goto label_28eae0;
        case 0x28eae4u: goto label_28eae4;
        case 0x28eae8u: goto label_28eae8;
        case 0x28eaecu: goto label_28eaec;
        case 0x28eaf0u: goto label_28eaf0;
        case 0x28eaf4u: goto label_28eaf4;
        case 0x28eaf8u: goto label_28eaf8;
        case 0x28eafcu: goto label_28eafc;
        case 0x28eb00u: goto label_28eb00;
        case 0x28eb04u: goto label_28eb04;
        case 0x28eb08u: goto label_28eb08;
        case 0x28eb0cu: goto label_28eb0c;
        case 0x28eb10u: goto label_28eb10;
        case 0x28eb14u: goto label_28eb14;
        case 0x28eb18u: goto label_28eb18;
        case 0x28eb1cu: goto label_28eb1c;
        case 0x28eb20u: goto label_28eb20;
        case 0x28eb24u: goto label_28eb24;
        case 0x28eb28u: goto label_28eb28;
        case 0x28eb2cu: goto label_28eb2c;
        case 0x28eb30u: goto label_28eb30;
        case 0x28eb34u: goto label_28eb34;
        case 0x28eb38u: goto label_28eb38;
        case 0x28eb3cu: goto label_28eb3c;
        case 0x28eb40u: goto label_28eb40;
        case 0x28eb44u: goto label_28eb44;
        case 0x28eb48u: goto label_28eb48;
        case 0x28eb4cu: goto label_28eb4c;
        case 0x28eb50u: goto label_28eb50;
        case 0x28eb54u: goto label_28eb54;
        case 0x28eb58u: goto label_28eb58;
        case 0x28eb5cu: goto label_28eb5c;
        case 0x28eb60u: goto label_28eb60;
        case 0x28eb64u: goto label_28eb64;
        case 0x28eb68u: goto label_28eb68;
        case 0x28eb6cu: goto label_28eb6c;
        case 0x28eb70u: goto label_28eb70;
        case 0x28eb74u: goto label_28eb74;
        case 0x28eb78u: goto label_28eb78;
        case 0x28eb7cu: goto label_28eb7c;
        case 0x28eb80u: goto label_28eb80;
        case 0x28eb84u: goto label_28eb84;
        default: break;
    }

    ctx->pc = 0x28ea70u;

label_28ea70:
    // 0x28ea70: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28ea74:
    // 0x28ea74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ea74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28ea78:
    // 0x28ea78: 0x8c424610  lw          $v0, 0x4610($v0)
    ctx->pc = 0x28ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17936)));
label_28ea7c:
    // 0x28ea7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28ea80:
    if (ctx->pc == 0x28EA80u) {
        ctx->pc = 0x28EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA7Cu;
        // 0x28ea80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA84u;
        goto label_28ea84;
    }
    ctx->pc = 0x28EA7Cu;
    {
        const bool branch_taken_0x28ea7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA7Cu;
        // 0x28ea80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea7c) {
            ctx->pc = 0x28EAA4u;
            goto label_28eaa4;
        }
    }
    ctx->pc = 0x28EA84u;
label_28ea84:
    // 0x28ea84: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ea88:
    // 0x28ea88: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x28ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_28ea8c:
    // 0x28ea8c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ea90:
    // 0x28ea90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ea90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ea94:
    // 0x28ea94: 0xc0a5648  jal         func_295920
label_28ea98:
    if (ctx->pc == 0x28EA98u) {
        ctx->pc = 0x28EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA94u;
        // 0x28ea98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA9Cu;
        goto label_28ea9c;
    }
    ctx->pc = 0x28EA94u;
    SET_GPR_U32(ctx, 31, 0x28EA9Cu);
    ctx->pc = 0x28EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA94u;
    // 0x28ea98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28EA94u, 0x28EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA9Cu;
label_28ea9c:
    // 0x28ea9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28eaa0:
    if (ctx->pc == 0x28EAA0u) {
        ctx->pc = 0x28EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA9Cu;
        // 0x28eaa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAA4u;
        goto label_28eaa4;
    }
    ctx->pc = 0x28EA9Cu;
    {
        const bool branch_taken_0x28ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA9Cu;
        // 0x28eaa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea9c) {
            ctx->pc = 0x28EAACu;
            goto label_28eaac;
        }
    }
    ctx->pc = 0x28EAA4u;
label_28eaa4:
    // 0x28eaa4: 0x40f809  jalr        $v0
label_28eaa8:
    if (ctx->pc == 0x28EAA8u) {
        ctx->pc = 0x28EAACu;
        goto label_28eaac;
    }
    ctx->pc = 0x28EAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EAACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAA4u, 0x28EAACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EAACu;
label_28eaac:
    // 0x28eaac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28eab0:
    // 0x28eab0: 0x3e00008  jr          $ra
label_28eab4:
    if (ctx->pc == 0x28EAB4u) {
        ctx->pc = 0x28EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAB0u;
        // 0x28eab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAB8u;
        goto label_28eab8;
    }
    ctx->pc = 0x28EAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAB0u;
        // 0x28eab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EAB8u;
label_28eab8:
    // 0x28eab8: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28eabc:
    // 0x28eabc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28eabcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28eac0:
    // 0x28eac0: 0x8c424614  lw          $v0, 0x4614($v0)
    ctx->pc = 0x28eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17940)));
label_28eac4:
    // 0x28eac4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28eac8:
    if (ctx->pc == 0x28EAC8u) {
        ctx->pc = 0x28EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAC4u;
        // 0x28eac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EACCu;
        goto label_28eacc;
    }
    ctx->pc = 0x28EAC4u;
    {
        const bool branch_taken_0x28eac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAC4u;
        // 0x28eac8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eac4) {
            ctx->pc = 0x28EAECu;
            goto label_28eaec;
        }
    }
    ctx->pc = 0x28EACCu;
label_28eacc:
    // 0x28eacc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28ead0:
    // 0x28ead0: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x28ead0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_28ead4:
    // 0x28ead4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28ead4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28ead8:
    // 0x28ead8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28ead8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eadc:
    // 0x28eadc: 0xc0a5648  jal         func_295920
label_28eae0:
    if (ctx->pc == 0x28EAE0u) {
        ctx->pc = 0x28EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EADCu;
        // 0x28eae0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAE4u;
        goto label_28eae4;
    }
    ctx->pc = 0x28EADCu;
    SET_GPR_U32(ctx, 31, 0x28EAE4u);
    ctx->pc = 0x28EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EADCu;
    // 0x28eae0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28EADCu, 0x28EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAE4u;
label_28eae4:
    // 0x28eae4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28eae8:
    if (ctx->pc == 0x28EAE8u) {
        ctx->pc = 0x28EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAE4u;
        // 0x28eae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EAECu;
        goto label_28eaec;
    }
    ctx->pc = 0x28EAE4u;
    {
        const bool branch_taken_0x28eae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAE4u;
        // 0x28eae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eae4) {
            ctx->pc = 0x28EAF4u;
            goto label_28eaf4;
        }
    }
    ctx->pc = 0x28EAECu;
label_28eaec:
    // 0x28eaec: 0x40f809  jalr        $v0
label_28eaf0:
    if (ctx->pc == 0x28EAF0u) {
        ctx->pc = 0x28EAF4u;
        goto label_28eaf4;
    }
    ctx->pc = 0x28EAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EAF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAECu, 0x28EAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EAF4u;
label_28eaf4:
    // 0x28eaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28eaf8:
    // 0x28eaf8: 0x3e00008  jr          $ra
label_28eafc:
    if (ctx->pc == 0x28EAFCu) {
        ctx->pc = 0x28EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAF8u;
        // 0x28eafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB00u;
        goto label_28eb00;
    }
    ctx->pc = 0x28EAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAF8u;
        // 0x28eafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EB00u;
label_28eb00:
    // 0x28eb00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28eb04:
    // 0x28eb04: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28eb08:
    // 0x28eb08: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x28eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_28eb0c:
    // 0x28eb0c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_28eb10:
    // 0x28eb10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28eb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28eb14:
    // 0x28eb14: 0x8c424618  lw          $v0, 0x4618($v0)
    ctx->pc = 0x28eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17944)));
label_28eb18:
    // 0x28eb18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28eb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28eb1c:
    // 0x28eb1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28eb20:
    if (ctx->pc == 0x28EB20u) {
        ctx->pc = 0x28EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB1Cu;
        // 0x28eb20: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB24u;
        goto label_28eb24;
    }
    ctx->pc = 0x28EB1Cu;
    {
        const bool branch_taken_0x28eb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB1Cu;
        // 0x28eb20: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb1c) {
            ctx->pc = 0x28EB44u;
            goto label_28eb44;
        }
    }
    ctx->pc = 0x28EB24u;
label_28eb24:
    // 0x28eb24: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28eb28:
    // 0x28eb28: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x28eb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_28eb2c:
    // 0x28eb2c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28eb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28eb30:
    // 0x28eb30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28eb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eb34:
    // 0x28eb34: 0xc0a5648  jal         func_295920
label_28eb38:
    if (ctx->pc == 0x28EB38u) {
        ctx->pc = 0x28EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB34u;
        // 0x28eb38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB3Cu;
        goto label_28eb3c;
    }
    ctx->pc = 0x28EB34u;
    SET_GPR_U32(ctx, 31, 0x28EB3Cu);
    ctx->pc = 0x28EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB34u;
    // 0x28eb38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28EB34u, 0x28EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB3Cu;
label_28eb3c:
    // 0x28eb3c: 0x1000000c  b           . + 4 + (0xC << 2)
label_28eb40:
    if (ctx->pc == 0x28EB40u) {
        ctx->pc = 0x28EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB3Cu;
        // 0x28eb40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB44u;
        goto label_28eb44;
    }
    ctx->pc = 0x28EB3Cu;
    {
        const bool branch_taken_0x28eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB3Cu;
        // 0x28eb40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb3c) {
            ctx->pc = 0x28EB70u;
            goto label_28eb70;
        }
    }
    ctx->pc = 0x28EB44u;
label_28eb44:
    // 0x28eb44: 0x40f809  jalr        $v0
label_28eb48:
    if (ctx->pc == 0x28EB48u) {
        ctx->pc = 0x28EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB44u;
        // 0x28eb48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB4Cu;
        goto label_28eb4c;
    }
    ctx->pc = 0x28EB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28EB4Cu);
        ctx->pc = 0x28EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB44u;
        // 0x28eb48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB44u, 0x28EB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28EB4Cu;
label_28eb4c:
    // 0x28eb4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28eb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28eb50:
    // 0x28eb50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28eb54:
    // 0x28eb54: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_28eb58:
    if (ctx->pc == 0x28EB58u) {
        ctx->pc = 0x28EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB54u;
        // 0x28eb58: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB5Cu;
        goto label_28eb5c;
    }
    ctx->pc = 0x28EB54u;
    {
        const bool branch_taken_0x28eb54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB54u;
        // 0x28eb58: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb54) {
            ctx->pc = 0x28EB70u;
            goto label_28eb70;
        }
    }
    ctx->pc = 0x28EB5Cu;
label_28eb5c:
    // 0x28eb5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28eb60:
    // 0x28eb60: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x28eb60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_28eb64:
    // 0x28eb64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28eb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_28eb68:
    // 0x28eb68: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x28eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_28eb6c:
    // 0x28eb6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28eb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28eb70:
    // 0x28eb70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28eb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28eb74:
    // 0x28eb74: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x28eb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28eb78:
    // 0x28eb78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28eb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28eb7c:
    // 0x28eb7c: 0x3e00008  jr          $ra
label_28eb80:
    if (ctx->pc == 0x28EB80u) {
        ctx->pc = 0x28EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB7Cu;
        // 0x28eb80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EB84u;
        goto label_28eb84;
    }
    ctx->pc = 0x28EB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB7Cu;
        // 0x28eb80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EB84u;
label_28eb84:
    // 0x28eb84: 0x0  nop
    ctx->pc = 0x28eb84u;
    // NOP
}
