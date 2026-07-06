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

// Function: sub_002D0D18
// Address: 0x2d0d18 - 0x2d1018
void sub_002D0D18_0x2d0d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0D18_0x2d0d18");
#endif

    switch (ctx->pc) {
        case 0x2d0d68u: goto label_2d0d68;
        case 0x2d0d80u: goto label_2d0d80;
        case 0x2d0d88u: goto label_2d0d88;
        case 0x2d0db0u: goto label_2d0db0;
        case 0x2d0dc0u: goto label_2d0dc0;
        case 0x2d0ddcu: goto label_2d0ddc;
        case 0x2d0e08u: goto label_2d0e08;
        case 0x2d0e50u: goto label_2d0e50;
        case 0x2d0e8cu: goto label_2d0e8c;
        case 0x2d0ee4u: goto label_2d0ee4;
        case 0x2d0f00u: goto label_2d0f00;
        case 0x2d0f18u: goto label_2d0f18;
        case 0x2d0f28u: goto label_2d0f28;
        case 0x2d0f40u: goto label_2d0f40;
        case 0x2d1008u: goto label_2d1008;
        default: break;
    }

    ctx->pc = 0x2d0d18u;

    // 0x2d0d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0d1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d0d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d0d20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d0d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d0d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0d28: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2d0d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d2c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d0d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d0d30: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x2d0d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d0d38: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2d0d38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d3c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d0d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d0d40: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2d0d40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d44: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d0d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d0d48: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2d0d48u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d0d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d0d50: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d0d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d0d54: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d0d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d0d58: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d0d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d0d5c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2D0D5Cu;
    {
        const bool branch_taken_0x2d0d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D5Cu;
        // 0x2d0d60: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d5c) {
            ctx->pc = 0x2D0F20u;
            goto label_2d0f20;
        }
    }
    ctx->pc = 0x2D0D64u;
    // 0x2d0d64: 0x0  nop
    ctx->pc = 0x2d0d64u;
    // NOP
label_2d0d68:
    // 0x2d0d68: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d0d68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0d6c: 0x26360008  addiu       $s6, $s1, 0x8
    ctx->pc = 0x2d0d6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2d0d70: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x2d0d70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d0d74: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d0d78: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2d0d78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d7c: 0x0  nop
    ctx->pc = 0x2d0d7cu;
    // NOP
label_2d0d80:
    // 0x2d0d80: 0xc0b6178  jal         func_2D85E0
    ctx->pc = 0x2D0D80u;
    SET_GPR_U32(ctx, 31, 0x2D0D88u);
    ctx->pc = 0x2D0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D80u;
    // 0x2d0d84: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D85E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85E0u, 0x2D0D80u, 0x2D0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D88u;
label_2d0d88:
    // 0x2d0d88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0d88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d8c: 0x54600070  bnel        $v1, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x2D0D8Cu;
    {
        const bool branch_taken_0x2d0d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d8c) {
            ctx->pc = 0x2D0D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0D8Cu;
            // 0x2d0d90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0D94u;
    // 0x2d0d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0d98: 0x16e2000a  bne         $s7, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0D98u;
    {
        const bool branch_taken_0x2d0d98 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D98u;
        // 0x2d0d9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d98) {
            ctx->pc = 0x2D0DC4u;
            goto label_2d0dc4;
        }
    }
    ctx->pc = 0x2D0DA0u;
    // 0x2d0da0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d0da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0da4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d0da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0da8: 0xc0b4864  jal         func_2D2190
    ctx->pc = 0x2D0DA8u;
    SET_GPR_U32(ctx, 31, 0x2D0DB0u);
    ctx->pc = 0x2D0DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DA8u;
    // 0x2d0dac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2190u, 0x2D0DA8u, 0x2D0DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DB0u;
label_2d0db0:
    // 0x2d0db0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0db4: 0x54600066  bnel        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x2D0DB4u;
    {
        const bool branch_taken_0x2d0db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0db4) {
            ctx->pc = 0x2D0DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0DB4u;
            // 0x2d0db8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0DBCu;
    // 0x2d0dbc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d0dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d0dc0:
    // 0x2d0dc0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2d0dc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0dc4:
    // 0x2d0dc4: 0x1a000013  blez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D0DC4u;
    {
        const bool branch_taken_0x2d0dc4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2D0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DC4u;
        // 0x2d0dc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dc4) {
            ctx->pc = 0x2D0E14u;
            goto label_2d0e14;
        }
    }
    ctx->pc = 0x2D0DCCu;
    // 0x2d0dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d0dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0dd0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d0dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0dd4: 0xc0b4864  jal         func_2D2190
    ctx->pc = 0x2D0DD4u;
    SET_GPR_U32(ctx, 31, 0x2D0DDCu);
    ctx->pc = 0x2D0DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0DD4u;
    // 0x2d0dd8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2190u, 0x2D0DD4u, 0x2D0DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0DDCu;
label_2d0ddc:
    // 0x2d0ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0de0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0de0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0de4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d0de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0de8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d0de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0dec: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2D0DECu;
    {
        const bool branch_taken_0x2d0dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DECu;
        // 0x2d0df0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0dec) {
            ctx->pc = 0x2D0F4Cu;
            goto label_2d0f4c;
        }
    }
    ctx->pc = 0x2D0DF4u;
    // 0x2d0df4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d0df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d0df8: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0DF8u;
    {
        const bool branch_taken_0x2d0df8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2D0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0DF8u;
        // 0x2d0dfc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0df8) {
            ctx->pc = 0x2D0E14u;
            goto label_2d0e14;
        }
    }
    ctx->pc = 0x2D0E00u;
    // 0x2d0e00: 0xc0b4864  jal         func_2D2190
    ctx->pc = 0x2D0E00u;
    SET_GPR_U32(ctx, 31, 0x2D0E08u);
    ctx->pc = 0x2D2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2190u, 0x2D0E00u, 0x2D0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E08u;
label_2d0e08:
    // 0x2d0e08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e0c: 0x5060ffec  beql        $v1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D0E0Cu;
    {
        const bool branch_taken_0x2d0e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e0c) {
            ctx->pc = 0x2D0E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E0Cu;
            // 0x2d0e10: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0dc0;
        }
    }
    ctx->pc = 0x2D0E14u;
label_2d0e14:
    // 0x2d0e14: 0x5460004e  bnel        $v1, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x2D0E14u;
    {
        const bool branch_taken_0x2d0e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e14) {
            ctx->pc = 0x2D0E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E14u;
            // 0x2d0e18: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0E1Cu;
    // 0x2d0e1c: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D0E1Cu;
    {
        const bool branch_taken_0x2d0e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E1Cu;
        // 0x2d0e20: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e1c) {
            ctx->pc = 0x2D0E9Cu;
            goto label_2d0e9c;
        }
    }
    ctx->pc = 0x2D0E24u;
    // 0x2d0e24: 0x16e00010  bnez        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0E24u;
    {
        const bool branch_taken_0x2d0e24 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E24u;
        // 0x2d0e28: 0x28843  sra         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e24) {
            ctx->pc = 0x2D0E68u;
            goto label_2d0e68;
        }
    }
    ctx->pc = 0x2D0E2Cu;
    // 0x2d0e2c: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2d0e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2d0e30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d0e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e34: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d0e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d0e38: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d0e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d0e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0e40: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d0e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e44: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x2d0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2d0e48: 0xc0b48e4  jal         func_2D2390
    ctx->pc = 0x2D0E48u;
    SET_GPR_U32(ctx, 31, 0x2D0E50u);
    ctx->pc = 0x2D0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E48u;
    // 0x2d0e4c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2390u, 0x2D0E48u, 0x2D0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E50u;
label_2d0e50:
    // 0x2d0e50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e54: 0x5460003e  bnel        $v1, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D0E54u;
    {
        const bool branch_taken_0x2d0e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e54) {
            ctx->pc = 0x2D0E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E54u;
            // 0x2d0e58: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0E5Cu;
    // 0x2d0e5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D0E5Cu;
    {
        const bool branch_taken_0x2d0e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E5Cu;
        // 0x2d0e60: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e5c) {
            ctx->pc = 0x2D0E9Cu;
            goto label_2d0e9c;
        }
    }
    ctx->pc = 0x2D0E64u;
    // 0x2d0e64: 0x0  nop
    ctx->pc = 0x2d0e64u;
    // NOP
label_2d0e68:
    // 0x2d0e68: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x2d0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2d0e6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d0e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e70: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d0e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d0e74: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d0e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d0e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0e7c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d0e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e80: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x2d0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x2d0e84: 0xc0b48e4  jal         func_2D2390
    ctx->pc = 0x2D0E84u;
    SET_GPR_U32(ctx, 31, 0x2D0E8Cu);
    ctx->pc = 0x2D0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0E84u;
    // 0x2d0e88: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2390u, 0x2D0E84u, 0x2D0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0E8Cu;
label_2d0e8c:
    // 0x2d0e8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0e90: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D0E90u;
    {
        const bool branch_taken_0x2d0e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E90u;
        // 0x2d0e94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e90) {
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0E98u;
    // 0x2d0e98: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2d0e98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0e9c:
    // 0x2d0e9c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2d0e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d0ea0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d0ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0ea4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2d0ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d0ea8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0EA8u;
    {
        const bool branch_taken_0x2d0ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EA8u;
        // 0x2d0eac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ea8) {
            ctx->pc = 0x2D0EC4u;
            goto label_2d0ec4;
        }
    }
    ctx->pc = 0x2D0EB0u;
    // 0x2d0eb0: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d0eb4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2d0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2d0eb8: 0x8ed10004  lw          $s1, 0x4($s6)
    ctx->pc = 0x2d0eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d0ebc: 0x1600ffb0  bnez        $s0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2D0EBCu;
    {
        const bool branch_taken_0x2d0ebc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EBCu;
        // 0x2d0ec0: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ebc) {
            ctx->pc = 0x2D0D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0d80;
        }
    }
    ctx->pc = 0x2D0EC4u;
label_2d0ec4:
    // 0x2d0ec4: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D0EC4u;
    {
        const bool branch_taken_0x2d0ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ec4) {
            ctx->pc = 0x2D0EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0EC4u;
            // 0x2d0ec8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0ECCu;
    // 0x2d0ecc: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0ECCu;
    {
        const bool branch_taken_0x2d0ecc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0ECCu;
        // 0x2d0ed0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ecc) {
            ctx->pc = 0x2D0EF0u;
            goto label_2d0ef0;
        }
    }
    ctx->pc = 0x2D0ED4u;
    // 0x2d0ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d0ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ed8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d0ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0edc: 0xc0b480c  jal         func_2D2030
    ctx->pc = 0x2D0EDCu;
    SET_GPR_U32(ctx, 31, 0x2D0EE4u);
    ctx->pc = 0x2D0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0EDCu;
    // 0x2d0ee0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2030u, 0x2D0EDCu, 0x2D0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0EE4u;
label_2d0ee4:
    // 0x2d0ee4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0EE4u;
    {
        const bool branch_taken_0x2d0ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EE4u;
        // 0x2d0ee8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ee4) {
            ctx->pc = 0x2D0F4Cu;
            goto label_2d0f4c;
        }
    }
    ctx->pc = 0x2D0EECu;
    // 0x2d0eec: 0x0  nop
    ctx->pc = 0x2d0eecu;
    // NOP
label_2d0ef0:
    // 0x2d0ef0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d0ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ef4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ef8: 0xc0b480c  jal         func_2D2030
    ctx->pc = 0x2D0EF8u;
    SET_GPR_U32(ctx, 31, 0x2D0F00u);
    ctx->pc = 0x2D0EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0EF8u;
    // 0x2d0efc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2030u, 0x2D0EF8u, 0x2D0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F00u;
label_2d0f00:
    // 0x2d0f00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0f00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f04: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D0F04u;
    {
        const bool branch_taken_0x2d0f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F04u;
        // 0x2d0f08: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f04) {
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0F0Cu;
    // 0x2d0f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d0f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f10: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D0F10u;
    SET_GPR_U32(ctx, 31, 0x2D0F18u);
    ctx->pc = 0x2D0F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0F10u;
    // 0x2d0f14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D0F10u, 0x2D0F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F18u;
label_2d0f18:
    // 0x2d0f18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D0F18u;
    {
        const bool branch_taken_0x2d0f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F18u;
        // 0x2d0f1c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f18) {
            ctx->pc = 0x2D0F4Cu;
            goto label_2d0f4c;
        }
    }
    ctx->pc = 0x2D0F20u;
label_2d0f20:
    // 0x2d0f20: 0xc0b6178  jal         func_2D85E0
    ctx->pc = 0x2D0F20u;
    SET_GPR_U32(ctx, 31, 0x2D0F28u);
    ctx->pc = 0x2D0F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0F20u;
    // 0x2d0f24: 0x8fa40060  lw          $a0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D85E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D85E0u, 0x2D0F20u, 0x2D0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F28u;
label_2d0f28:
    // 0x2d0f28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0F2Cu;
    {
        const bool branch_taken_0x2d0f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F2Cu;
        // 0x2d0f30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f2c) {
            ctx->pc = 0x2D0F50u;
            goto label_2d0f50;
        }
    }
    ctx->pc = 0x2D0F34u;
    // 0x2d0f34: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d0f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f38: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D0F38u;
    SET_GPR_U32(ctx, 31, 0x2D0F40u);
    ctx->pc = 0x2D0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0F38u;
    // 0x2d0f3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D0F38u, 0x2D0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0F40u;
label_2d0f40:
    // 0x2d0f40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d0f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f44: 0x1060ff88  beqz        $v1, . + 4 + (-0x78 << 2)
    ctx->pc = 0x2D0F44u;
    {
        const bool branch_taken_0x2d0f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F44u;
        // 0x2d0f48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f44) {
            ctx->pc = 0x2D0D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d0d68;
        }
    }
    ctx->pc = 0x2D0F4Cu;
label_2d0f4c:
    // 0x2d0f4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d0f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0f50:
    // 0x2d0f50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d0f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d0f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d0f58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d0f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0f5c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d0f5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d0f60: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d0f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0f64: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d0f64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d0f68: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d0f68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0f6c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d0f6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0f70: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d0f70u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0f74: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d0f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0f78: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F78u;
        // 0x2d0f7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0F80u;
    // 0x2d0f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d0f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d0f84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d0f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d0f88: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2d0f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d0f8c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2d0f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d0f90: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d0f94: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2d0f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f98: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2d0f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f9c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2d0f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2d0fa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d0fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0fa4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2d0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0fa8: 0x68ce0007  ldl         $t6, 0x7($a2)
    ctx->pc = 0x2d0fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2d0fac: 0x6cce0000  ldr         $t6, 0x0($a2)
    ctx->pc = 0x2d0facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2d0fb0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2d0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2d0fb4: 0xb3ae0013  sdl         $t6, 0x13($sp)
    ctx->pc = 0x2d0fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0fb8: 0xb7ae000c  sdr         $t6, 0xC($sp)
    ctx->pc = 0x2d0fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0fbc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2d0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2d0fc0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d0fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fc4: 0x68ee0007  ldl         $t6, 0x7($a3)
    ctx->pc = 0x2d0fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2d0fc8: 0x6cee0000  ldr         $t6, 0x0($a3)
    ctx->pc = 0x2d0fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2d0fcc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2d0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2d0fd0: 0xb04e0007  sdl         $t6, 0x7($v0)
    ctx->pc = 0x2d0fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0fd4: 0xb44e0000  sdr         $t6, 0x0($v0)
    ctx->pc = 0x2d0fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0fd8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2d0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2d0fdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d0fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fe0: 0x690e0007  ldl         $t6, 0x7($t0)
    ctx->pc = 0x2d0fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2d0fe4: 0x6d0e0000  ldr         $t6, 0x0($t0)
    ctx->pc = 0x2d0fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2d0fe8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2d0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2d0fec: 0xb3ae0033  sdl         $t6, 0x33($sp)
    ctx->pc = 0x2d0fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0ff0: 0xb7ae002c  sdr         $t6, 0x2C($sp)
    ctx->pc = 0x2d0ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0ff4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2d0ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2d0ff8: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2d0ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ffc: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2d0ffcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1000: 0xc0b4406  jal         func_2D1018
    ctx->pc = 0x2D1000u;
    SET_GPR_U32(ctx, 31, 0x2D1008u);
    ctx->pc = 0x2D1004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1000u;
    // 0x2d1004: 0x160502d  daddu       $t2, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1018u, 0x2D1000u, 0x2D1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1008u;
label_2d1008:
    // 0x2d1008: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d100c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D100Cu;
        // 0x2d1010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1014u;
    // 0x2d1014: 0x0  nop
    ctx->pc = 0x2d1014u;
    // NOP
    if (ctx->pc == 0x2d1014u) { ctx->pc = 0x2d1018u; }
}
