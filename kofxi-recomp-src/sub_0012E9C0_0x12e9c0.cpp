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

// Function: sub_0012E9C0
// Address: 0x12e9c0 - 0x12ec30
void sub_0012E9C0_0x12e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E9C0_0x12e9c0");
#endif

    switch (ctx->pc) {
        case 0x12ea1cu: goto label_12ea1c;
        case 0x12ea80u: goto label_12ea80;
        case 0x12eaa4u: goto label_12eaa4;
        case 0x12ead0u: goto label_12ead0;
        case 0x12eb00u: goto label_12eb00;
        case 0x12eb30u: goto label_12eb30;
        case 0x12eb38u: goto label_12eb38;
        case 0x12eba0u: goto label_12eba0;
        case 0x12ebd4u: goto label_12ebd4;
        case 0x12ebdcu: goto label_12ebdc;
        default: break;
    }

    ctx->pc = 0x12e9c0u;

    // 0x12e9c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12e9c4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12e9c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12e9cc: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x12e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x12e9d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12e9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12e9d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12e9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12e9d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12e9d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e9e0: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x12e9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x12e9e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e9e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12e9e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e9f0: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x12e9f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x12e9f4: 0x327000ff  andi        $s0, $s3, 0xFF
    ctx->pc = 0x12e9f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x12e9f8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x12e9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9fc: 0x101a40  sll         $v1, $s0, 9
    ctx->pc = 0x12e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
    // 0x12ea00: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EA00u;
    {
        const bool branch_taken_0x12ea00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA00u;
        // 0x12ea04: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea00) {
            ctx->pc = 0x12EA24u;
            goto label_12ea24;
        }
    }
    ctx->pc = 0x12EA08u;
    // 0x12ea08: 0x41240  sll         $v0, $a0, 9
    ctx->pc = 0x12ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x12ea0c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x12ea0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ea10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea14: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EA14u;
    SET_GPR_U32(ctx, 31, 0x12EA1Cu);
    ctx->pc = 0x12EA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA14u;
    // 0x12ea18: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F680u, 0x12EA14u, 0x12EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA1Cu;
label_12ea1c:
    // 0x12ea1c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x12EA1Cu;
    {
        const bool branch_taken_0x12ea1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA1Cu;
        // 0x12ea20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea1c) {
            ctx->pc = 0x12EB34u;
            goto label_12eb34;
        }
    }
    ctx->pc = 0x12EA24u;
label_12ea24:
    // 0x12ea24: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x12ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x12ea28: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x12ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12ea2c: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x12ea2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x12ea30: 0x54430035  bnel        $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x12EA30u;
    {
        const bool branch_taken_0x12ea30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12ea30) {
            ctx->pc = 0x12EA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EA30u;
            // 0x12ea34: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EB08u;
            goto label_12eb08;
        }
    }
    ctx->pc = 0x12EA38u;
    // 0x12ea38: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x12ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x12ea3c: 0x90429490  lbu         $v0, -0x6B70($v0)
    ctx->pc = 0x12ea3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x12ea40: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12EA40u;
    {
        const bool branch_taken_0x12ea40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ea40) {
            ctx->pc = 0x12EA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EA40u;
            // 0x12ea44: 0x2a010003  slti        $at, $s0, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EAACu;
            goto label_12eaac;
        }
    }
    ctx->pc = 0x12EA48u;
    // 0x12ea48: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x12ea48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12ea4c: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12EA4Cu;
    {
        const bool branch_taken_0x12ea4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea4c) {
            ctx->pc = 0x12EA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EA4Cu;
            // 0x12ea50: 0x2603fffd  addiu       $v1, $s0, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EA88u;
            goto label_12ea88;
        }
    }
    ctx->pc = 0x12EA54u;
    // 0x12ea54: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x12ea54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x12ea58: 0x2482fff4  addiu       $v0, $a0, -0xC
    ctx->pc = 0x12ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x12ea5c: 0x32a80  sll         $a1, $v1, 10
    ctx->pc = 0x12ea5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x12ea60: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x12ea64: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12ea68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea6c: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x12ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x12ea70: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x12ea70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ea74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ea78: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EA78u;
    SET_GPR_U32(ctx, 31, 0x12EA80u);
    ctx->pc = 0x12EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA78u;
    // 0x12ea7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F680u, 0x12EA78u, 0x12EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA80u;
label_12ea80:
    // 0x12ea80: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x12EA80u;
    {
        const bool branch_taken_0x12ea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea80) {
            ctx->pc = 0x12EB30u;
            goto label_12eb30;
        }
    }
    ctx->pc = 0x12EA88u;
label_12ea88:
    // 0x12ea88: 0x3c02009e  lui         $v0, 0x9E
    ctx->pc = 0x12ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)158 << 16));
    // 0x12ea8c: 0x24427ee0  addiu       $v0, $v0, 0x7EE0
    ctx->pc = 0x12ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x12ea90: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x12ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x12ea94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x12ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12ea9c: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EA9Cu;
    SET_GPR_U32(ctx, 31, 0x12EAA4u);
    ctx->pc = 0x12EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA9Cu;
    // 0x12eaa0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F680u, 0x12EA9Cu, 0x12EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAA4u;
label_12eaa4:
    // 0x12eaa4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12EAA4u;
    {
        const bool branch_taken_0x12eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eaa4) {
            ctx->pc = 0x12EB30u;
            goto label_12eb30;
        }
    }
    ctx->pc = 0x12EAACu;
label_12eaac:
    // 0x12eaac: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12EAACu;
    {
        const bool branch_taken_0x12eaac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eaac) {
            ctx->pc = 0x12EAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EAACu;
            // 0x12eab0: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EAD8u;
            goto label_12ead8;
        }
    }
    ctx->pc = 0x12EAB4u;
    // 0x12eab4: 0x3c02009e  lui         $v0, 0x9E
    ctx->pc = 0x12eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)158 << 16));
    // 0x12eab8: 0x101a80  sll         $v1, $s0, 10
    ctx->pc = 0x12eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0x12eabc: 0x24427ee0  addiu       $v0, $v0, 0x7EE0
    ctx->pc = 0x12eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x12eac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12eac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eac4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x12eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12eac8: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EAC8u;
    SET_GPR_U32(ctx, 31, 0x12EAD0u);
    ctx->pc = 0x12EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAC8u;
    // 0x12eacc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F680u, 0x12EAC8u, 0x12EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAD0u;
label_12ead0:
    // 0x12ead0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12EAD0u;
    {
        const bool branch_taken_0x12ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ead0) {
            ctx->pc = 0x12EB30u;
            goto label_12eb30;
        }
    }
    ctx->pc = 0x12EAD8u;
label_12ead8:
    // 0x12ead8: 0x2482fff4  addiu       $v0, $a0, -0xC
    ctx->pc = 0x12ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x12eadc: 0x32a80  sll         $a1, $v1, 10
    ctx->pc = 0x12eadcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x12eae0: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x12eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x12eae4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12eae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12eae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eaec: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x12eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x12eaf0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x12eaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12eaf4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12eaf8: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EAF8u;
    SET_GPR_U32(ctx, 31, 0x12EB00u);
    ctx->pc = 0x12EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAF8u;
    // 0x12eafc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F680u, 0x12EAF8u, 0x12EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB00u;
label_12eb00:
    // 0x12eb00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12EB00u;
    {
        const bool branch_taken_0x12eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb00) {
            ctx->pc = 0x12EB30u;
            goto label_12eb30;
        }
    }
    ctx->pc = 0x12EB08u;
label_12eb08:
    // 0x12eb08: 0x2482fff4  addiu       $v0, $a0, -0xC
    ctx->pc = 0x12eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x12eb0c: 0x32a80  sll         $a1, $v1, 10
    ctx->pc = 0x12eb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x12eb10: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x12eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x12eb14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12eb18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb1c: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x12eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x12eb20: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x12eb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12eb24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12eb28: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EB28u;
    SET_GPR_U32(ctx, 31, 0x12EB30u);
    ctx->pc = 0x12EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB28u;
    // 0x12eb2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F680u, 0x12EB28u, 0x12EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB30u;
label_12eb30:
    // 0x12eb30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12eb34:
    // 0x12eb34: 0x24033def  addiu       $v1, $zero, 0x3DEF
    ctx->pc = 0x12eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15855));
label_12eb38:
    // 0x12eb38: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x12eb38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eb3c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x12eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x12eb40: 0xa6230020  sh          $v1, 0x20($s1)
    ctx->pc = 0x12eb40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eb44: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x12eb44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12eb48: 0xa6230040  sh          $v1, 0x40($s1)
    ctx->pc = 0x12eb48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eb4c: 0xa6230060  sh          $v1, 0x60($s1)
    ctx->pc = 0x12eb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eb50: 0xa6230080  sh          $v1, 0x80($s1)
    ctx->pc = 0x12eb50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eb54: 0xa62300a0  sh          $v1, 0xA0($s1)
    ctx->pc = 0x12eb54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eb58: 0xa62300c0  sh          $v1, 0xC0($s1)
    ctx->pc = 0x12eb58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eb5c: 0xa62300e0  sh          $v1, 0xE0($s1)
    ctx->pc = 0x12eb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 224), (uint16_t)GPR_U32(ctx, 3));
    // 0x12eb60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x12EB60u;
    {
        const bool branch_taken_0x12eb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB60u;
        // 0x12eb64: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb60) {
            ctx->pc = 0x12EB38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12eb38;
        }
    }
    ctx->pc = 0x12EB68u;
    // 0x12eb68: 0x101a00  sll         $v1, $s0, 8
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x12eb6c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x12eb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x12eb70: 0x24640c00  addiu       $a0, $v1, 0xC00
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3072));
    // 0x12eb74: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x12eb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x12eb78: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12eb7c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x12eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12eb80: 0x246321f0  addiu       $v1, $v1, 0x21F0
    ctx->pc = 0x12eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8688));
    // 0x12eb84: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EB84u;
    {
        const bool branch_taken_0x12eb84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB84u;
        // 0x12eb88: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb84) {
            ctx->pc = 0x12EBA8u;
            goto label_12eba8;
        }
    }
    ctx->pc = 0x12EB8Cu;
    // 0x12eb8c: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x12eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x12eb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb94: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12eb98: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EB98u;
    SET_GPR_U32(ctx, 31, 0x12EBA0u);
    ctx->pc = 0x12EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EB98u;
    // 0x12eb9c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F680u, 0x12EB98u, 0x12EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EBA0u;
label_12eba0:
    // 0x12eba0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12EBA0u;
    {
        const bool branch_taken_0x12eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBA0u;
        // 0x12eba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eba0) {
            ctx->pc = 0x12EBD8u;
            goto label_12ebd8;
        }
    }
    ctx->pc = 0x12EBA8u;
label_12eba8:
    // 0x12eba8: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x12eba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x12ebac: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x12ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x12ebb0: 0x32a80  sll         $a1, $v1, 10
    ctx->pc = 0x12ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x12ebb4: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x12ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x12ebb8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x12ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x12ebbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebc0: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x12ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x12ebc4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x12ebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ebc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ebcc: 0xc067da0  jal         func_19F680
    ctx->pc = 0x12EBCCu;
    SET_GPR_U32(ctx, 31, 0x12EBD4u);
    ctx->pc = 0x12EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EBCCu;
    // 0x12ebd0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F680u, 0x12EBCCu, 0x12EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EBD4u;
label_12ebd4:
    // 0x12ebd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ebd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ebd8:
    // 0x12ebd8: 0x24043def  addiu       $a0, $zero, 0x3DEF
    ctx->pc = 0x12ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15855));
label_12ebdc:
    // 0x12ebdc: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x12ebdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ebe0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12ebe4: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x12ebe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ebe8: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x12ebe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12ebec: 0xa6040040  sh          $a0, 0x40($s0)
    ctx->pc = 0x12ebecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ebf0: 0xa6040060  sh          $a0, 0x60($s0)
    ctx->pc = 0x12ebf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ebf4: 0xa6040080  sh          $a0, 0x80($s0)
    ctx->pc = 0x12ebf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ebf8: 0xa60400a0  sh          $a0, 0xA0($s0)
    ctx->pc = 0x12ebf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ebfc: 0xa60400c0  sh          $a0, 0xC0($s0)
    ctx->pc = 0x12ebfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ec00: 0xa60400e0  sh          $a0, 0xE0($s0)
    ctx->pc = 0x12ec00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 4));
    // 0x12ec04: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x12EC04u;
    {
        const bool branch_taken_0x12ec04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC04u;
        // 0x12ec08: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec04) {
            ctx->pc = 0x12EBDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ebdc;
        }
    }
    ctx->pc = 0x12EC0Cu;
    // 0x12ec0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12ec0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ec10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12ec10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ec14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12ec14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ec18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12ec18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ec1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ec1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ec20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ec20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ec24: 0x3e00008  jr          $ra
    ctx->pc = 0x12EC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC24u;
        // 0x12ec28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC2Cu;
    // 0x12ec2c: 0x0  nop
    ctx->pc = 0x12ec2cu;
    // NOP
    if (ctx->pc == 0x12ec2cu) { ctx->pc = 0x12ec30u; }
}
