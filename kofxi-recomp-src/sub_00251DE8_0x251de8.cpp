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

// Function: sub_00251DE8
// Address: 0x251de8 - 0x251fa8
void sub_00251DE8_0x251de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251DE8_0x251de8");
#endif

    switch (ctx->pc) {
        case 0x251e2cu: goto label_251e2c;
        case 0x251e48u: goto label_251e48;
        case 0x251e88u: goto label_251e88;
        case 0x251e94u: goto label_251e94;
        case 0x251eb0u: goto label_251eb0;
        case 0x251f24u: goto label_251f24;
        case 0x251f34u: goto label_251f34;
        case 0x251f70u: goto label_251f70;
        default: break;
    }

    ctx->pc = 0x251de8u;

    // 0x251de8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x251de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x251dec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x251decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x251df0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x251df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x251df4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x251df4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251df8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x251df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x251dfc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x251dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x251e00: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x251e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x251e04: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x251e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x251e08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x251e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x251e0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x251e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x251e10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x251e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x251e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251e18: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x251e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x251e1c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251E1Cu;
    {
        const bool branch_taken_0x251e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E1Cu;
        // 0x251e20: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e1c) {
            ctx->pc = 0x251E2Cu;
            goto label_251e2c;
        }
    }
    ctx->pc = 0x251E24u;
    // 0x251e24: 0xc08a996  jal         func_22A658
    ctx->pc = 0x251E24u;
    SET_GPR_U32(ctx, 31, 0x251E2Cu);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x251E24u, 0x251E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E2Cu;
label_251e2c:
    // 0x251e2c: 0x1280004c  beqz        $s4, . + 4 + (0x4C << 2)
    ctx->pc = 0x251E2Cu;
    {
        const bool branch_taken_0x251e2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E2Cu;
        // 0x251e30: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e2c) {
            ctx->pc = 0x251F60u;
            goto label_251f60;
        }
    }
    ctx->pc = 0x251E34u;
    // 0x251e34: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x251e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x251e38: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x251E38u;
    {
        const bool branch_taken_0x251e38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x251E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E38u;
        // 0x251e3c: 0x30c20003  andi        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e38) {
            ctx->pc = 0x251E50u;
            goto label_251e50;
        }
    }
    ctx->pc = 0x251E40u;
    // 0x251e40: 0xc08a996  jal         func_22A658
    ctx->pc = 0x251E40u;
    SET_GPR_U32(ctx, 31, 0x251E48u);
    ctx->pc = 0x251E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E40u;
    // 0x251e44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x251E40u, 0x251E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E48u;
label_251e48:
    // 0x251e48: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x251E48u;
    {
        const bool branch_taken_0x251e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E48u;
        // 0x251e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e48) {
            ctx->pc = 0x251F74u;
            goto label_251f74;
        }
    }
    ctx->pc = 0x251E50u;
label_251e50:
    // 0x251e50: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x251E50u;
    {
        const bool branch_taken_0x251e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E50u;
        // 0x251e54: 0x26830100  addiu       $v1, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e50) {
            ctx->pc = 0x251F68u;
            goto label_251f68;
        }
    }
    ctx->pc = 0x251E58u;
    // 0x251e58: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x251e58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x251e5c: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x251e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x251e60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x251e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x251e64: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x251e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x251e68: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x251E68u;
    {
        const bool branch_taken_0x251e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251E68u;
        // 0x251e6c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251e68) {
            ctx->pc = 0x251F68u;
            goto label_251f68;
        }
    }
    ctx->pc = 0x251E70u;
    // 0x251e70: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x251e70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x251e74: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x251e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x251e78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x251e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e7c: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x251e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x251e80: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x251E80u;
    SET_GPR_U32(ctx, 31, 0x251E88u);
    ctx->pc = 0x251E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E80u;
    // 0x251e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3F0u, 0x251E80u, 0x251E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E88u;
label_251e88:
    // 0x251e88: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x251e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x251e8c: 0xc048c96  jal         func_123258
    ctx->pc = 0x251E8Cu;
    SET_GPR_U32(ctx, 31, 0x251E94u);
    ctx->pc = 0x251E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251E8Cu;
    // 0x251e90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x251E8Cu, 0x251E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251E94u;
label_251e94:
    // 0x251e94: 0x5a20002e  blezl       $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x251E94u;
    {
        const bool branch_taken_0x251e94 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x251e94) {
            ctx->pc = 0x251E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251E94u;
            // 0x251e98: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F50u;
            goto label_251f50;
        }
    }
    ctx->pc = 0x251E9Cu;
    // 0x251e9c: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x251e9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251ea0: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x251EA0u;
    {
        const bool branch_taken_0x251ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x251EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EA0u;
        // 0x251ea4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ea0) {
            ctx->pc = 0x251F4Cu;
            goto label_251f4c;
        }
    }
    ctx->pc = 0x251EA8u;
    // 0x251ea8: 0x24170083  addiu       $s7, $zero, 0x83
    ctx->pc = 0x251ea8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x251eac: 0x24160089  addiu       $s6, $zero, 0x89
    ctx->pc = 0x251eacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
label_251eb0:
    // 0x251eb0: 0x14be0003  bne         $a1, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x251EB0u;
    {
        const bool branch_taken_0x251eb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 30));
        ctx->pc = 0x251EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EB0u;
        // 0x251eb4: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251eb0) {
            ctx->pc = 0x251EC0u;
            goto label_251ec0;
        }
    }
    ctx->pc = 0x251EB8u;
    // 0x251eb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x251EB8u;
    {
        const bool branch_taken_0x251eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EB8u;
        // 0x251ebc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251eb8) {
            ctx->pc = 0x251EE0u;
            goto label_251ee0;
        }
    }
    ctx->pc = 0x251EC0u;
label_251ec0:
    // 0x251ec0: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x251EC0u;
    {
        const bool branch_taken_0x251ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251ec0) {
            ctx->pc = 0x251F68u;
            goto label_251f68;
        }
    }
    ctx->pc = 0x251EC8u;
    // 0x251ec8: 0x92720001  lbu         $s2, 0x1($s3)
    ctx->pc = 0x251ec8u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x251ecc: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x251eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x251ed0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x251ED0u;
    {
        const bool branch_taken_0x251ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251ED0u;
        // 0x251ed4: 0x232102a  slt         $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ed0) {
            ctx->pc = 0x251F68u;
            goto label_251f68;
        }
    }
    ctx->pc = 0x251ED8u;
    // 0x251ed8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x251ED8u;
    {
        const bool branch_taken_0x251ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251ed8) {
            ctx->pc = 0x251F68u;
            goto label_251f68;
        }
    }
    ctx->pc = 0x251EE0u;
label_251ee0:
    // 0x251ee0: 0x10b70004  beq         $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x251EE0u;
    {
        const bool branch_taken_0x251ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        ctx->pc = 0x251EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EE0u;
        // 0x251ee4: 0x2e420007  sltiu       $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ee0) {
            ctx->pc = 0x251EF4u;
            goto label_251ef4;
        }
    }
    ctx->pc = 0x251EE8u;
    // 0x251ee8: 0x54b60013  bnel        $a1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x251EE8u;
    {
        const bool branch_taken_0x251ee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x251ee8) {
            ctx->pc = 0x251EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251EE8u;
            // 0x251eec: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F38u;
            goto label_251f38;
        }
    }
    ctx->pc = 0x251EF0u;
    // 0x251ef0: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x251ef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_251ef4:
    // 0x251ef4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x251EF4u;
    {
        const bool branch_taken_0x251ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EF4u;
        // 0x251ef8: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ef4) {
            ctx->pc = 0x251F68u;
            goto label_251f68;
        }
    }
    ctx->pc = 0x251EFCu;
    // 0x251efc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x251efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x251f00: 0x26700003  addiu       $s0, $s3, 0x3
    ctx->pc = 0x251f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x251f04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x251f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x251f08: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x251f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x251f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f10: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x251f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x251f14: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x251f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x251f18: 0xa2720001  sb          $s2, 0x1($s3)
    ctx->pc = 0x251f18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x251f1c: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x251F1Cu;
    SET_GPR_U32(ctx, 31, 0x251F24u);
    ctx->pc = 0x251F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F1Cu;
    // 0x251f20: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x251F1Cu, 0x251F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F24u;
label_251f24:
    // 0x251f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f28: 0x26650007  addiu       $a1, $s3, 0x7
    ctx->pc = 0x251f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x251f2c: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x251F2Cu;
    SET_GPR_U32(ctx, 31, 0x251F34u);
    ctx->pc = 0x251F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F2Cu;
    // 0x251f30: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3F0u, 0x251F2Cu, 0x251F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F34u;
label_251f34:
    // 0x251f34: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x251f34u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_251f38:
    // 0x251f38: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251F38u;
    {
        const bool branch_taken_0x251f38 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x251F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F38u;
        // 0x251f3c: 0x2729821  addu        $s3, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f38) {
            ctx->pc = 0x251F4Cu;
            goto label_251f4c;
        }
    }
    ctx->pc = 0x251F40u;
    // 0x251f40: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x251f40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x251f44: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x251F44u;
    {
        const bool branch_taken_0x251f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x251f44) {
            ctx->pc = 0x251EB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251eb0;
        }
    }
    ctx->pc = 0x251F4Cu;
label_251f4c:
    // 0x251f4c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x251f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_251f50:
    // 0x251f50: 0x2c42002d  sltiu       $v0, $v0, 0x2D
    ctx->pc = 0x251f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
    // 0x251f54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251F54u;
    {
        const bool branch_taken_0x251f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251f54) {
            ctx->pc = 0x251F68u;
            goto label_251f68;
        }
    }
    ctx->pc = 0x251F5Cu;
    // 0x251f5c: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x251f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
label_251f60:
    // 0x251f60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251F60u;
    {
        const bool branch_taken_0x251f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F60u;
        // 0x251f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f60) {
            ctx->pc = 0x251F74u;
            goto label_251f74;
        }
    }
    ctx->pc = 0x251F68u;
label_251f68:
    // 0x251f68: 0xc08a996  jal         func_22A658
    ctx->pc = 0x251F68u;
    SET_GPR_U32(ctx, 31, 0x251F70u);
    ctx->pc = 0x251F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251F68u;
    // 0x251f6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x251F68u, 0x251F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251F70u;
label_251f70:
    // 0x251f70: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x251f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_251f74:
    // 0x251f74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x251f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x251f78: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x251f78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251f7c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x251f7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x251f80: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x251f80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251f84: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x251f84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251f88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x251f88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251f8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x251f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251f90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x251f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x251f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x251F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F9Cu;
        // 0x251fa0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251FA4u;
    // 0x251fa4: 0x0  nop
    ctx->pc = 0x251fa4u;
    // NOP
    if (ctx->pc == 0x251fa4u) { ctx->pc = 0x251fa8u; }
}
