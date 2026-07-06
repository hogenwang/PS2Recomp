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

// Function: sub_001C0CB0
// Address: 0x1c0cb0 - 0x1c0e90
void sub_001C0CB0_0x1c0cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0CB0_0x1c0cb0");
#endif

    switch (ctx->pc) {
        case 0x1c0d08u: goto label_1c0d08;
        case 0x1c0d48u: goto label_1c0d48;
        case 0x1c0d5cu: goto label_1c0d5c;
        case 0x1c0d68u: goto label_1c0d68;
        case 0x1c0d88u: goto label_1c0d88;
        case 0x1c0d98u: goto label_1c0d98;
        case 0x1c0da4u: goto label_1c0da4;
        case 0x1c0e04u: goto label_1c0e04;
        case 0x1c0e14u: goto label_1c0e14;
        case 0x1c0e24u: goto label_1c0e24;
        case 0x1c0e40u: goto label_1c0e40;
        default: break;
    }

    ctx->pc = 0x1c0cb0u;

    // 0x1c0cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0cb8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c0cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c0cbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0cc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c0cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c0cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c0cc8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c0ccc: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0CCCu;
    {
        const bool branch_taken_0x1c0ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CCCu;
        // 0x1c0cd0: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ccc) {
            ctx->pc = 0x1C0D2Cu;
            goto label_1c0d2c;
        }
    }
    ctx->pc = 0x1C0CD4u;
    // 0x1c0cd4: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x1c0cd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1c0cd8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1c0cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1c0cdc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C0CDCu;
    {
        const bool branch_taken_0x1c0cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0cdc) {
            ctx->pc = 0x1C0CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0CDCu;
            // 0x1c0ce0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0D2Cu;
            goto label_1c0d2c;
        }
    }
    ctx->pc = 0x1C0CE4u;
    // 0x1c0ce4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c0ce8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1c0cec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c0cf0: 0x8c639850  lw          $v1, -0x67B0($v1)
    ctx->pc = 0x1c0cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940752)));
    // 0x1c0cf4: 0x600008  jr          $v1
    ctx->pc = 0x1C0CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0D00u: goto label_1c0d00;
            case 0x1C0D20u: goto label_1c0d20;
            case 0x1C0D28u: goto label_1c0d28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C0CFCu;
    // 0x1c0cfc: 0x0  nop
    ctx->pc = 0x1c0cfcu;
    // NOP
label_1c0d00:
    // 0x1c0d00: 0xc070196  jal         func_1C0658
    ctx->pc = 0x1C0D00u;
    SET_GPR_U32(ctx, 31, 0x1C0D08u);
    ctx->pc = 0x1C0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D00u;
    // 0x1c0d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0658u, 0x1C0D00u, 0x1C0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D08u;
label_1c0d08:
    // 0x1c0d08: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1c0d08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0d0c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0d10: 0x2463c82c  addiu       $v1, $v1, -0x37D4
    ctx->pc = 0x1c0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953004));
    // 0x1c0d14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0d18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0d1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c0d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1c0d20:
    // 0x1c0d20: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1c0d20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0d24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c0d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d28:
    // 0x1c0d28: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1c0d2c:
    // 0x1c0d2c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1c0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c0d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0d34: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c0d34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c0d38: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C0D38u;
    {
        const bool branch_taken_0x1c0d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0d38) {
            ctx->pc = 0x1C0D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0D38u;
            // 0x1c0d3c: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0DECu;
            goto label_1c0dec;
        }
    }
    ctx->pc = 0x1C0D40u;
    // 0x1c0d40: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0D40u;
    SET_GPR_U32(ctx, 31, 0x1C0D48u);
    ctx->pc = 0x1C0D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D40u;
    // 0x1c0d44: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0D40u, 0x1C0D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D48u;
label_1c0d48:
    // 0x1c0d48: 0xde250028  ld          $a1, 0x28($s1)
    ctx->pc = 0x1c0d48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1c0d4c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1c0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c0d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0d54: 0xc070544  jal         func_1C1510
    ctx->pc = 0x1C0D54u;
    SET_GPR_U32(ctx, 31, 0x1C0D5Cu);
    ctx->pc = 0x1C0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D54u;
    // 0x1c0d58: 0x52af8  dsll        $a1, $a1, 11 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1510u, 0x1C0D54u, 0x1C0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D5Cu;
label_1c0d5c:
    // 0x1c0d5c: 0x24042001  addiu       $a0, $zero, 0x2001
    ctx->pc = 0x1c0d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
    // 0x1c0d60: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0D60u;
    SET_GPR_U32(ctx, 31, 0x1C0D68u);
    ctx->pc = 0x1C0D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D60u;
    // 0x1c0d64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0D60u, 0x1C0D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D68u;
label_1c0d68:
    // 0x1c0d68: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C0D68u;
    {
        const bool branch_taken_0x1c0d68 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D68u;
        // 0x1c0d6c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d68) {
            ctx->pc = 0x1C0D80u;
            goto label_1c0d80;
        }
    }
    ctx->pc = 0x1C0D70u;
    // 0x1c0d70: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1c0d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c0d74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c0d74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c0d78: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1c0d78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0d7c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1c0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_1c0d80:
    // 0x1c0d80: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0D80u;
    SET_GPR_U32(ctx, 31, 0x1C0D88u);
    ctx->pc = 0x1C0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D80u;
    // 0x1c0d84: 0x24042100  addiu       $a0, $zero, 0x2100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0D80u, 0x1C0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D88u;
label_1c0d88:
    // 0x1c0d88: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1c0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c0d8c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1c0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1c0d90: 0xc0705c0  jal         func_1C1700
    ctx->pc = 0x1C0D90u;
    SET_GPR_U32(ctx, 31, 0x1C0D98u);
    ctx->pc = 0x1C0D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D90u;
    // 0x1c0d94: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1700u, 0x1C0D90u, 0x1C0D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D98u;
label_1c0d98:
    // 0x1c0d98: 0x24042101  addiu       $a0, $zero, 0x2101
    ctx->pc = 0x1c0d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8449));
    // 0x1c0d9c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C0DA4u);
    ctx->pc = 0x1C0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D9Cu;
    // 0x1c0da0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0D9Cu, 0x1C0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DA4u;
label_1c0da4:
    // 0x1c0da4: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C0DA4u;
    {
        const bool branch_taken_0x1c0da4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DA4u;
        // 0x1c0da8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0da4) {
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0DACu;
    // 0x1c0dac: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0db0: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1c0db0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0db4: 0x2463c828  addiu       $v1, $v1, -0x37D8
    ctx->pc = 0x1c0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953000));
    // 0x1c0db8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0dbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0dc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0dc4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c0dc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0DC8u;
    {
        const bool branch_taken_0x1c0dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DC8u;
        // 0x1c0dcc: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dc8) {
            ctx->pc = 0x1C0DECu;
            goto label_1c0dec;
        }
    }
    ctx->pc = 0x1C0DD0u;
label_1c0dd0:
    // 0x1c0dd0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1c0dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c0dd4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c0dd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c0dd8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c0ddc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1c0ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0de0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1c0de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c0de4: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1c0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x1c0de8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1c0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1c0dec:
    // 0x1c0dec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0df0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c0df0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c0df4: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C0DF4u;
    {
        const bool branch_taken_0x1c0df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DF4u;
        // 0x1c0df8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0df4) {
            ctx->pc = 0x1C0E6Cu;
            goto label_1c0e6c;
        }
    }
    ctx->pc = 0x1C0DFCu;
    // 0x1c0dfc: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0DFCu;
    SET_GPR_U32(ctx, 31, 0x1C0E04u);
    ctx->pc = 0x1C0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DFCu;
    // 0x1c0e00: 0x24042200  addiu       $a0, $zero, 0x2200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0DFCu, 0x1C0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E04u;
label_1c0e04:
    // 0x1c0e04: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1c0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c0e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0e0c: 0xc070572  jal         func_1C15C8
    ctx->pc = 0x1C0E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E14u);
    ctx->pc = 0x1C0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E0Cu;
    // 0x1c0e10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C15C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C15C8u, 0x1C0E0Cu, 0x1C0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E14u;
label_1c0e14:
    // 0x1c0e14: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0E14u;
    {
        const bool branch_taken_0x1c0e14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c0e14) {
            ctx->pc = 0x1C0E38u;
            goto label_1c0e38;
        }
    }
    ctx->pc = 0x1C0E1Cu;
    // 0x1c0e1c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E24u);
    ctx->pc = 0x1C0E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E1Cu;
    // 0x1c0e20: 0x24042201  addiu       $a0, $zero, 0x2201 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8705));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0E1Cu, 0x1C0E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E24u;
label_1c0e24:
    // 0x1c0e24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c0e28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0e2c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1c0e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0e30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C0E30u;
    {
        const bool branch_taken_0x1c0e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E30u;
        // 0x1c0e34: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e30) {
            ctx->pc = 0x1C0E68u;
            goto label_1c0e68;
        }
    }
    ctx->pc = 0x1C0E38u;
label_1c0e38:
    // 0x1c0e38: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0E38u;
    SET_GPR_U32(ctx, 31, 0x1C0E40u);
    ctx->pc = 0x1C0E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E38u;
    // 0x1c0e3c: 0x24042202  addiu       $a0, $zero, 0x2202 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8706));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0E38u, 0x1C0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E40u;
label_1c0e40:
    // 0x1c0e40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0e44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0E44u;
    {
        const bool branch_taken_0x1c0e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E44u;
        // 0x1c0e48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e44) {
            ctx->pc = 0x1C0E6Cu;
            goto label_1c0e6c;
        }
    }
    ctx->pc = 0x1C0E4Cu;
    // 0x1c0e4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0e50: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0e54: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1c0e54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0e58: 0x2463c82c  addiu       $v1, $v1, -0x37D4
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953004));
    // 0x1c0e5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0e60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c0e64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1c0e68:
    // 0x1c0e68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c0e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0e6c:
    // 0x1c0e6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c0e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0e70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E74u;
        // 0x1c0e78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0E7Cu;
    // 0x1c0e7c: 0x0  nop
    ctx->pc = 0x1c0e7cu;
    // NOP
    // 0x1c0e80: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c0e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E84u;
        // 0x1c0e88: 0x8c62c80c  lw          $v0, -0x37F4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952972)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0E8Cu;
    // 0x1c0e8c: 0x0  nop
    ctx->pc = 0x1c0e8cu;
    // NOP
    if (ctx->pc == 0x1c0e8cu) { ctx->pc = 0x1c0e90u; }
}
