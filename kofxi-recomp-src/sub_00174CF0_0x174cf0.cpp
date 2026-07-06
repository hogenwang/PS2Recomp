#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174CF0
// Address: 0x174cf0 - 0x174f40
void sub_00174CF0_0x174cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174CF0_0x174cf0");
#endif

    switch (ctx->pc) {
        case 0x174d48u: goto label_174d48;
        case 0x174d68u: goto label_174d68;
        case 0x174de8u: goto label_174de8;
        case 0x174e24u: goto label_174e24;
        case 0x174e88u: goto label_174e88;
        case 0x174ed0u: goto label_174ed0;
        case 0x174f1cu: goto label_174f1c;
        default: break;
    }

    ctx->pc = 0x174cf0u;

    // 0x174cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174cf4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174cf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x174cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x174cfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174d00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174d04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174d08: 0x9063dad8  lbu         $v1, -0x2528($v1)
    ctx->pc = 0x174d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957784)));
    // 0x174d0c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x174d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x174d10: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x174D10u;
    {
        const bool branch_taken_0x174d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D10u;
            // 0x174d14: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d10) {
            ctx->pc = 0x174ED8u;
            goto label_174ed8;
        }
    }
    ctx->pc = 0x174D18u;
    // 0x174d18: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x174d18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174d1c: 0x5460005c  bnel        $v1, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x174D1Cu;
    {
        const bool branch_taken_0x174d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d1c) {
            ctx->pc = 0x174D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174D1Cu;
            // 0x174d20: 0x3c03438b  lui         $v1, 0x438B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17291 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174E90u;
            goto label_174e90;
        }
    }
    ctx->pc = 0x174D24u;
    // 0x174d24: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x174d24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x174d28: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x174D28u;
    {
        const bool branch_taken_0x174d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174d28) {
            ctx->pc = 0x174D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174D28u;
            // 0x174d2c: 0x3c03438b  lui         $v1, 0x438B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17291 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174E48u;
            goto label_174e48;
        }
    }
    ctx->pc = 0x174D30u;
    // 0x174d30: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174d34: 0x9064daa0  lbu         $a0, -0x2560($v1)
    ctx->pc = 0x174d34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x174d38: 0x18800078  blez        $a0, . + 4 + (0x78 << 2)
    ctx->pc = 0x174D38u;
    {
        const bool branch_taken_0x174d38 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x174D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D38u;
            // 0x174d3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d38) {
            ctx->pc = 0x174F1Cu;
            goto label_174f1c;
        }
    }
    ctx->pc = 0x174D40u;
    // 0x174d40: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x174d40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x174d44: 0x261036f0  addiu       $s0, $s0, 0x36F0
    ctx->pc = 0x174d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14064));
label_174d48:
    // 0x174d48: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x174d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x174d4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d50: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x174d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x174d54: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x174D54u;
    {
        const bool branch_taken_0x174d54 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x174D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D54u;
            // 0x174d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d54) {
            ctx->pc = 0x174D98u;
            goto label_174d98;
        }
    }
    ctx->pc = 0x174D5Cu;
    // 0x174d5c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x174d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x174d60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x174d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174d68:
    // 0x174d68: 0x90a20016  lbu         $v0, 0x16($a1)
    ctx->pc = 0x174d68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x174d6c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x174D6Cu;
    {
        const bool branch_taken_0x174d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x174d6c) {
            ctx->pc = 0x174D88u;
            goto label_174d88;
        }
    }
    ctx->pc = 0x174D74u;
    // 0x174d74: 0x94a20014  lhu         $v0, 0x14($a1)
    ctx->pc = 0x174d74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x174d78: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174D78u;
    {
        const bool branch_taken_0x174d78 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x174d78) {
            ctx->pc = 0x174D88u;
            goto label_174d88;
        }
    }
    ctx->pc = 0x174D80u;
    // 0x174d80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x174d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x174d84: 0x0  nop
    ctx->pc = 0x174d84u;
    // NOP
label_174d88:
    // 0x174d88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x174d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x174d8c: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x174d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x174d90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x174D90u;
    {
        const bool branch_taken_0x174d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D90u;
            // 0x174d94: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d90) {
            ctx->pc = 0x174D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174d68;
        }
    }
    ctx->pc = 0x174D98u;
label_174d98:
    // 0x174d98: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x174d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x174d9c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x174D9Cu;
    {
        const bool branch_taken_0x174d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d9c) {
            ctx->pc = 0x174DF0u;
            goto label_174df0;
        }
    }
    ctx->pc = 0x174DA4u;
    // 0x174da4: 0x3c034388  lui         $v1, 0x4388
    ctx->pc = 0x174da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17288 << 16));
    // 0x174da8: 0x3c0243a4  lui         $v0, 0x43A4
    ctx->pc = 0x174da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17316 << 16));
    // 0x174dac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x174dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x174db0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x174db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x174db4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x174db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x174db8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x174db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x174dbc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x174dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x174dc0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x174dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x174dc4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x174dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x174dc8: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
    // 0x174dcc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x174dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x174dd0: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x174dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x174dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174dd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174ddc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x174ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174de0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x174DE0u;
    SET_GPR_U32(ctx, 31, 0x174DE8u);
    ctx->pc = 0x174DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174DE0u;
            // 0x174de4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DE8u; }
        if (ctx->pc != 0x174DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DE8u; }
        if (ctx->pc != 0x174DE8u) { return; }
    }
    ctx->pc = 0x174DE8u;
label_174de8:
    // 0x174de8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x174DE8u;
    {
        const bool branch_taken_0x174de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174de8) {
            ctx->pc = 0x174E28u;
            goto label_174e28;
        }
    }
    ctx->pc = 0x174DF0u;
label_174df0:
    // 0x174df0: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x174df4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x174df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x174df8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x174df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x174dfc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x174dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x174e00: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x174e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x174e04: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x174e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x174e08: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x174e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
    // 0x174e0c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x174e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x174e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174e18: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174e1c: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x174E1Cu;
    SET_GPR_U32(ctx, 31, 0x174E24u);
    ctx->pc = 0x174E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E1Cu;
            // 0x174e20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E24u; }
        if (ctx->pc != 0x174E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E24u; }
        if (ctx->pc != 0x174E24u) { return; }
    }
    ctx->pc = 0x174E24u;
label_174e24:
    // 0x174e24: 0x0  nop
    ctx->pc = 0x174e24u;
    // NOP
label_174e28:
    // 0x174e28: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174e2c: 0x9064daa0  lbu         $a0, -0x2560($v1)
    ctx->pc = 0x174e2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x174e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x174e34: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x174e34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x174e38: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x174E38u;
    {
        const bool branch_taken_0x174e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E38u;
            // 0x174e3c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e38) {
            ctx->pc = 0x174D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174d48;
        }
    }
    ctx->pc = 0x174E40u;
    // 0x174e40: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x174E40u;
    {
        const bool branch_taken_0x174e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E40u;
            // 0x174e44: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e40) {
            ctx->pc = 0x174F20u;
            goto label_174f20;
        }
    }
    ctx->pc = 0x174E48u;
label_174e48:
    // 0x174e48: 0x3c0243a4  lui         $v0, 0x43A4
    ctx->pc = 0x174e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17316 << 16));
    // 0x174e4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x174e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x174e50: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x174e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x174e54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x174e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x174e58: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x174e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x174e5c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x174e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x174e60: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x174e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x174e64: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x174e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x174e68: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x174e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
    // 0x174e6c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x174e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x174e70: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x174e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x174e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174e78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174e7c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x174e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174e80: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x174E80u;
    SET_GPR_U32(ctx, 31, 0x174E88u);
    ctx->pc = 0x174E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174E80u;
            // 0x174e84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E88u; }
        if (ctx->pc != 0x174E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174E88u; }
        if (ctx->pc != 0x174E88u) { return; }
    }
    ctx->pc = 0x174E88u;
label_174e88:
    // 0x174e88: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x174E88u;
    {
        const bool branch_taken_0x174e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174e88) {
            ctx->pc = 0x174F1Cu;
            goto label_174f1c;
        }
    }
    ctx->pc = 0x174E90u;
label_174e90:
    // 0x174e90: 0x3c0243a4  lui         $v0, 0x43A4
    ctx->pc = 0x174e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17316 << 16));
    // 0x174e94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x174e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x174e98: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x174e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x174e9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x174e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x174ea0: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x174ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x174ea4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x174ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x174ea8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x174ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x174eac: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x174eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x174eb0: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x174eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
    // 0x174eb4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x174eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x174eb8: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x174eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x174ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ec0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174ec4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x174ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174ec8: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x174EC8u;
    SET_GPR_U32(ctx, 31, 0x174ED0u);
    ctx->pc = 0x174ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174EC8u;
            // 0x174ecc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174ED0u; }
        if (ctx->pc != 0x174ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174ED0u; }
        if (ctx->pc != 0x174ED0u) { return; }
    }
    ctx->pc = 0x174ED0u;
label_174ed0:
    // 0x174ed0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x174ED0u;
    {
        const bool branch_taken_0x174ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174ed0) {
            ctx->pc = 0x174F1Cu;
            goto label_174f1c;
        }
    }
    ctx->pc = 0x174ED8u;
label_174ed8:
    // 0x174ed8: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x174ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x174edc: 0x3c0243a4  lui         $v0, 0x43A4
    ctx->pc = 0x174edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17316 << 16));
    // 0x174ee0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x174ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x174ee4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x174ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x174ee8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x174ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x174eec: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x174eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x174ef0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x174ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x174ef4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x174ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x174ef8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x174ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x174efc: 0x24846148  addiu       $a0, $a0, 0x6148
    ctx->pc = 0x174efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24904));
    // 0x174f00: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x174f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x174f04: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x174f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x174f08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174f10: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x174f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174f14: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x174F14u;
    SET_GPR_U32(ctx, 31, 0x174F1Cu);
    ctx->pc = 0x174F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174F14u;
            // 0x174f18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F1Cu; }
        if (ctx->pc != 0x174F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174F1Cu; }
        if (ctx->pc != 0x174F1Cu) { return; }
    }
    ctx->pc = 0x174F1Cu;
label_174f1c:
    // 0x174f1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_174f20:
    // 0x174f20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x174F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F2Cu;
            // 0x174f30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174F34u;
    // 0x174f34: 0x0  nop
    ctx->pc = 0x174f34u;
    // NOP
    // 0x174f38: 0x0  nop
    ctx->pc = 0x174f38u;
    // NOP
    // 0x174f3c: 0x0  nop
    ctx->pc = 0x174f3cu;
    // NOP
    ctx->pc = 0x174f40u;
}
