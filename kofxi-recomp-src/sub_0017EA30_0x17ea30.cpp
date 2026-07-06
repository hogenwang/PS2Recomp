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

// Function: sub_0017EA30
// Address: 0x17ea30 - 0x17ec50
void sub_0017EA30_0x17ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EA30_0x17ea30");
#endif

    switch (ctx->pc) {
        case 0x17ea44u: goto label_17ea44;
        case 0x17ea58u: goto label_17ea58;
        case 0x17ea6cu: goto label_17ea6c;
        case 0x17ea80u: goto label_17ea80;
        case 0x17ea9cu: goto label_17ea9c;
        case 0x17eaa8u: goto label_17eaa8;
        case 0x17eab4u: goto label_17eab4;
        case 0x17ead0u: goto label_17ead0;
        case 0x17eb74u: goto label_17eb74;
        case 0x17eb88u: goto label_17eb88;
        case 0x17eb98u: goto label_17eb98;
        default: break;
    }

    ctx->pc = 0x17ea30u;

    // 0x17ea30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ea34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ea38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ea3c: 0xc06001c  jal         func_180070
    ctx->pc = 0x17EA3Cu;
    SET_GPR_U32(ctx, 31, 0x17EA44u);
    ctx->pc = 0x17EA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA3Cu;
    // 0x17ea40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180070u, 0x17EA3Cu, 0x17EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA44u;
label_17ea44:
    // 0x17ea44: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x17ea44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x17ea48: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x17ea48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x17ea4c: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x17ea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ea50: 0xc05880c  jal         func_162030
    ctx->pc = 0x17EA50u;
    SET_GPR_U32(ctx, 31, 0x17EA58u);
    ctx->pc = 0x17EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA50u;
    // 0x17ea54: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162030u, 0x17EA50u, 0x17EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA58u;
label_17ea58:
    // 0x17ea58: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x17ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17ea5c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x17ea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17ea60: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x17ea60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x17ea64: 0xc05ccb0  jal         func_1732C0
    ctx->pc = 0x17EA64u;
    SET_GPR_U32(ctx, 31, 0x17EA6Cu);
    ctx->pc = 0x17EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA64u;
    // 0x17ea68: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1732C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1732C0u, 0x17EA64u, 0x17EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA6Cu;
label_17ea6c:
    // 0x17ea6c: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17ea70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ea70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea74: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x17ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x17ea78: 0xc0c7d18  jal         func_31F460
    ctx->pc = 0x17EA78u;
    SET_GPR_U32(ctx, 31, 0x17EA80u);
    ctx->pc = 0x17EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA78u;
    // 0x17ea7c: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F460u, 0x17EA78u, 0x17EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA80u;
label_17ea80:
    // 0x17ea80: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x17ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x17ea84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ea84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ea88: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17EA88u;
    {
        const bool branch_taken_0x17ea88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ea88) {
            ctx->pc = 0x17EA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EA88u;
            // 0x17ea8c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EAACu;
            goto label_17eaac;
        }
    }
    ctx->pc = 0x17EA90u;
    // 0x17ea90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea94: 0xc05a068  jal         func_1681A0
    ctx->pc = 0x17EA94u;
    SET_GPR_U32(ctx, 31, 0x17EA9Cu);
    ctx->pc = 0x17EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EA94u;
    // 0x17ea98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681A0u, 0x17EA94u, 0x17EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EA9Cu;
label_17ea9c:
    // 0x17ea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaa0: 0xc05a068  jal         func_1681A0
    ctx->pc = 0x17EAA0u;
    SET_GPR_U32(ctx, 31, 0x17EAA8u);
    ctx->pc = 0x17EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAA0u;
    // 0x17eaa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1681A0u, 0x17EAA0u, 0x17EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAA8u;
label_17eaa8:
    // 0x17eaa8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x17eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_17eaac:
    // 0x17eaac: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x17EAACu;
    SET_GPR_U32(ctx, 31, 0x17EAB4u);
    ctx->pc = 0x18ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADE0u, 0x17EAACu, 0x17EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAB4u;
label_17eab4:
    // 0x17eab4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17eab8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x17eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17eabc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17eac0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17eac4: 0x3042dfdf  andi        $v0, $v0, 0xDFDF
    ctx->pc = 0x17eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57311);
    // 0x17eac8: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x17EAC8u;
    SET_GPR_U32(ctx, 31, 0x17EAD0u);
    ctx->pc = 0x17EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAC8u;
    // 0x17eacc: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE10u, 0x17EAC8u, 0x17EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAD0u;
label_17ead0:
    // 0x17ead0: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x17ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17ead4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x17ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x17ead8: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x17ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x17eadc: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x17eadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x17eae0: 0x32882  srl         $a1, $v1, 2
    ctx->pc = 0x17eae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17eae4: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x17eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17eae8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17eae8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17eaec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x17EAECu;
    {
        const bool branch_taken_0x17eaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eaec) {
            ctx->pc = 0x17EAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAECu;
            // 0x17eaf0: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EB1Cu;
            goto label_17eb1c;
        }
    }
    ctx->pc = 0x17EAF4u;
    // 0x17eaf4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17eaf8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x17eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x17eafc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17eb00: 0x24424078  addiu       $v0, $v0, 0x4078
    ctx->pc = 0x17eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16504));
    // 0x17eb04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17eb08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17eb0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17eb0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eb10: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x17EB10u;
    {
        const bool branch_taken_0x17eb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb10) {
            ctx->pc = 0x17EB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EB10u;
            // 0x17eb14: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EB8Cu;
            goto label_17eb8c;
        }
    }
    ctx->pc = 0x17EB18u;
    // 0x17eb18: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x17eb18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_17eb1c:
    // 0x17eb1c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x17eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x17eb20: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x17eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17eb24: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x17eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x17eb28: 0x24634078  addiu       $v1, $v1, 0x4078
    ctx->pc = 0x17eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16504));
    // 0x17eb2c: 0x2442407c  addiu       $v0, $v0, 0x407C
    ctx->pc = 0x17eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16508));
    // 0x17eb30: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x17eb30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x17eb34: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x17eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x17eb38: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17eb3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17eb40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17eb44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17eb48: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17eb48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17eb4c: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x17eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17eb50: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x17eb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x17eb54: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x17eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17eb58: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x17eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17eb5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17eb60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17eb64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17eb68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x17eb6c: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x17EB6Cu;
    SET_GPR_U32(ctx, 31, 0x17EB74u);
    ctx->pc = 0x17EB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB6Cu;
    // 0x17eb70: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x17EB6Cu, 0x17EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB74u;
label_17eb74:
    // 0x17eb74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17eb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb78: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x17eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x17eb7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17eb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb80: 0xc05721c  jal         func_15C870
    ctx->pc = 0x17EB80u;
    SET_GPR_U32(ctx, 31, 0x17EB88u);
    ctx->pc = 0x17EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB80u;
    // 0x17eb84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x17EB80u, 0x17EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB88u;
label_17eb88:
    // 0x17eb88: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x17eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_17eb8c:
    // 0x17eb8c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x17eb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x17eb90: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x17EB90u;
    SET_GPR_U32(ctx, 31, 0x17EB98u);
    ctx->pc = 0x17EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB90u;
    // 0x17eb94: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x17EB90u, 0x17EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB98u;
label_17eb98:
    // 0x17eb98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EB98u;
    {
        const bool branch_taken_0x17eb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb98) {
            ctx->pc = 0x17EB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EB98u;
            // 0x17eb9c: 0x8e0300dc  lw          $v1, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EBB0u;
            goto label_17ebb0;
        }
    }
    ctx->pc = 0x17EBA0u;
    // 0x17eba0: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x17eba0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x17eba4: 0x306300fc  andi        $v1, $v1, 0xFC
    ctx->pc = 0x17eba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x17eba8: 0xa0430016  sb          $v1, 0x16($v0)
    ctx->pc = 0x17eba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x17ebac: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x17ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_17ebb0:
    // 0x17ebb0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17ebb4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17ebb8: 0x24a5dcb4  addiu       $a1, $a1, -0x234C
    ctx->pc = 0x17ebb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958260));
    // 0x17ebbc: 0x2484dcb5  addiu       $a0, $a0, -0x234B
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958261));
    // 0x17ebc0: 0x3066000c  andi        $a2, $v1, 0xC
    ctx->pc = 0x17ebc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x17ebc4: 0x63882  srl         $a3, $a2, 2
    ctx->pc = 0x17ebc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x17ebc8: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x17ebc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x17ebcc: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x17ebccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x17ebd0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17ebd4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17ebd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17ebd8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17ebdc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17ebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17ebe0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x17ebe4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17ebe8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17ebec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17ebf0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17ebf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ebf4: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x17ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17ebf8: 0x3065000c  andi        $a1, $v1, 0xC
    ctx->pc = 0x17ebf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x17ebfc: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x17ebfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x17ec00: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x17ec00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x17ec04: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x17ec04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17ec08: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x17ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17ec0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17ec10: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17ec14: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17ec14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17ec18: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17ec1c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17ec20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17ec24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ec28: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17ec28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ec2c: 0xa600039a  sh          $zero, 0x39A($s0)
    ctx->pc = 0x17ec2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x17ec30: 0xa600039c  sh          $zero, 0x39C($s0)
    ctx->pc = 0x17ec30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 924), (uint16_t)GPR_U32(ctx, 0));
    // 0x17ec34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ec38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ec38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC3Cu;
        // 0x17ec40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EC44u;
    // 0x17ec44: 0x0  nop
    ctx->pc = 0x17ec44u;
    // NOP
    // 0x17ec48: 0x0  nop
    ctx->pc = 0x17ec48u;
    // NOP
    // 0x17ec4c: 0x0  nop
    ctx->pc = 0x17ec4cu;
    // NOP
}
