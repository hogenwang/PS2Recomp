#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00233D80
// Address: 0x233d80 - 0x234270
void sub_00233D80_0x233d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233D80_0x233d80");
#endif

    switch (ctx->pc) {
        case 0x233dc8u: goto label_233dc8;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e68u: goto label_233e68;
        case 0x233ea0u: goto label_233ea0;
        case 0x233efcu: goto label_233efc;
        case 0x233f5cu: goto label_233f5c;
        case 0x233fa8u: goto label_233fa8;
        case 0x234008u: goto label_234008;
        default: break;
    }

    ctx->pc = 0x233d80u;

    // 0x233d80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x233d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x233d84: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x233d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x233d88: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x233d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x233d8c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x233d8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d90: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x233d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x233d94: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x233d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d98: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x233d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x233d9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x233d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233da0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x233da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x233da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233da8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233DA8u;
    {
        const bool branch_taken_0x233da8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x233DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DA8u;
            // 0x233dac: 0xffb20070  sd          $s2, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233da8) {
            ctx->pc = 0x233DBCu;
            goto label_233dbc;
        }
    }
    ctx->pc = 0x233DB0u;
    // 0x233db0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x233db4: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x233DB4u;
    {
        const bool branch_taken_0x233db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DB4u;
            // 0x233db8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233db4) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233DBCu;
label_233dbc:
    // 0x233dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233dc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x233dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233dc4: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x233dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_233dc8:
    // 0x233dc8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x233dcc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x233dccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233dd0: 0x2c6200b2  sltiu       $v0, $v1, 0xB2
    ctx->pc = 0x233dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)178) ? 1 : 0);
    // 0x233dd4: 0x1040011d  beqz        $v0, . + 4 + (0x11D << 2)
    ctx->pc = 0x233DD4u;
    {
        const bool branch_taken_0x233dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DD4u;
            // 0x233dd8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233dd4) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x233DDCu;
    // 0x233ddc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x233ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x233de0: 0x24424810  addiu       $v0, $v0, 0x4810
    ctx->pc = 0x233de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18448));
    // 0x233de4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233de8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x233de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233dec: 0x800008  jr          $a0
    ctx->pc = 0x233DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233DF4u: goto label_233df4;
            case 0x233DFCu: goto label_233dfc;
            case 0x233E04u: goto label_233e04;
            case 0x233E40u: goto label_233e40;
            case 0x233E70u: goto label_233e70;
            case 0x233EC0u: goto label_233ec0;
            case 0x233EC8u: goto label_233ec8;
            case 0x233ED0u: goto label_233ed0;
            case 0x233F30u: goto label_233f30;
            case 0x233F78u: goto label_233f78;
            case 0x233FD8u: goto label_233fd8;
            case 0x234048u: goto label_234048;
            case 0x234050u: goto label_234050;
            case 0x234058u: goto label_234058;
            case 0x23406Cu: goto label_23406c;
            case 0x234080u: goto label_234080;
            case 0x234094u: goto label_234094;
            case 0x2340A8u: goto label_2340a8;
            case 0x2340B0u: goto label_2340b0;
            case 0x2340C8u: goto label_2340c8;
            case 0x2340E0u: goto label_2340e0;
            case 0x2340F4u: goto label_2340f4;
            case 0x234118u: goto label_234118;
            case 0x23412Cu: goto label_23412c;
            case 0x234140u: goto label_234140;
            case 0x234150u: goto label_234150;
            case 0x23416Cu: goto label_23416c;
            case 0x234174u: goto label_234174;
            case 0x23417Cu: goto label_23417c;
            case 0x234184u: goto label_234184;
            case 0x2341A4u: goto label_2341a4;
            case 0x2341ACu: goto label_2341ac;
            case 0x2341B4u: goto label_2341b4;
            case 0x2341BCu: goto label_2341bc;
            case 0x2341C4u: goto label_2341c4;
            case 0x2341D0u: goto label_2341d0;
            case 0x2341DCu: goto label_2341dc;
            case 0x2341E8u: goto label_2341e8;
            case 0x234204u: goto label_234204;
            case 0x234210u: goto label_234210;
            case 0x23421Cu: goto label_23421c;
            case 0x234228u: goto label_234228;
            case 0x234234u: goto label_234234;
            case 0x23423Cu: goto label_23423c;
            case 0x234244u: goto label_234244;
            case 0x23424Cu: goto label_23424c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233DF4u;
label_233df4:
    // 0x233df4: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x233DF4u;
    {
        const bool branch_taken_0x233df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DF4u;
            // 0x233df8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233df4) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233DFCu;
label_233dfc:
    // 0x233dfc: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x233DFCu;
    {
        const bool branch_taken_0x233dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233DFCu;
            // 0x233e00: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233dfc) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233E04u;
label_233e04:
    // 0x233e04: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x233e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233e08: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x233e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x233e0c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x233e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233e10: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x233E10u;
    {
        const bool branch_taken_0x233e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E10u;
            // 0x233e14: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e10) {
            ctx->pc = 0x233F04u;
            goto label_233f04;
        }
    }
    ctx->pc = 0x233E18u;
    // 0x233e18: 0x1660010d  bnez        $s3, . + 4 + (0x10D << 2)
    ctx->pc = 0x233E18u;
    {
        const bool branch_taken_0x233e18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E18u;
            // 0x233e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e18) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233E20u;
    // 0x233e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e24: 0xc08cef4  jal         func_233BD0
    ctx->pc = 0x233E24u;
    SET_GPR_U32(ctx, 31, 0x233E2Cu);
    ctx->pc = 0x233E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233E24u;
            // 0x233e28: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233BD0u;
    if (runtime->hasFunction(0x233BD0u)) {
        auto targetFn = runtime->lookupFunction(0x233BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E2Cu; }
        if (ctx->pc != 0x233E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233BD0_0x233bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E2Cu; }
        if (ctx->pc != 0x233E2Cu) { return; }
    }
    ctx->pc = 0x233E2Cu;
label_233e2c:
    // 0x233e2c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x233e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_233e30:
    // 0x233e30: 0x1060ffe5  beqz        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x233E30u;
    {
        const bool branch_taken_0x233e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E30u;
            // 0x233e34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e30) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233E38u;
    // 0x233e38: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x233E38u;
    {
        const bool branch_taken_0x233e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E38u;
            // 0x233e3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e38) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233E40u;
label_233e40:
    // 0x233e40: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x233e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233e44: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x233e48: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x233e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233e4c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x233E4Cu;
    {
        const bool branch_taken_0x233e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E4Cu;
            // 0x233e50: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e4c) {
            ctx->pc = 0x233F64u;
            goto label_233f64;
        }
    }
    ctx->pc = 0x233E54u;
    // 0x233e54: 0x166000fe  bnez        $s3, . + 4 + (0xFE << 2)
    ctx->pc = 0x233E54u;
    {
        const bool branch_taken_0x233e54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E54u;
            // 0x233e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e54) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233E5Cu;
    // 0x233e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e60: 0xc08cf3e  jal         func_233CF8
    ctx->pc = 0x233E60u;
    SET_GPR_U32(ctx, 31, 0x233E68u);
    ctx->pc = 0x233E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233E60u;
            // 0x233e64: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233CF8u;
    if (runtime->hasFunction(0x233CF8u)) {
        auto targetFn = runtime->lookupFunction(0x233CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E68u; }
        if (ctx->pc != 0x233E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233CF8_0x233cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E68u; }
        if (ctx->pc != 0x233E68u) { return; }
    }
    ctx->pc = 0x233E68u;
label_233e68:
    // 0x233e68: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x233E68u;
    {
        const bool branch_taken_0x233e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E68u;
            // 0x233e6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e68) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233E70u;
label_233e70:
    // 0x233e70: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x233e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233e74: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x233e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x233e78: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x233E78u;
    {
        const bool branch_taken_0x233e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E78u;
            // 0x233e7c: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e78) {
            ctx->pc = 0x233FD0u;
            goto label_233fd0;
        }
    }
    ctx->pc = 0x233E80u;
    // 0x233e80: 0x166000f3  bnez        $s3, . + 4 + (0xF3 << 2)
    ctx->pc = 0x233E80u;
    {
        const bool branch_taken_0x233e80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E80u;
            // 0x233e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e80) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233E88u;
    // 0x233e88: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x233e8c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x233e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x233e90: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x233E90u;
    {
        const bool branch_taken_0x233e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233E90u;
            // 0x233e94: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233e90) {
            ctx->pc = 0x233FC0u;
            goto label_233fc0;
        }
    }
    ctx->pc = 0x233E98u;
    // 0x233e98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x233e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233e9c: 0x0  nop
    ctx->pc = 0x233e9cu;
    // NOP
label_233ea0:
    // 0x233ea0: 0x106000ea  beqz        $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x233EA0u;
    {
        const bool branch_taken_0x233ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EA0u;
            // 0x233ea4: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ea0) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x233EA8u;
    // 0x233ea8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x233ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x233eac: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x233eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x233eb0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x233EB0u;
    {
        const bool branch_taken_0x233eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233eb0) {
            ctx->pc = 0x233EB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233EB0u;
            // 0x233eb4: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233ea0;
        }
    }
    ctx->pc = 0x233EB8u;
    // 0x233eb8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x233EB8u;
    {
        const bool branch_taken_0x233eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EB8u;
            // 0x233ebc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233eb8) {
            ctx->pc = 0x233FC4u;
            goto label_233fc4;
        }
    }
    ctx->pc = 0x233EC0u;
label_233ec0:
    // 0x233ec0: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x233EC0u;
    {
        const bool branch_taken_0x233ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EC0u;
            // 0x233ec4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ec0) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233EC8u;
label_233ec8:
    // 0x233ec8: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
    ctx->pc = 0x233EC8u;
    {
        const bool branch_taken_0x233ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EC8u;
            // 0x233ecc: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ec8) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233ED0u;
label_233ed0:
    // 0x233ed0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x233ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233ed4: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x233ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x233ed8: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x233ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x233edc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x233edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233ee0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233EE0u;
    {
        const bool branch_taken_0x233ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EE0u;
            // 0x233ee4: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ee0) {
            ctx->pc = 0x233F04u;
            goto label_233f04;
        }
    }
    ctx->pc = 0x233EE8u;
    // 0x233ee8: 0x166000d9  bnez        $s3, . + 4 + (0xD9 << 2)
    ctx->pc = 0x233EE8u;
    {
        const bool branch_taken_0x233ee8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x233EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EE8u;
            // 0x233eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ee8) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233EF0u;
    // 0x233ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ef4: 0xc08cef4  jal         func_233BD0
    ctx->pc = 0x233EF4u;
    SET_GPR_U32(ctx, 31, 0x233EFCu);
    ctx->pc = 0x233EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233EF4u;
            // 0x233ef8: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233BD0u;
    if (runtime->hasFunction(0x233BD0u)) {
        auto targetFn = runtime->lookupFunction(0x233BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EFCu; }
        if (ctx->pc != 0x233EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233BD0_0x233bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EFCu; }
        if (ctx->pc != 0x233EFCu) { return; }
    }
    ctx->pc = 0x233EFCu;
label_233efc:
    // 0x233efc: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x233EFCu;
    {
        const bool branch_taken_0x233efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233EFCu;
            // 0x233f00: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233efc) {
            ctx->pc = 0x233E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233e30;
        }
    }
    ctx->pc = 0x233F04u;
label_233f04:
    // 0x233f04: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x233f04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x233f08: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x233f08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233f0c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x233f0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x233f10: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x233f10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x233f14: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x233f14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x233f18: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x233f1c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x233f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x233f20: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x233f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x233f24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x233f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x233f28: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
    ctx->pc = 0x233F28u;
    {
        const bool branch_taken_0x233f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F28u;
            // 0x233f2c: 0x833025  or          $a2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f28) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233F30u;
label_233f30:
    // 0x233f30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233f34: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x233f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x233f38: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x233f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x233f3c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x233f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x233f40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233F40u;
    {
        const bool branch_taken_0x233f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F40u;
            // 0x233f44: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f40) {
            ctx->pc = 0x233F64u;
            goto label_233f64;
        }
    }
    ctx->pc = 0x233F48u;
    // 0x233f48: 0x166000c1  bnez        $s3, . + 4 + (0xC1 << 2)
    ctx->pc = 0x233F48u;
    {
        const bool branch_taken_0x233f48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x233F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F48u;
            // 0x233f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f48) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233F50u;
    // 0x233f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f54: 0xc08cf3e  jal         func_233CF8
    ctx->pc = 0x233F54u;
    SET_GPR_U32(ctx, 31, 0x233F5Cu);
    ctx->pc = 0x233F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233F54u;
            // 0x233f58: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233CF8u;
    if (runtime->hasFunction(0x233CF8u)) {
        auto targetFn = runtime->lookupFunction(0x233CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F5Cu; }
        if (ctx->pc != 0x233F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233CF8_0x233cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F5Cu; }
        if (ctx->pc != 0x233F5Cu) { return; }
    }
    ctx->pc = 0x233F5Cu;
label_233f5c:
    // 0x233f5c: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x233F5Cu;
    {
        const bool branch_taken_0x233f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F5Cu;
            // 0x233f60: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f5c) {
            ctx->pc = 0x233E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233e30;
        }
    }
    ctx->pc = 0x233F64u;
label_233f64:
    // 0x233f64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x233f64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233f68: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x233f68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x233f6c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x233f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x233f70: 0x1000ff95  b           . + 4 + (-0x6B << 2)
    ctx->pc = 0x233F70u;
    {
        const bool branch_taken_0x233f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F70u;
            // 0x233f74: 0x833025  or          $a2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f70) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233F78u;
label_233f78:
    // 0x233f78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233f7c: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x233f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x233f80: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x233f80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x233f84: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x233F84u;
    {
        const bool branch_taken_0x233f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F84u;
            // 0x233f88: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f84) {
            ctx->pc = 0x233FD0u;
            goto label_233fd0;
        }
    }
    ctx->pc = 0x233F8Cu;
    // 0x233f8c: 0x166000b0  bnez        $s3, . + 4 + (0xB0 << 2)
    ctx->pc = 0x233F8Cu;
    {
        const bool branch_taken_0x233f8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x233F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F8Cu;
            // 0x233f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f8c) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233F94u;
    // 0x233f94: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x233f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x233f98: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x233f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x233f9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x233F9Cu;
    {
        const bool branch_taken_0x233f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233F9Cu;
            // 0x233fa0: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f9c) {
            ctx->pc = 0x233FC0u;
            goto label_233fc0;
        }
    }
    ctx->pc = 0x233FA4u;
    // 0x233fa4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x233fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233fa8:
    // 0x233fa8: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x233FA8u;
    {
        const bool branch_taken_0x233fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FA8u;
            // 0x233fac: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fa8) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x233FB0u;
    // 0x233fb0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x233fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x233fb4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x233fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x233fb8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x233FB8u;
    {
        const bool branch_taken_0x233fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233fb8) {
            ctx->pc = 0x233FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233FB8u;
            // 0x233fbc: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233fa8;
        }
    }
    ctx->pc = 0x233FC0u;
label_233fc0:
    // 0x233fc0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x233fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_233fc4:
    // 0x233fc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x233fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x233fc8: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
    ctx->pc = 0x233FC8u;
    {
        const bool branch_taken_0x233fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FC8u;
            // 0x233fcc: 0x90460000  lbu         $a2, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fc8) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233FD0u;
label_233fd0:
    // 0x233fd0: 0x1000ff7d  b           . + 4 + (-0x83 << 2)
    ctx->pc = 0x233FD0u;
    {
        const bool branch_taken_0x233fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FD0u;
            // 0x233fd4: 0x90460000  lbu         $a2, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fd0) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x233FD8u;
label_233fd8:
    // 0x233fd8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x233fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x233fdc: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x233fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x233fe0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x233FE0u;
    {
        const bool branch_taken_0x233fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FE0u;
            // 0x233fe4: 0x2251821  addu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fe0) {
            ctx->pc = 0x234038u;
            goto label_234038;
        }
    }
    ctx->pc = 0x233FE8u;
    // 0x233fe8: 0x16600099  bnez        $s3, . + 4 + (0x99 << 2)
    ctx->pc = 0x233FE8u;
    {
        const bool branch_taken_0x233fe8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x233FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FE8u;
            // 0x233fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fe8) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x233FF0u;
    // 0x233ff0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x233ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x233ff4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x233ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x233ff8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x233FF8u;
    {
        const bool branch_taken_0x233ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233FF8u;
            // 0x233ffc: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ff8) {
            ctx->pc = 0x234020u;
            goto label_234020;
        }
    }
    ctx->pc = 0x234000u;
    // 0x234000: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x234000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234004: 0x0  nop
    ctx->pc = 0x234004u;
    // NOP
label_234008:
    // 0x234008: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x234008u;
    {
        const bool branch_taken_0x234008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234008u;
            // 0x23400c: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234008) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x234010u;
    // 0x234010: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x234010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x234014: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x234014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x234018: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x234018u;
    {
        const bool branch_taken_0x234018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234018) {
            ctx->pc = 0x23401Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234018u;
            // 0x23401c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234008;
        }
    }
    ctx->pc = 0x234020u;
label_234020:
    // 0x234020: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x234020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x234024: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x234024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x234028: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x234028u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23402c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23402cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x234030: 0x1000ff65  b           . + 4 + (-0x9B << 2)
    ctx->pc = 0x234030u;
    {
        const bool branch_taken_0x234030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234030u;
            // 0x234034: 0x39080  sll         $s2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234030) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234038u;
label_234038:
    // 0x234038: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x234038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23403c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x234040: 0x1000ff61  b           . + 4 + (-0x9F << 2)
    ctx->pc = 0x234040u;
    {
        const bool branch_taken_0x234040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234040u;
            // 0x234044: 0x29080  sll         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234040) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234048u;
label_234048:
    // 0x234048: 0x1000ff5f  b           . + 4 + (-0xA1 << 2)
    ctx->pc = 0x234048u;
    {
        const bool branch_taken_0x234048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234048u;
            // 0x23404c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234048) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234050u;
label_234050:
    // 0x234050: 0x1000ff5d  b           . + 4 + (-0xA3 << 2)
    ctx->pc = 0x234050u;
    {
        const bool branch_taken_0x234050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234050u;
            // 0x234054: 0x8e120004  lw          $s2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234050) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234058u;
label_234058:
    // 0x234058: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x234058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23405c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23405cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234060: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x234060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x234064: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
    ctx->pc = 0x234064u;
    {
        const bool branch_taken_0x234064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234064u;
            // 0x234068: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234064) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x23406Cu;
label_23406c:
    // 0x23406c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234074: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x234074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x234078: 0x1000ff53  b           . + 4 + (-0xAD << 2)
    ctx->pc = 0x234078u;
    {
        const bool branch_taken_0x234078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23407Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234078u;
            // 0x23407c: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234078) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234080u;
label_234080:
    // 0x234080: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x234080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234088: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x234088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x23408c: 0x1000ff4e  b           . + 4 + (-0xB2 << 2)
    ctx->pc = 0x23408Cu;
    {
        const bool branch_taken_0x23408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23408Cu;
            // 0x234090: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23408c) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234094u;
label_234094:
    // 0x234094: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x234094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234098: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23409c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x23409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2340a0: 0x1000ff49  b           . + 4 + (-0xB7 << 2)
    ctx->pc = 0x2340A0u;
    {
        const bool branch_taken_0x2340a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340A0u;
            // 0x2340a4: 0xac720000  sw          $s2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340a0) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2340A8u;
label_2340a8:
    // 0x2340a8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2340A8u;
    {
        const bool branch_taken_0x2340a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340A8u;
            // 0x2340ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340a8) {
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x2340B0u;
label_2340b0:
    // 0x2340b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2340b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2340b4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2340b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2340b8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2340B8u;
    {
        const bool branch_taken_0x2340b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340b8) {
            ctx->pc = 0x2340BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2340B8u;
            // 0x2340bc: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x2340C0u;
    // 0x2340c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2340C0u;
    {
        const bool branch_taken_0x2340c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340C0u;
            // 0x2340c4: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340c0) {
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x2340C8u;
label_2340c8:
    // 0x2340c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2340c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2340cc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2340ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2340d0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2340D0u;
    {
        const bool branch_taken_0x2340d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2340d0) {
            ctx->pc = 0x2340D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2340D0u;
            // 0x2340d4: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x2340D8u;
    // 0x2340d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2340D8u;
    {
        const bool branch_taken_0x2340d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340D8u;
            // 0x2340dc: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340d8) {
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x2340E0u;
label_2340e0:
    // 0x2340e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2340e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2340e4: 0x54c20008  bnel        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2340E4u;
    {
        const bool branch_taken_0x2340e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2340e4) {
            ctx->pc = 0x2340E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2340E4u;
            // 0x2340e8: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x2340ECu;
    // 0x2340ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2340ECu;
    {
        const bool branch_taken_0x2340ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2340ECu;
            // 0x2340f0: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340ec) {
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x2340F4u;
label_2340f4:
    // 0x2340f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2340f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2340f8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2340f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2340fc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2340FCu;
    {
        const bool branch_taken_0x2340fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2340fc) {
            ctx->pc = 0x234100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2340FCu;
            // 0x234100: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234108u;
            goto label_234108;
        }
    }
    ctx->pc = 0x234104u;
    // 0x234104: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x234104u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_234108:
    // 0x234108: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23410c: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x23410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x234110: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x234110u;
    {
        const bool branch_taken_0x234110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234110u;
            // 0x234114: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234110) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234118u;
label_234118:
    // 0x234118: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x234118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x23411c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23411Cu;
    {
        const bool branch_taken_0x23411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23411c) {
            ctx->pc = 0x234120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23411Cu;
            // 0x234120: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x234124u;
    // 0x234124: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x234124u;
    {
        const bool branch_taken_0x234124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234124u;
            // 0x234128: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234124) {
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x23412Cu;
label_23412c:
    // 0x23412c: 0xd2102b  sltu        $v0, $a2, $s2
    ctx->pc = 0x23412cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x234130: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x234130u;
    {
        const bool branch_taken_0x234130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234130) {
            ctx->pc = 0x234134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234130u;
            // 0x234134: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x234138u;
    // 0x234138: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x234138u;
    {
        const bool branch_taken_0x234138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234138u;
            // 0x23413c: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234138) {
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x234140u;
label_234140:
    // 0x234140: 0x54d20007  bnel        $a2, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x234140u;
    {
        const bool branch_taken_0x234140 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        if (branch_taken_0x234140) {
            ctx->pc = 0x234144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234140u;
            // 0x234144: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x234148u;
    // 0x234148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234148u;
    {
        const bool branch_taken_0x234148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234148u;
            // 0x23414c: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234148) {
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x234150u;
label_234150:
    // 0x234150: 0xd21024  and         $v0, $a2, $s2
    ctx->pc = 0x234150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x234154: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x234154u;
    {
        const bool branch_taken_0x234154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234154) {
            ctx->pc = 0x234158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234154u;
            // 0x234158: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x23415Cu;
    // 0x23415c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x23415cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_234160:
    // 0x234160: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x234160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x234164: 0x1000ff18  b           . + 4 + (-0xE8 << 2)
    ctx->pc = 0x234164u;
    {
        const bool branch_taken_0x234164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234164u;
            // 0x234168: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234164) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x23416Cu;
label_23416c:
    // 0x23416c: 0x1000ff16  b           . + 4 + (-0xEA << 2)
    ctx->pc = 0x23416Cu;
    {
        const bool branch_taken_0x23416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23416Cu;
            // 0x234170: 0xd23021  addu        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23416c) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234174u;
label_234174:
    // 0x234174: 0x1000ff14  b           . + 4 + (-0xEC << 2)
    ctx->pc = 0x234174u;
    {
        const bool branch_taken_0x234174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234174u;
            // 0x234178: 0xd23023  subu        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234174) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x23417Cu;
label_23417c:
    // 0x23417c: 0x1000ff12  b           . + 4 + (-0xEE << 2)
    ctx->pc = 0x23417Cu;
    {
        const bool branch_taken_0x23417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23417Cu;
            // 0x234180: 0xd23018  mult        $a2, $a2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23417c) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234184u;
label_234184:
    // 0x234184: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x234184u;
    {
        const bool branch_taken_0x234184 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234184u;
            // 0x234188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234184) {
            ctx->pc = 0x234250u;
            goto label_234250;
        }
    }
    ctx->pc = 0x23418Cu;
    // 0x23418c: 0xd2001b  divu        $zero, $a2, $s2
    ctx->pc = 0x23418cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x234190: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x234190u;
    {
        const bool branch_taken_0x234190 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x234190) {
            ctx->pc = 0x234194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234190u;
            // 0x234194: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x234198u;
            goto label_234198;
        }
    }
    ctx->pc = 0x234198u;
label_234198:
    // 0x234198: 0x1012  mflo        $v0
    ctx->pc = 0x234198u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x23419c: 0x1000ff0a  b           . + 4 + (-0xF6 << 2)
    ctx->pc = 0x23419Cu;
    {
        const bool branch_taken_0x23419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23419Cu;
            // 0x2341a0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23419c) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2341A4u;
label_2341a4:
    // 0x2341a4: 0x1000ff08  b           . + 4 + (-0xF8 << 2)
    ctx->pc = 0x2341A4u;
    {
        const bool branch_taken_0x2341a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341A4u;
            // 0x2341a8: 0xd23024  and         $a2, $a2, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341a4) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2341ACu;
label_2341ac:
    // 0x2341ac: 0x1000ff06  b           . + 4 + (-0xFA << 2)
    ctx->pc = 0x2341ACu;
    {
        const bool branch_taken_0x2341ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341ACu;
            // 0x2341b0: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341ac) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2341B4u;
label_2341b4:
    // 0x2341b4: 0x1000ff04  b           . + 4 + (-0xFC << 2)
    ctx->pc = 0x2341B4u;
    {
        const bool branch_taken_0x2341b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341B4u;
            // 0x2341b8: 0x2463004  sllv        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341b4) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2341BCu;
label_2341bc:
    // 0x2341bc: 0x1000ff02  b           . + 4 + (-0xFE << 2)
    ctx->pc = 0x2341BCu;
    {
        const bool branch_taken_0x2341bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341BCu;
            // 0x2341c0: 0x2463006  srlv        $a2, $a2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 18) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341bc) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2341C4u;
label_2341c4:
    // 0x2341c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2341c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2341c8: 0x1000feff  b           . + 4 + (-0x101 << 2)
    ctx->pc = 0x2341C8u;
    {
        const bool branch_taken_0x2341c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341C8u;
            // 0x2341cc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341c8) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2341D0u;
label_2341d0:
    // 0x2341d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2341d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2341d4: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x2341D4u;
    {
        const bool branch_taken_0x2341d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341D4u;
            // 0x2341d8: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341d4) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2341DCu;
label_2341dc:
    // 0x2341dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2341dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2341e0: 0x1000fef9  b           . + 4 + (-0x107 << 2)
    ctx->pc = 0x2341E0u;
    {
        const bool branch_taken_0x2341e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2341E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341E0u;
            // 0x2341e4: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341e0) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x2341E8u;
label_2341e8:
    // 0x2341e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2341e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2341ec: 0xc2001b  divu        $zero, $a2, $v0
    ctx->pc = 0x2341ecu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x2341f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2341F0u;
    {
        const bool branch_taken_0x2341f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2341f0) {
            ctx->pc = 0x2341F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2341F0u;
            // 0x2341f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2341F8u;
            goto label_2341f8;
        }
    }
    ctx->pc = 0x2341F8u;
label_2341f8:
    // 0x2341f8: 0x1812  mflo        $v1
    ctx->pc = 0x2341f8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2341fc: 0x1000fef2  b           . + 4 + (-0x10E << 2)
    ctx->pc = 0x2341FCu;
    {
        const bool branch_taken_0x2341fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341FCu;
            // 0x234200: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2341fc) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234204u;
label_234204:
    // 0x234204: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x234204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234208: 0x1000feef  b           . + 4 + (-0x111 << 2)
    ctx->pc = 0x234208u;
    {
        const bool branch_taken_0x234208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23420Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234208u;
            // 0x23420c: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234208) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234210u;
label_234210:
    // 0x234210: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x234210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234214: 0x1000feec  b           . + 4 + (-0x114 << 2)
    ctx->pc = 0x234214u;
    {
        const bool branch_taken_0x234214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234214u;
            // 0x234218: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234214) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x23421Cu;
label_23421c:
    // 0x23421c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234220: 0x1000fee9  b           . + 4 + (-0x117 << 2)
    ctx->pc = 0x234220u;
    {
        const bool branch_taken_0x234220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234220u;
            // 0x234224: 0x463004  sllv        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234220) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234228u;
label_234228:
    // 0x234228: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x234228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23422c: 0x1000fee6  b           . + 4 + (-0x11A << 2)
    ctx->pc = 0x23422Cu;
    {
        const bool branch_taken_0x23422c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23422Cu;
            // 0x234230: 0x463006  srlv        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23422c) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234234u;
label_234234:
    // 0x234234: 0x1000fee4  b           . + 4 + (-0x11C << 2)
    ctx->pc = 0x234234u;
    {
        const bool branch_taken_0x234234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234234u;
            // 0x234238: 0x63023  negu        $a2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234234) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x23423Cu;
label_23423c:
    // 0x23423c: 0x1000fee2  b           . + 4 + (-0x11E << 2)
    ctx->pc = 0x23423Cu;
    {
        const bool branch_taken_0x23423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23423Cu;
            // 0x234240: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23423c) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x234244u;
label_234244:
    // 0x234244: 0x1000fee0  b           . + 4 + (-0x120 << 2)
    ctx->pc = 0x234244u;
    {
        const bool branch_taken_0x234244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234244u;
            // 0x234248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234244) {
            ctx->pc = 0x233DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233dc8;
        }
    }
    ctx->pc = 0x23424Cu;
label_23424c:
    // 0x23424c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23424cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234250:
    // 0x234250: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x234250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x234254: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x234254u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x234258: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x234258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23425c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x23425cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x234260: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x234260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x234264: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x234264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234268: 0x3e00008  jr          $ra
    ctx->pc = 0x234268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234268u;
            // 0x23426c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234270u;
    ctx->pc = 0x234270u;
}
