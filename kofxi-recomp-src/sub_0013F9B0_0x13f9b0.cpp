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

// Function: sub_0013F9B0
// Address: 0x13f9b0 - 0x13faf0
void sub_0013F9B0_0x13f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F9B0_0x13f9b0");
#endif

    switch (ctx->pc) {
        case 0x13f9d0u: goto label_13f9d0;
        case 0x13f9e8u: goto label_13f9e8;
        case 0x13faa0u: goto label_13faa0;
        case 0x13fad4u: goto label_13fad4;
        default: break;
    }

    ctx->pc = 0x13f9b0u;

    // 0x13f9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f9b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x13f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13f9b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f9c0: 0x8c820208  lw          $v0, 0x208($a0)
    ctx->pc = 0x13f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x13f9c4: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x13f9c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x13f9c8: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x13F9C8u;
    SET_GPR_U32(ctx, 31, 0x13F9D0u);
    ctx->pc = 0x13F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9C8u;
    // 0x13f9cc: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E750u, 0x13F9C8u, 0x13F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9D0u;
label_13f9d0:
    // 0x13f9d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F9D0u;
    {
        const bool branch_taken_0x13f9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f9d0) {
            ctx->pc = 0x13F9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F9D0u;
            // 0x13f9d4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F9E0u;
            goto label_13f9e0;
        }
    }
    ctx->pc = 0x13F9D8u;
    // 0x13f9d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13F9D8u;
    {
        const bool branch_taken_0x13f9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F9D8u;
        // 0x13f9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f9d8) {
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13F9E0u;
label_13f9e0:
    // 0x13f9e0: 0xc04f544  jal         func_13D510
    ctx->pc = 0x13F9E0u;
    SET_GPR_U32(ctx, 31, 0x13F9E8u);
    ctx->pc = 0x13F9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F9E0u;
    // 0x13f9e4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D510u, 0x13F9E0u, 0x13F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9E8u;
label_13f9e8:
    // 0x13f9e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13f9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13f9ec: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x13f9ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x13f9f0: 0x50200015  beql        $at, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x13F9F0u;
    {
        const bool branch_taken_0x13f9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f9f0) {
            ctx->pc = 0x13F9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F9F0u;
            // 0x13f9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13F9F8u;
    // 0x13f9f8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13f9fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fa00: 0x2463ccb0  addiu       $v1, $v1, -0x3350
    ctx->pc = 0x13fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954160));
    // 0x13fa04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fa08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fa0c: 0x400008  jr          $v0
    ctx->pc = 0x13FA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FA14u: goto label_13fa14;
            case 0x13FA1Cu: goto label_13fa1c;
            case 0x13FA24u: goto label_13fa24;
            case 0x13FA2Cu: goto label_13fa2c;
            case 0x13FA34u: goto label_13fa34;
            case 0x13FA3Cu: goto label_13fa3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FA0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13FA14u;
label_13fa14:
    // 0x13fa14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13FA14u;
    {
        const bool branch_taken_0x13fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA14u;
        // 0x13fa18: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa14) {
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13FA1Cu;
label_13fa1c:
    // 0x13fa1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13FA1Cu;
    {
        const bool branch_taken_0x13fa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA1Cu;
        // 0x13fa20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa1c) {
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13FA24u;
label_13fa24:
    // 0x13fa24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13FA24u;
    {
        const bool branch_taken_0x13fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA24u;
        // 0x13fa28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa24) {
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13FA2Cu;
label_13fa2c:
    // 0x13fa2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13FA2Cu;
    {
        const bool branch_taken_0x13fa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA2Cu;
        // 0x13fa30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa2c) {
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13FA34u;
label_13fa34:
    // 0x13fa34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13FA34u;
    {
        const bool branch_taken_0x13fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA34u;
        // 0x13fa38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa34) {
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13FA3Cu;
label_13fa3c:
    // 0x13fa3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13FA3Cu;
    {
        const bool branch_taken_0x13fa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA3Cu;
        // 0x13fa40: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa3c) {
            ctx->pc = 0x13FA48u;
            goto label_13fa48;
        }
    }
    ctx->pc = 0x13FA44u;
    // 0x13fa44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13fa44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fa48:
    // 0x13fa48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13fa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fa4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fa4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fa50: 0x3e00008  jr          $ra
    ctx->pc = 0x13FA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA50u;
        // 0x13fa54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FA58u;
    // 0x13fa58: 0x0  nop
    ctx->pc = 0x13fa58u;
    // NOP
    // 0x13fa5c: 0x0  nop
    ctx->pc = 0x13fa5cu;
    // NOP
    // 0x13fa60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13fa64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13fa68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13fa6c: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x13fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
    // 0x13fa70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FA70u;
    {
        const bool branch_taken_0x13fa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA70u;
        // 0x13fa74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa70) {
            ctx->pc = 0x13FA98u;
            goto label_13fa98;
        }
    }
    ctx->pc = 0x13FA78u;
    // 0x13fa78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fa7c: 0xa4a2020c  sh          $v0, 0x20C($a1)
    ctx->pc = 0x13fa7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 524), (uint16_t)GPR_U32(ctx, 2));
    // 0x13fa80: 0xaca00214  sw          $zero, 0x214($a1)
    ctx->pc = 0x13fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 532), GPR_U32(ctx, 0));
    // 0x13fa84: 0xaca00238  sw          $zero, 0x238($a1)
    ctx->pc = 0x13fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 568), GPR_U32(ctx, 0));
    // 0x13fa88: 0xaca00220  sw          $zero, 0x220($a1)
    ctx->pc = 0x13fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 0));
    // 0x13fa8c: 0x84a20228  lh          $v0, 0x228($a1)
    ctx->pc = 0x13fa8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 552)));
    // 0x13fa90: 0xa4a2022a  sh          $v0, 0x22A($a1)
    ctx->pc = 0x13fa90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x13fa94: 0xa4a00228  sh          $zero, 0x228($a1)
    ctx->pc = 0x13fa94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 552), (uint16_t)GPR_U32(ctx, 0));
label_13fa98:
    // 0x13fa98: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x13FA98u;
    SET_GPR_U32(ctx, 31, 0x13FAA0u);
    ctx->pc = 0x13FA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA98u;
    // 0x13fa9c: 0x8ca400dc  lw          $a0, 0xDC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x13FA98u, 0x13FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAA0u;
label_13faa0:
    // 0x13faa0: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x13faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x13faa4: 0x102fc2  srl         $a1, $s0, 31
    ctx->pc = 0x13faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x13faa8: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x13faa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x13faac: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x13faacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13fab0: 0x1810  mfhi        $v1
    ctx->pc = 0x13fab0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13fab4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13fab4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13fab8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13fabc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FABCu;
    {
        const bool branch_taken_0x13fabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FABCu;
        // 0x13fac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fabc) {
            ctx->pc = 0x13FAD4u;
            goto label_13fad4;
        }
    }
    ctx->pc = 0x13FAC4u;
    // 0x13fac4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13fac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13facc: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13FACCu;
    SET_GPR_U32(ctx, 31, 0x13FAD4u);
    ctx->pc = 0x13FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FACCu;
    // 0x13fad0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x13FACCu, 0x13FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAD4u;
label_13fad4:
    // 0x13fad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13fad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x13FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FADCu;
        // 0x13fae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FAE4u;
    // 0x13fae4: 0x0  nop
    ctx->pc = 0x13fae4u;
    // NOP
    // 0x13fae8: 0x0  nop
    ctx->pc = 0x13fae8u;
    // NOP
    // 0x13faec: 0x0  nop
    ctx->pc = 0x13faecu;
    // NOP
    if (ctx->pc == 0x13faecu) { ctx->pc = 0x13faf0u; }
}
