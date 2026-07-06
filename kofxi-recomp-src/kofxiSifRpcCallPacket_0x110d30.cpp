#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSifRpcCallPacket
// Address: 0x110d30 - 0x110f30
void kofxiSifRpcCallPacket_0x110d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSifRpcCallPacket_0x110d30");
#endif

    switch (ctx->pc) {
        case 0x110d88u: goto label_110d88;
        case 0x110df4u: goto label_110df4;
        case 0x110e0cu: goto label_110e0c;
        case 0x110e1cu: goto label_110e1c;
        case 0x110e64u: goto label_110e64;
        case 0x110e90u: goto label_110e90;
        case 0x110ea0u: goto label_110ea0;
        case 0x110eccu: goto label_110ecc;
        case 0x110edcu: goto label_110edc;
        case 0x110ee4u: goto label_110ee4;
        case 0x110ef4u: goto label_110ef4;
        case 0x110efcu: goto label_110efc;
        default: break;
    }

    ctx->pc = 0x110d30u;

    // 0x110d30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x110d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x110d34: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x110d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x110d38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d3c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x110d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x110d40: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x110d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x110d44: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x110d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x110d48: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x110d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x110d4c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x110d4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d50: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x110d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x110d54: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x110d54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d58: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x110d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x110d5c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x110d5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d60: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x110d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x110d64: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x110d64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d68: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x110d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x110d6c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x110d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d70: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x110d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x110d74: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x110d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d78: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x110d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x110d7c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x110d7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d80: 0xc04415c  jal         func_110570
    ctx->pc = 0x110D80u;
    SET_GPR_U32(ctx, 31, 0x110D88u);
    ctx->pc = 0x110D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110D80u;
            // 0x110d84: 0x24848200  addiu       $a0, $a0, -0x7E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110570u;
    if (runtime->hasFunction(0x110570u)) {
        auto targetFn = runtime->lookupFunction(0x110570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110D88u; }
        if (ctx->pc != 0x110D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcAcquireRequestSlot_0x110570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110D88u; }
        if (ctx->pc != 0x110D88u) { return; }
    }
    ctx->pc = 0x110D88u;
label_110d88:
    // 0x110d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d8c: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x110D8Cu;
    {
        const bool branch_taken_0x110d8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110D8Cu;
            // 0x110d90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d8c) {
            ctx->pc = 0x110F00u;
            goto label_110f00;
        }
    }
    ctx->pc = 0x110D94u;
    // 0x110d94: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x110d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x110d98: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x110d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x110d9c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x110d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x110da0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x110da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x110da4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x110da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x110da8: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x110da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
    // 0x110dac: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x110dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110db0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x110db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x110db4: 0x33c30002  andi        $v1, $fp, 0x2
    ctx->pc = 0x110db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x110db8: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x110db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
    // 0x110dbc: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x110dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x110dc0: 0xae140028  sw          $s4, 0x28($s0)
    ctx->pc = 0x110dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x110dc4: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x110dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x110dc8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x110dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x110dcc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x110dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x110dd0: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x110dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x110dd4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x110DD4u;
    {
        const bool branch_taken_0x110dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110DD4u;
            // 0x110dd8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dd4) {
            ctx->pc = 0x110E1Cu;
            goto label_110e1c;
        }
    }
    ctx->pc = 0x110DDCu;
    // 0x110ddc: 0x16b40007  bne         $s5, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x110DDCu;
    {
        const bool branch_taken_0x110ddc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x110DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110DDCu;
            // 0x110de0: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ddc) {
            ctx->pc = 0x110DFCu;
            goto label_110dfc;
        }
    }
    ctx->pc = 0x110DE4u;
    // 0x110de4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x110de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110de8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x110de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dec: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x110DECu;
    SET_GPR_U32(ctx, 31, 0x110DF4u);
    ctx->pc = 0x110DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110DECu;
            // 0x110df0: 0x242280a  movz        $a1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110DF4u; }
        if (ctx->pc != 0x110DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110DF4u; }
        if (ctx->pc != 0x110DF4u) { return; }
    }
    ctx->pc = 0x110DF4u;
label_110df4:
    // 0x110df4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x110DF4u;
    {
        const bool branch_taken_0x110df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110DF4u;
            // 0x110df8: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110df4) {
            ctx->pc = 0x110E20u;
            goto label_110e20;
        }
    }
    ctx->pc = 0x110DFCu;
label_110dfc:
    // 0x110dfc: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x110DFCu;
    {
        const bool branch_taken_0x110dfc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x110E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110DFCu;
            // 0x110e00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dfc) {
            ctx->pc = 0x110E0Cu;
            goto label_110e0c;
        }
    }
    ctx->pc = 0x110E04u;
    // 0x110e04: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x110E04u;
    SET_GPR_U32(ctx, 31, 0x110E0Cu);
    ctx->pc = 0x110E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110E04u;
            // 0x110e08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E0Cu; }
        if (ctx->pc != 0x110E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E0Cu; }
        if (ctx->pc != 0x110E0Cu) { return; }
    }
    ctx->pc = 0x110E0Cu;
label_110e0c:
    // 0x110e0c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x110E0Cu;
    {
        const bool branch_taken_0x110e0c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x110E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E0Cu;
            // 0x110e10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e0c) {
            ctx->pc = 0x110E1Cu;
            goto label_110e1c;
        }
    }
    ctx->pc = 0x110E14u;
    // 0x110e14: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x110E14u;
    SET_GPR_U32(ctx, 31, 0x110E1Cu);
    ctx->pc = 0x110E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110E14u;
            // 0x110e18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E1Cu; }
        if (ctx->pc != 0x110E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E1Cu; }
        if (ctx->pc != 0x110E1Cu) { return; }
    }
    ctx->pc = 0x110E1Cu;
label_110e1c:
    // 0x110e1c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x110e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_110e20:
    // 0x110e20: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x110E20u;
    {
        const bool branch_taken_0x110e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E20u;
            // 0x110e24: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e20) {
            ctx->pc = 0x110E74u;
            goto label_110e74;
        }
    }
    ctx->pc = 0x110E28u;
    // 0x110e28: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x110E28u;
    {
        const bool branch_taken_0x110e28 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x110E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E28u;
            // 0x110e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e28) {
            ctx->pc = 0x110E38u;
            goto label_110e38;
        }
    }
    ctx->pc = 0x110E30u;
    // 0x110e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110E30u;
    {
        const bool branch_taken_0x110e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E30u;
            // 0x110e34: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e30) {
            ctx->pc = 0x110E3Cu;
            goto label_110e3c;
        }
    }
    ctx->pc = 0x110E38u;
label_110e38:
    // 0x110e38: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x110e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_110e3c:
    // 0x110e3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x110e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x110e40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110e44: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x110e44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x110e48: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x110e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e4c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x110e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x110e50: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x110e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e54: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x110e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x110e58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x110e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e5c: 0xc04404c  jal         func_110130
    ctx->pc = 0x110E5Cu;
    SET_GPR_U32(ctx, 31, 0x110E64u);
    ctx->pc = 0x110E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110E5Cu;
            // 0x110e60: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (runtime->hasFunction(0x110130u)) {
        auto targetFn = runtime->lookupFunction(0x110130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E64u; }
        if (ctx->pc != 0x110E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110130_0x110130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E64u; }
        if (ctx->pc != 0x110E64u) { return; }
    }
    ctx->pc = 0x110E64u;
label_110e64:
    // 0x110e64: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x110E64u;
    {
        const bool branch_taken_0x110e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E64u;
            // 0x110e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e64) {
            ctx->pc = 0x110F00u;
            goto label_110f00;
        }
    }
    ctx->pc = 0x110E6Cu;
    // 0x110e6c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x110E6Cu;
    {
        const bool branch_taken_0x110e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110e6c) {
            ctx->pc = 0x110EDCu;
            goto label_110edc;
        }
    }
    ctx->pc = 0x110E74u;
label_110e74:
    // 0x110e74: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x110e74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110e78: 0x2442a7b0  addiu       $v0, $v0, -0x5850
    ctx->pc = 0x110e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944688));
    // 0x110e7c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x110e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x110e80: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x110e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x110e84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x110e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e88: 0xc043318  jal         func_10CC60
    ctx->pc = 0x110E88u;
    SET_GPR_U32(ctx, 31, 0x110E90u);
    ctx->pc = 0x110E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110E88u;
            // 0x110e8c: 0xafb30004  sw          $s3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E90u; }
        if (ctx->pc != 0x110E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110E90u; }
        if (ctx->pc != 0x110E90u) { return; }
    }
    ctx->pc = 0x110E90u;
label_110e90:
    // 0x110e90: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110E90u;
    {
        const bool branch_taken_0x110e90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x110E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110E90u;
            // 0x110e94: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e90) {
            ctx->pc = 0x110EA8u;
            goto label_110ea8;
        }
    }
    ctx->pc = 0x110E98u;
    // 0x110e98: 0xc044186  jal         func_110618
    ctx->pc = 0x110E98u;
    SET_GPR_U32(ctx, 31, 0x110EA0u);
    ctx->pc = 0x110E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110E98u;
            // 0x110e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110618u;
    if (runtime->hasFunction(0x110618u)) {
        auto targetFn = runtime->lookupFunction(0x110618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EA0u; }
        if (ctx->pc != 0x110EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcReleaseRequestSlot_0x110618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EA0u; }
        if (ctx->pc != 0x110EA0u) { return; }
    }
    ctx->pc = 0x110EA0u;
label_110ea0:
    // 0x110ea0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x110EA0u;
    {
        const bool branch_taken_0x110ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110EA0u;
            // 0x110ea4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ea0) {
            ctx->pc = 0x110F00u;
            goto label_110f00;
        }
    }
    ctx->pc = 0x110EA8u;
label_110ea8:
    // 0x110ea8: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x110ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
    // 0x110eac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x110eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x110eb0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x110eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eb4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x110eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eb8: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x110eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x110ebc: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x110ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x110ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x110ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ec4: 0xc04404c  jal         func_110130
    ctx->pc = 0x110EC4u;
    SET_GPR_U32(ctx, 31, 0x110ECCu);
    ctx->pc = 0x110EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110EC4u;
            // 0x110ec8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (runtime->hasFunction(0x110130u)) {
        auto targetFn = runtime->lookupFunction(0x110130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110ECCu; }
        if (ctx->pc != 0x110ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110130_0x110130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110ECCu; }
        if (ctx->pc != 0x110ECCu) { return; }
    }
    ctx->pc = 0x110ECCu;
label_110ecc:
    // 0x110ecc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110ECCu;
    {
        const bool branch_taken_0x110ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110ecc) {
            ctx->pc = 0x110EECu;
            goto label_110eec;
        }
    }
    ctx->pc = 0x110ED4u;
    // 0x110ed4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x110ED4u;
    SET_GPR_U32(ctx, 31, 0x110EDCu);
    ctx->pc = 0x110ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110ED4u;
            // 0x110ed8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EDCu; }
        if (ctx->pc != 0x110EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EDCu; }
        if (ctx->pc != 0x110EDCu) { return; }
    }
    ctx->pc = 0x110EDCu;
label_110edc:
    // 0x110edc: 0xc044186  jal         func_110618
    ctx->pc = 0x110EDCu;
    SET_GPR_U32(ctx, 31, 0x110EE4u);
    ctx->pc = 0x110EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110EDCu;
            // 0x110ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110618u;
    if (runtime->hasFunction(0x110618u)) {
        auto targetFn = runtime->lookupFunction(0x110618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EE4u; }
        if (ctx->pc != 0x110EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcReleaseRequestSlot_0x110618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EE4u; }
        if (ctx->pc != 0x110EE4u) { return; }
    }
    ctx->pc = 0x110EE4u;
label_110ee4:
    // 0x110ee4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x110EE4u;
    {
        const bool branch_taken_0x110ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110EE4u;
            // 0x110ee8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ee4) {
            ctx->pc = 0x110F00u;
            goto label_110f00;
        }
    }
    ctx->pc = 0x110EECu;
label_110eec:
    // 0x110eec: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x110EECu;
    SET_GPR_U32(ctx, 31, 0x110EF4u);
    ctx->pc = 0x110EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110EECu;
            // 0x110ef0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EF4u; }
        if (ctx->pc != 0x110EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EF4u; }
        if (ctx->pc != 0x110EF4u) { return; }
    }
    ctx->pc = 0x110EF4u;
label_110ef4:
    // 0x110ef4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x110EF4u;
    SET_GPR_U32(ctx, 31, 0x110EFCu);
    ctx->pc = 0x110EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110EF4u;
            // 0x110ef8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EFCu; }
        if (ctx->pc != 0x110EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110EFCu; }
        if (ctx->pc != 0x110EFCu) { return; }
    }
    ctx->pc = 0x110EFCu;
label_110efc:
    // 0x110efc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110f00:
    // 0x110f00: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x110f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x110f04: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x110f04u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x110f08: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x110f08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x110f0c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x110f0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x110f10: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x110f10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x110f14: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x110f14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x110f18: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x110f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x110f1c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x110f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110f20: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x110f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110f24: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x110f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110f28: 0x3e00008  jr          $ra
    ctx->pc = 0x110F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F28u;
            // 0x110f2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110F30u;
    ctx->pc = 0x110f30u;
}
