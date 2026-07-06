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

// Function: sub_00169CD0
// Address: 0x169cd0 - 0x169ea0
void sub_00169CD0_0x169cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169CD0_0x169cd0");
#endif

    switch (ctx->pc) {
        case 0x169d00u: goto label_169d00;
        case 0x169d58u: goto label_169d58;
        case 0x169d74u: goto label_169d74;
        case 0x169d7cu: goto label_169d7c;
        case 0x169d84u: goto label_169d84;
        case 0x169dacu: goto label_169dac;
        case 0x169dbcu: goto label_169dbc;
        case 0x169dc8u: goto label_169dc8;
        case 0x169e04u: goto label_169e04;
        case 0x169e18u: goto label_169e18;
        case 0x169e34u: goto label_169e34;
        case 0x169e3cu: goto label_169e3c;
        case 0x169e44u: goto label_169e44;
        default: break;
    }

    ctx->pc = 0x169cd0u;

    // 0x169cd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x169cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x169cd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x169cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x169cd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x169cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x169cdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x169cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x169ce0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x169ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x169ce4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x169ce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ce8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x169cec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x169cf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169cf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169cf8: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x169CF8u;
    SET_GPR_U32(ctx, 31, 0x169D00u);
    ctx->pc = 0x169CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CF8u;
    // 0x169cfc: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x169CF8u, 0x169D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D00u;
label_169d00:
    // 0x169d00: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x169d00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d04: 0x8ea20494  lw          $v0, 0x494($s5)
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1172)));
    // 0x169d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169d0c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x169D0Cu;
    {
        const bool branch_taken_0x169d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D0Cu;
        // 0x169d10: 0x8eb4051c  lw          $s4, 0x51C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d0c) {
            ctx->pc = 0x169E70u;
            goto label_169e70;
        }
    }
    ctx->pc = 0x169D14u;
    // 0x169d14: 0x12800056  beqz        $s4, . + 4 + (0x56 << 2)
    ctx->pc = 0x169D14u;
    {
        const bool branch_taken_0x169d14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d14) {
            ctx->pc = 0x169E70u;
            goto label_169e70;
        }
    }
    ctx->pc = 0x169D1Cu;
    // 0x169d1c: 0x96a203a4  lhu         $v0, 0x3A4($s5)
    ctx->pc = 0x169d1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 932)));
    // 0x169d20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x169d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x169d24: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x169D24u;
    {
        const bool branch_taken_0x169d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169d24) {
            ctx->pc = 0x169E70u;
            goto label_169e70;
        }
    }
    ctx->pc = 0x169D2Cu;
    // 0x169d2c: 0x8e820498  lw          $v0, 0x498($s4)
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
    // 0x169d30: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x169d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x169d34: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x169D34u;
    {
        const bool branch_taken_0x169d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d34) {
            ctx->pc = 0x169E70u;
            goto label_169e70;
        }
    }
    ctx->pc = 0x169D3Cu;
    // 0x169d3c: 0x92a20287  lbu         $v0, 0x287($s5)
    ctx->pc = 0x169d3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 647)));
    // 0x169d40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x169d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x169d44: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x169D44u;
    {
        const bool branch_taken_0x169d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169d44) {
            ctx->pc = 0x169D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169D44u;
            // 0x169d48: 0x8ea3049c  lw          $v1, 0x49C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169D8Cu;
            goto label_169d8c;
        }
    }
    ctx->pc = 0x169D4Cu;
    // 0x169d4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d50: 0xc05c604  jal         func_171810
    ctx->pc = 0x169D50u;
    SET_GPR_U32(ctx, 31, 0x169D58u);
    ctx->pc = 0x169D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D50u;
    // 0x169d54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171810u, 0x169D50u, 0x169D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D58u;
label_169d58:
    // 0x169d58: 0x24030120  addiu       $v1, $zero, 0x120
    ctx->pc = 0x169d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x169d5c: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x169d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x169d60: 0xa6a3050c  sh          $v1, 0x50C($s5)
    ctx->pc = 0x169d60u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1292), (uint16_t)GPR_U32(ctx, 3));
    // 0x169d64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x169d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d68: 0xa682050c  sh          $v0, 0x50C($s4)
    ctx->pc = 0x169d68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1292), (uint16_t)GPR_U32(ctx, 2));
    // 0x169d6c: 0xc05fa8c  jal         func_17EA30
    ctx->pc = 0x169D6Cu;
    SET_GPR_U32(ctx, 31, 0x169D74u);
    ctx->pc = 0x169D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D6Cu;
    // 0x169d70: 0xa68200f0  sh          $v0, 0xF0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 240), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA30u, 0x169D6Cu, 0x169D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D74u;
label_169d74:
    // 0x169d74: 0xc05fa8c  jal         func_17EA30
    ctx->pc = 0x169D74u;
    SET_GPR_U32(ctx, 31, 0x169D7Cu);
    ctx->pc = 0x169D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D74u;
    // 0x169d78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA30u, 0x169D74u, 0x169D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D7Cu;
label_169d7c:
    // 0x169d7c: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x169D7Cu;
    SET_GPR_U32(ctx, 31, 0x169D84u);
    ctx->pc = 0x169D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D7Cu;
    // 0x169d80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x169D7Cu, 0x169D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D84u;
label_169d84:
    // 0x169d84: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x169D84u;
    {
        const bool branch_taken_0x169d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D84u;
        // 0x169d88: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d84) {
            ctx->pc = 0x169E74u;
            goto label_169e74;
        }
    }
    ctx->pc = 0x169D8Cu;
label_169d8c:
    // 0x169d8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x169d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x169d90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x169d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x169d94: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x169D94u;
    {
        const bool branch_taken_0x169d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169d94) {
            ctx->pc = 0x169E70u;
            goto label_169e70;
        }
    }
    ctx->pc = 0x169D9Cu;
    // 0x169d9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169da0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x169da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169da4: 0xc05c7fc  jal         func_171FF0
    ctx->pc = 0x169DA4u;
    SET_GPR_U32(ctx, 31, 0x169DACu);
    ctx->pc = 0x169DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DA4u;
    // 0x169da8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171FF0u, 0x169DA4u, 0x169DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169DACu;
label_169dac:
    // 0x169dac: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x169dacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169db0: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x169DB0u;
    {
        const bool branch_taken_0x169db0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x169DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DB0u;
        // 0x169db4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169db0) {
            ctx->pc = 0x169E70u;
            goto label_169e70;
        }
    }
    ctx->pc = 0x169DB8u;
    // 0x169db8: 0xa3b300a8  sb          $s3, 0xA8($sp)
    ctx->pc = 0x169db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 19));
label_169dbc:
    // 0x169dbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x169dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dc0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x169dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dc4: 0x0  nop
    ctx->pc = 0x169dc4u;
    // NOP
label_169dc8:
    // 0x169dc8: 0x962303c6  lhu         $v1, 0x3C6($s1)
    ctx->pc = 0x169dc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 966)));
    // 0x169dcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x169dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169dd0: 0xa7a30088  sh          $v1, 0x88($sp)
    ctx->pc = 0x169dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x169dd4: 0xa7a30086  sh          $v1, 0x86($sp)
    ctx->pc = 0x169dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 134), (uint16_t)GPR_U32(ctx, 3));
    // 0x169dd8: 0x922303c8  lbu         $v1, 0x3C8($s1)
    ctx->pc = 0x169dd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 968)));
    // 0x169ddc: 0xa7a30084  sh          $v1, 0x84($sp)
    ctx->pc = 0x169ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x169de0: 0xa7a2008e  sh          $v0, 0x8E($sp)
    ctx->pc = 0x169de0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 142), (uint16_t)GPR_U32(ctx, 2));
    // 0x169de4: 0xa7a0008c  sh          $zero, 0x8C($sp)
    ctx->pc = 0x169de4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 140), (uint16_t)GPR_U32(ctx, 0));
    // 0x169de8: 0x962303ba  lhu         $v1, 0x3BA($s1)
    ctx->pc = 0x169de8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 954)));
    // 0x169dec: 0x968200ec  lhu         $v0, 0xEC($s4)
    ctx->pc = 0x169decu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x169df0: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x169DF0u;
    {
        const bool branch_taken_0x169df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169df0) {
            ctx->pc = 0x169DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169DF0u;
            // 0x169df4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169E50u;
            goto label_169e50;
        }
    }
    ctx->pc = 0x169DF8u;
    // 0x169df8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x169df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169dfc: 0xc059b10  jal         func_166C40
    ctx->pc = 0x169DFCu;
    SET_GPR_U32(ctx, 31, 0x169E04u);
    ctx->pc = 0x169E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DFCu;
    // 0x169e00: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C40u, 0x169DFCu, 0x169E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E04u;
label_169e04:
    // 0x169e04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x169E04u;
    {
        const bool branch_taken_0x169e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e04) {
            ctx->pc = 0x169E4Cu;
            goto label_169e4c;
        }
    }
    ctx->pc = 0x169E0Cu;
    // 0x169e0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x169e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e10: 0xc05c604  jal         func_171810
    ctx->pc = 0x169E10u;
    SET_GPR_U32(ctx, 31, 0x169E18u);
    ctx->pc = 0x169E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E10u;
    // 0x169e14: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171810u, 0x169E10u, 0x169E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E18u;
label_169e18:
    // 0x169e18: 0x24030120  addiu       $v1, $zero, 0x120
    ctx->pc = 0x169e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x169e1c: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x169e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x169e20: 0xa6a3050c  sh          $v1, 0x50C($s5)
    ctx->pc = 0x169e20u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1292), (uint16_t)GPR_U32(ctx, 3));
    // 0x169e24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x169e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e28: 0xa682050c  sh          $v0, 0x50C($s4)
    ctx->pc = 0x169e28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1292), (uint16_t)GPR_U32(ctx, 2));
    // 0x169e2c: 0xc05fa8c  jal         func_17EA30
    ctx->pc = 0x169E2Cu;
    SET_GPR_U32(ctx, 31, 0x169E34u);
    ctx->pc = 0x169E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E2Cu;
    // 0x169e30: 0xa68200f0  sh          $v0, 0xF0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 240), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA30u, 0x169E2Cu, 0x169E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E34u;
label_169e34:
    // 0x169e34: 0xc05fa8c  jal         func_17EA30
    ctx->pc = 0x169E34u;
    SET_GPR_U32(ctx, 31, 0x169E3Cu);
    ctx->pc = 0x169E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E34u;
    // 0x169e38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA30u, 0x169E34u, 0x169E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E3Cu;
label_169e3c:
    // 0x169e3c: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x169E3Cu;
    SET_GPR_U32(ctx, 31, 0x169E44u);
    ctx->pc = 0x169E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E3Cu;
    // 0x169e40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x169E3Cu, 0x169E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E44u;
label_169e44:
    // 0x169e44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x169E44u;
    {
        const bool branch_taken_0x169e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E44u;
        // 0x169e48: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e44) {
            ctx->pc = 0x169E74u;
            goto label_169e74;
        }
    }
    ctx->pc = 0x169E4Cu;
label_169e4c:
    // 0x169e4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x169e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_169e50:
    // 0x169e50: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x169e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x169e54: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x169E54u;
    {
        const bool branch_taken_0x169e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E54u;
        // 0x169e58: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e54) {
            ctx->pc = 0x169DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_169dc8;
        }
    }
    ctx->pc = 0x169E5Cu;
    // 0x169e5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x169e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x169e60: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x169e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x169e64: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x169E64u;
    {
        const bool branch_taken_0x169e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169e64) {
            ctx->pc = 0x169E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169E64u;
            // 0x169e68: 0xa3b300a8  sb          $s3, 0xA8($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169DBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_169dbc;
        }
    }
    ctx->pc = 0x169E6Cu;
    // 0x169e6c: 0x0  nop
    ctx->pc = 0x169e6cu;
    // NOP
label_169e70:
    // 0x169e70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x169e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_169e74:
    // 0x169e74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x169e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169e78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x169e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169e7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x169e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169e80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x169e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x169e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169e94: 0x3e00008  jr          $ra
    ctx->pc = 0x169E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E94u;
        // 0x169e98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169E9Cu;
    // 0x169e9c: 0x0  nop
    ctx->pc = 0x169e9cu;
    // NOP
}
