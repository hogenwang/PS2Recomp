#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DCAB0
// Address: 0x2dcab0 - 0x2dccc8
void sub_002DCAB0_0x2dcab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCAB0_0x2dcab0");
#endif

    switch (ctx->pc) {
        case 0x2dcad0u: goto label_2dcad0;
        case 0x2dcae8u: goto label_2dcae8;
        case 0x2dcaf8u: goto label_2dcaf8;
        case 0x2dcb08u: goto label_2dcb08;
        case 0x2dcb1cu: goto label_2dcb1c;
        case 0x2dcb30u: goto label_2dcb30;
        case 0x2dcb40u: goto label_2dcb40;
        case 0x2dcb48u: goto label_2dcb48;
        case 0x2dcb70u: goto label_2dcb70;
        case 0x2dcb80u: goto label_2dcb80;
        case 0x2dcb88u: goto label_2dcb88;
        case 0x2dcba0u: goto label_2dcba0;
        case 0x2dcba4u: goto label_2dcba4;
        case 0x2dcbb0u: goto label_2dcbb0;
        case 0x2dcbb8u: goto label_2dcbb8;
        case 0x2dcbc4u: goto label_2dcbc4;
        case 0x2dcbc8u: goto label_2dcbc8;
        case 0x2dcbd0u: goto label_2dcbd0;
        case 0x2dcbd8u: goto label_2dcbd8;
        case 0x2dcbdcu: goto label_2dcbdc;
        case 0x2dcbe0u: goto label_2dcbe0;
        case 0x2dcbe8u: goto label_2dcbe8;
        case 0x2dcbf4u: goto label_2dcbf4;
        case 0x2dcbf8u: goto label_2dcbf8;
        case 0x2dcc00u: goto label_2dcc00;
        case 0x2dcc34u: goto label_2dcc34;
        case 0x2dcc70u: goto label_2dcc70;
        case 0x2dcc9cu: goto label_2dcc9c;
        case 0x2dccacu: goto label_2dccac;
        default: break;
    }

    ctx->pc = 0x2dcab0u;

    // 0x2dcab0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dcab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dcab4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2dcab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2dcab8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dcab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcabc: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2dcabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2dcac0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2dcac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dcac4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2dcac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2dcac8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2dcac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2dcacc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dcaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2dcad0:
    // 0x2dcad0: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x2dcad0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2dcad4: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x2dcad4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2dcad8: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x2dcad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2dcadc: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dcadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dcae0: 0x2463cb28  addiu       $v1, $v1, -0x34D8
    ctx->pc = 0x2dcae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x2dcae4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dcae8:
    // 0x2dcae8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCAE8u;
    {
        const bool branch_taken_0x2dcae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcae8) {
            ctx->pc = 0x2DCB08u;
            goto label_2dcb08;
        }
    }
    ctx->pc = 0x2DCAF0u;
    // 0x2dcaf0: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dcaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dcaf4: 0x2484cb3c  addiu       $a0, $a0, -0x34C4
    ctx->pc = 0x2dcaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953788));
label_2dcaf8:
    // 0x2dcaf8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dcaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dcafc: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dcb00: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DCB00u;
    SET_GPR_U32(ctx, 31, 0x2DCB08u);
    ctx->pc = 0x2DCB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB00u;
            // 0x2dcb04: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB08u; }
        if (ctx->pc != 0x2DCB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB08u; }
        if (ctx->pc != 0x2DCB08u) { return; }
    }
    ctx->pc = 0x2DCB08u;
label_2dcb08:
    // 0x2dcb08: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DCB08u;
    {
        const bool branch_taken_0x2dcb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcb08) {
            ctx->pc = 0x2DCB3Cu;
            goto label_2dcb3c;
        }
    }
    ctx->pc = 0x2DCB10u;
    // 0x2dcb10: 0xdc4a231f  ld          $t2, 0x231F($v0)
    ctx->pc = 0x2dcb10u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8991)));
    // 0x2dcb14: 0xc05eba7  jal         func_17AE9C
    ctx->pc = 0x2DCB14u;
    SET_GPR_U32(ctx, 31, 0x2DCB1Cu);
    ctx->pc = 0x2DCB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB14u;
            // 0x2dcb18: 0x8cd77b95  lw          $s7, 0x7B95($a2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 31637)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17AE9Cu;
    if (runtime->hasFunction(0x17AE9Cu)) {
        auto targetFn = runtime->lookupFunction(0x17AE9Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB1Cu; }
        if (ctx->pc != 0x2DCB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AE9C_0x17ae9c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCB1Cu; }
        if (ctx->pc != 0x2DCB1Cu) { return; }
    }
    ctx->pc = 0x2DCB1Cu;
label_2dcb1c:
    // 0x2dcb1c: 0x244f2818  addiu       $t7, $v0, 0x2818
    ctx->pc = 0x2dcb1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 10264));
    // 0x2dcb20: 0xa3157981  sb          $s5, 0x7981($t8)
    ctx->pc = 0x2dcb20u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 31105), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dcb24: 0x16e1820  add         $v1, $t3, $t6
    ctx->pc = 0x2dcb24u;
    {     int32_t rs_val = GPR_S32(ctx, 11);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x2dcb28: 0x0  nop
    ctx->pc = 0x2dcb28u;
    // NOP
    // 0x2dcb2c: 0x72aceedd  .word       0x72ACEEDD                   # INVALID     $s5, $t4, -0x1123 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dcb2cu;
    // Unhandled MMI instruction: function 0x1D
label_2dcb30:
    // 0x2dcb30: 0xc712f9e8  lwc1        $f18, -0x618($t8)
    ctx->pc = 0x2dcb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dcb34: 0x72acefcd  .word       0x72ACEFCD                   # INVALID     $s5, $t4, -0x1033 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2dcb34u;
    // Unhandled MMI instruction: function 0xD
    // 0x2dcb38: 0x0  nop
    ctx->pc = 0x2dcb38u;
    // NOP
label_2dcb3c:
    // 0x2dcb3c: 0x17bb47fb  bne         $sp, $k1, . + 4 + (0x47FB << 2)
label_2dcb40:
    if (ctx->pc == 0x2DCB40u) {
        ctx->pc = 0x2DCB40u;
            // 0x2dcb40: 0xc0b7536  jal         func_2DD4D8 (Delay Slot)
        // JAL 0x2DD4D8 - Handled by branch logic
        ctx->pc = 0x2DCB44u;
        goto label_fallthrough_0x2dcb3c;
    }
    ctx->pc = 0x2DCB3Cu;
    {
        const bool branch_taken_0x2dcb3c = (GPR_U64(ctx, 29) != GPR_U64(ctx, 27));
        ctx->pc = 0x2DCB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB3Cu;
            // 0x2dcb40: 0xc0b7536  jal         func_2DD4D8 (Delay Slot)
        // JAL 0x2DD4D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb3c) {
            ctx->pc = 0x2EEB2Cu;
            return;
        }
    }
label_fallthrough_0x2dcb3c:
    ctx->pc = 0x2DCB44u;
    // 0x2dcb44: 0x15ba95a0  bne         $t5, $k0, . + 4 + (-0x6A60 << 2)
label_2dcb48:
    if (ctx->pc == 0x2DCB48u) {
        ctx->pc = 0x2DCB48u;
            // 0x2dcb48: 0x27b857c0  addiu       $t8, $sp, 0x57C0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 22464));
        ctx->pc = 0x2DCB4Cu;
        goto label_fallthrough_0x2dcb44;
    }
    ctx->pc = 0x2DCB44u;
    {
        const bool branch_taken_0x2dcb44 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 26));
        ctx->pc = 0x2DCB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB44u;
            // 0x2dcb48: 0x27b857c0  addiu       $t8, $sp, 0x57C0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 22464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb44) {
            ctx->pc = 0x2C21C8u;
            return;
        }
    }
label_fallthrough_0x2dcb44:
    ctx->pc = 0x2DCB4Cu;
    // 0x2dcb4c: 0x27b9b4c4  addiu       $t9, $sp, -0x4B3C
    ctx->pc = 0x2dcb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 4294948036));
    // 0x2dcb50: 0x7ba47fb  .word       0x07BA47FB                   # INVALID     $sp, $k0, 0x47FB # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2dcb50u;
    // Unhandled REGIMM instruction: 0x1A
    // 0x2dcb54: 0x153a9580  bne         $t1, $k0, . + 4 + (-0x6A80 << 2)
    ctx->pc = 0x2DCB54u;
    {
        const bool branch_taken_0x2dcb54 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 26));
        ctx->pc = 0x2DCB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB54u;
            // 0x2dcb58: 0x46ba55a0  .word       0x46BA55A0                   # INVALID     $s5, $k0, 0x55A0 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        // Unhandled FPU instruction: format 0x15, function 0x20
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb54) {
            ctx->pc = 0x2C2158u;
            return;
        }
    }
    ctx->pc = 0x2DCB5Cu;
    // 0x2dcb5c: 0x45ba55a2  .word       0x45BA55A2                   # INVALID     $t5, $k0, 0x55A2 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dcb5cu;
    // Unhandled FPU instruction: format 0xD, function 0x22
    // 0x2dcb60: 0x27b84c84  addiu       $t8, $sp, 0x4C84
    ctx->pc = 0x2dcb60u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 19588));
    // 0x2dcb64: 0x47b857ca  .word       0x47B857CA                   # INVALID     $sp, $t8, 0x57CA # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dcb64u;
    // Unhandled FPU instruction: format 0x1D, function 0xA
    // 0x2dcb68: 0x37b8c74a  ori         $t8, $sp, 0xC74A
    ctx->pc = 0x2dcb68u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)51018);
    // 0x2dcb6c: 0x1847e4c4  .word       0x1847E4C4                   # blez        $v0, . + 4 + (-0x1B3C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_2dcb70:
    if (ctx->pc == 0x2DCB70u) {
        ctx->pc = 0x2DCB70u;
            // 0x2dcb70: 0x27b84f88  addiu       $t8, $sp, 0x4F88 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 20360));
        ctx->pc = 0x2DCB74u;
        goto label_fallthrough_0x2dcb6c;
    }
    ctx->pc = 0x2DCB6Cu;
    {
        const bool branch_taken_0x2dcb6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DCB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB6Cu;
            // 0x2dcb70: 0x27b84f88  addiu       $t8, $sp, 0x4F88 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 20360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb6c) {
            ctx->pc = 0x2D5E80u;
            return;
        }
    }
label_fallthrough_0x2dcb6c:
    ctx->pc = 0x2DCB74u;
    // 0x2dcb74: 0x57b947fa  bnel        $sp, $t9, . + 4 + (0x47FA << 2)
    ctx->pc = 0x2DCB74u;
    {
        const bool branch_taken_0x2dcb74 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 25));
        if (branch_taken_0x2dcb74) {
            ctx->pc = 0x2DCB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB74u;
            // 0x2dcb78: 0xc0b71e0  jal         func_2DC780 (Delay Slot)
        // JAL 0x2DC780 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EEB60u;
            return;
        }
    }
    ctx->pc = 0x2DCB7Cu;
    // 0x2dcb7c: 0x2847b7c1  slti        $a3, $v0, -0x483F
    ctx->pc = 0x2dcb7cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294948801) ? 1 : 0);
label_2dcb80:
    // 0x2dcb80: 0x17b965c4  bne         $sp, $t9, . + 4 + (0x65C4 << 2)
    ctx->pc = 0x2DCB80u;
    {
        const bool branch_taken_0x2dcb80 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 25));
        ctx->pc = 0x2DCB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB80u;
            // 0x2dcb84: 0x3c09003c  lui         $t1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb80) {
            ctx->pc = 0x2F6294u;
            return;
        }
    }
    ctx->pc = 0x2DCB88u;
label_2dcb88:
    // 0x2dcb88: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x2dcb88u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x2dcb8c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dcb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dcb90: 0x27b867c0  addiu       $t8, $sp, 0x67C0
    ctx->pc = 0x2dcb90u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 26560));
    // 0x2dcb94: 0x2442e068  addiu       $v0, $v0, -0x1F98
    ctx->pc = 0x2dcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959208));
    // 0x2dcb98: 0x15ba95a4  bne         $t5, $k0, . + 4 + (-0x6A5C << 2)
    ctx->pc = 0x2DCB98u;
    {
        const bool branch_taken_0x2dcb98 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 26));
        ctx->pc = 0x2DCB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCB98u;
            // 0x2dcb9c: 0x2529e090  addiu       $t1, $t1, -0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb98) {
            ctx->pc = 0x2C222Cu;
            return;
        }
    }
    ctx->pc = 0x2DCBA0u;
label_2dcba0:
    // 0x2dcba0: 0x12ba95a2  beq         $s5, $k0, . + 4 + (-0x6A5E << 2)
label_2dcba4:
    if (ctx->pc == 0x2DCBA4u) {
        ctx->pc = 0x2DCBA4u;
            // 0x2dcba4: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
        ctx->pc = 0x2DCBA8u;
        goto label_fallthrough_0x2dcba0;
    }
    ctx->pc = 0x2DCBA0u;
    {
        const bool branch_taken_0x2dcba0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 26));
        ctx->pc = 0x2DCBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBA0u;
            // 0x2dcba4: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcba0) {
            ctx->pc = 0x2C222Cu;
            return;
        }
    }
label_fallthrough_0x2dcba0:
    ctx->pc = 0x2DCBA8u;
    // 0x2dcba8: 0x47bac7c0  .word       0x47BAC7C0                   # INVALID     $sp, $k0, -0x3840 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dcba8u;
    // Unhandled FPU instruction: format 0x1D, function 0x0
    // 0x2dcbac: 0x77bc47fa  .word       0x77BC47FA                   # INVALID     $sp, $gp, 0x47FA # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcbacu;
    // Unhandled opcode: 0x1D
label_2dcbb0:
    // 0x2dcbb0: 0x67b947fa  daddiu      $t9, $sp, 0x47FA
    ctx->pc = 0x2dcbb0u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 29) + (int64_t)(int32_t)18426);
    // 0x2dcbb4: 0x97b8d7c0  lhu         $t8, -0x2840($sp)
    ctx->pc = 0x2dcbb4u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4294956992)));
label_2dcbb8:
    // 0x2dcbb8: 0x37b84f7a  ori         $t8, $sp, 0x4F7A
    ctx->pc = 0x2dcbb8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)20346);
    // 0x2dcbbc: 0xc0b8e62  jal         func_2E3988
    ctx->pc = 0x2DCBBCu;
    SET_GPR_U32(ctx, 31, 0x2DCBC4u);
    ctx->pc = 0x2DCBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBBCu;
            // 0x2dcbc0: 0x27b8cf7a  addiu       $t8, $sp, -0x3086 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 4294954874));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3988u;
    if (runtime->hasFunction(0x2E3988u)) {
        auto targetFn = runtime->lookupFunction(0x2E3988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBC4u; }
        if (ctx->pc != 0x2DCBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3988_0x2e3988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBC4u; }
        if (ctx->pc != 0x2DCBC4u) { return; }
    }
    ctx->pc = 0x2DCBC4u;
label_2dcbc4:
    // 0x2dcbc4: 0x37b84704  ori         $t8, $sp, 0x4704
    ctx->pc = 0x2dcbc4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)18180);
label_2dcbc8:
    // 0x2dcbc8: 0x3e38e580  .word       0x3E38E580                   # lui         $t8, 0xE580 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dcbc8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)58752 << 16));
    // 0x2dcbcc: 0x357b640  .word       0x0357B640                   # sll         $s6, $s7, 25 # 03400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dcbccu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 25));
label_2dcbd0:
    // 0x2dcbd0: 0x847b6c2  j           func_11EDB08
    ctx->pc = 0x2DCBD0u;
    ctx->pc = 0x2DCBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBD0u;
            // 0x2dcbd4: 0xcb841c8  jal         func_2E10720 (Delay Slot)
        // JAL 0x2E10720 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EDB08u;
    {
        auto targetFn = runtime->lookupFunction(0x11EDB08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DCBD8u;
label_2dcbd8:
    // 0x2dcbd8: 0x37b947fb  ori         $t9, $sp, 0x47FB
    ctx->pc = 0x2dcbd8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)18427);
label_2dcbdc:
    // 0x2dcbdc: 0x3804640  .word       0x03804640                   # sll         $t0, $zero, 25 # 03800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dcbdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2dcbe0:
    // 0x2dcbe0: 0xd3841c8  jal         func_4E10720
    ctx->pc = 0x2DCBE0u;
    SET_GPR_U32(ctx, 31, 0x2DCBE8u);
    ctx->pc = 0x2DCBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBE0u;
            // 0x2dcbe4: 0x1fba9580  .word       0x1FBA9580                   # bgtz        $sp, . + 4 + (-0x6A80 << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2DCBE4 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E10720u;
    {
        auto targetFn = runtime->lookupFunction(0x4E10720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBE8u; }
        if (ctx->pc != 0x2DCBE8u) { return; }
    }
    ctx->pc = 0x2DCBE8u;
label_2dcbe8:
    // 0x2dcbe8: 0x3484640  .word       0x03484640                   # sll         $t0, $t0, 25 # 03400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dcbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 25));
    // 0x2dcbec: 0xdb841c8  jal         func_6E10720
    ctx->pc = 0x2DCBECu;
    SET_GPR_U32(ctx, 31, 0x2DCBF4u);
    ctx->pc = 0x2DCBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBECu;
            // 0x2dcbf0: 0xfb84641  jal         func_EE11904 (Delay Slot)
        // JAL 0xEE11904 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x6E10720u;
    {
        auto targetFn = runtime->lookupFunction(0x6E10720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCBF4u; }
        if (ctx->pc != 0x2DCBF4u) { return; }
    }
    ctx->pc = 0x2DCBF4u;
label_2dcbf4:
    // 0x2dcbf4: 0x17b84580  bne         $sp, $t8, . + 4 + (0x4580 << 2)
label_2dcbf8:
    if (ctx->pc == 0x2DCBF8u) {
        ctx->pc = 0x2DCBF8u;
            // 0x2dcbf8: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->pc = 0x2DCBFCu;
        goto label_fallthrough_0x2dcbf4;
    }
    ctx->pc = 0x2DCBF4u;
    {
        const bool branch_taken_0x2dcbf4 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 24));
        ctx->pc = 0x2DCBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBF4u;
            // 0x2dcbf8: 0xc0b7c76  jal         func_2DF1D8 (Delay Slot)
        // JAL 0x2DF1D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbf4) {
            ctx->pc = 0x2EE1F8u;
            return;
        }
    }
label_fallthrough_0x2dcbf4:
    ctx->pc = 0x2DCBFCu;
    // 0x2dcbfc: 0x17b84580  bne         $sp, $t8, . + 4 + (0x4580 << 2)
label_2dcc00:
    if (ctx->pc == 0x2DCC00u) {
        ctx->pc = 0x2DCC00u;
            // 0x2dcc00: 0x37b841c8  ori         $t8, $sp, 0x41C8 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)16840);
        ctx->pc = 0x2DCC04u;
        goto label_fallthrough_0x2dcbfc;
    }
    ctx->pc = 0x2DCBFCu;
    {
        const bool branch_taken_0x2dcbfc = (GPR_U64(ctx, 29) != GPR_U64(ctx, 24));
        ctx->pc = 0x2DCC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCBFCu;
            // 0x2dcc00: 0x37b841c8  ori         $t8, $sp, 0x41C8 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)16840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcbfc) {
            ctx->pc = 0x2EE200u;
            return;
        }
    }
label_fallthrough_0x2dcbfc:
    ctx->pc = 0x2DCC04u;
    // 0x2dcc04: 0x17ba41e8  bne         $sp, $k0, . + 4 + (0x41E8 << 2)
    ctx->pc = 0x2DCC04u;
    {
        const bool branch_taken_0x2dcc04 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 26));
        ctx->pc = 0x2DCC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC04u;
            // 0x2dcc08: 0x15ba55a5  bne         $t5, $k0, . + 4 + (0x55A5 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DCC08 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc04) {
            ctx->pc = 0x2ED3A8u;
            return;
        }
    }
    ctx->pc = 0x2DCC0Cu;
    // 0x2dcc0c: 0x17b857e1  bne         $sp, $t8, . + 4 + (0x57E1 << 2)
    ctx->pc = 0x2DCC0Cu;
    {
        const bool branch_taken_0x2dcc0c = (GPR_U64(ctx, 29) != GPR_U64(ctx, 24));
        ctx->pc = 0x2DCC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC0Cu;
            // 0x2dcc10: 0x17b84580  bne         $sp, $t8, . + 4 + (0x4580 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DCC10 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc0c) {
            ctx->pc = 0x2F2B94u;
            return;
        }
    }
    ctx->pc = 0x2DCC14u;
    // 0x2dcc14: 0x17b84580  bne         $sp, $t8, . + 4 + (0x4580 << 2)
    ctx->pc = 0x2DCC14u;
    {
        const bool branch_taken_0x2dcc14 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 24));
        ctx->pc = 0x2DCC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC14u;
            // 0x2dcc18: 0x77b871e1  .word       0x77B871E1                   # INVALID     $sp, $t8, 0x71E1 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x1D
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc14) {
            ctx->pc = 0x2EE218u;
            return;
        }
    }
    ctx->pc = 0x2DCC1Cu;
    // 0x2dcc1c: 0x47b861e1  .word       0x47B861E1                   # INVALID     $sp, $t8, 0x61E1 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dcc1cu;
    // Unhandled FPU instruction: format 0x1D, function 0x21
    // 0x2dcc20: 0x1dbb21e0  .word       0x1DBB21E0                   # bgtz        $t5, . + 4 + (0x21E0 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DCC20u;
    {
        const bool branch_taken_0x2dcc20 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x2DCC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC20u;
            // 0x2dcc24: 0x17be01e0  bne         $sp, $fp, . + 4 + (0x1E0 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DCC24 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc20) {
            ctx->pc = 0x2E53A4u;
            return;
        }
    }
    ctx->pc = 0x2DCC28u;
    // 0x2dcc28: 0x373841c0  ori         $t8, $t9, 0x41C0
    ctx->pc = 0x2dcc28u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)16832);
    // 0x2dcc2c: 0x17b811d0  bne         $sp, $t8, . + 4 + (0x11D0 << 2)
    ctx->pc = 0x2DCC2Cu;
    {
        const bool branch_taken_0x2dcc2c = (GPR_U64(ctx, 29) != GPR_U64(ctx, 24));
        ctx->pc = 0x2DCC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC2Cu;
            // 0x2dcc30: 0x27b81720  addiu       $t8, $sp, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 5920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc2c) {
            ctx->pc = 0x2E1370u;
            return;
        }
    }
    ctx->pc = 0x2DCC34u;
label_2dcc34:
    // 0x2dcc34: 0x57b851e1  bnel        $sp, $t8, . + 4 + (0x51E1 << 2)
    ctx->pc = 0x2DCC34u;
    {
        const bool branch_taken_0x2dcc34 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 24));
        if (branch_taken_0x2dcc34) {
            ctx->pc = 0x2DCC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC34u;
            // 0x2dcc38: 0x17be01e0  bne         $sp, $fp, . + 4 + (0x1E0 << 2) (Delay Slot)
        // Likely branch instruction at 0x2DCC38 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F13BCu;
            return;
        }
    }
    ctx->pc = 0x2DCC3Cu;
    // 0x2dcc3c: 0x373841c0  ori         $t8, $t9, 0x41C0
    ctx->pc = 0x2dcc3cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)16832);
    // 0x2dcc40: 0x6ba1585  .word       0x06BA1585                   # INVALID     $s5, $k0, 0x1585 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2dcc40u;
    // Unhandled REGIMM instruction: 0x1A
    // 0x2dcc44: 0x184684c6  .word       0x184684C6                   # blez        $v0, . + 4 + (-0x7B3A << 2) # 00060000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DCC44u;
    {
        const bool branch_taken_0x2dcc44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DCC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC44u;
            // 0x2dcc48: 0x37b84f88  ori         $t8, $sp, 0x4F88 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)20360);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcc44) {
            ctx->pc = 0x2BDF60u;
            return;
        }
    }
    ctx->pc = 0x2DCC4Cu;
    // 0x2dcc4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DCC4Cu;
    {
        const bool branch_taken_0x2dcc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc4c) {
            ctx->pc = 0x2DCC7Cu;
            goto label_2dcc7c;
        }
    }
    ctx->pc = 0x2DCC54u;
    // 0x2dcc54: 0xdf2b878f  ld          $t3, -0x7871($t9)
    ctx->pc = 0x2dcc54u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 25), 4294936463)));
    // 0x2dcc58: 0x3b92820  add         $a1, $sp, $t9
    ctx->pc = 0x2dcc58u;
    {     int32_t rs_val = GPR_S32(ctx, 29);     int32_t rt_val = GPR_S32(ctx, 25);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x2dcc5c: 0x846c3ebb  lh          $t4, 0x3EBB($v1)
    ctx->pc = 0x2dcc5cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16059)));
    // 0x2dcc60: 0x262537b8  addiu       $a1, $s1, 0x37B8
    ctx->pc = 0x2dcc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 14264));
    // 0x2dcc64: 0xdde34e97  ld          $v1, 0x4E97($t7)
    ctx->pc = 0x2dcc64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 15), 20119)));
    // 0x2dcc68: 0xcb076b5  jal         func_2C1DAD4
    ctx->pc = 0x2DCC68u;
    SET_GPR_U32(ctx, 31, 0x2DCC70u);
    ctx->pc = 0x2DCC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC68u;
            // 0x2dcc6c: 0x7ddeeca2  sq          $fp, -0x135E($t6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 14), 4294962338), GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1DAD4u;
    {
        auto targetFn = runtime->lookupFunction(0x2C1DAD4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC70u; }
        if (ctx->pc != 0x2DCC70u) { return; }
    }
    ctx->pc = 0x2DCC70u;
label_2dcc70:
    // 0x2dcc70: 0xc712f9e9  lwc1        $f18, -0x617($t8)
    ctx->pc = 0x2dcc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294965737)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dcc74: 0x7ddeedb2  sq          $fp, -0x124E($t6)
    ctx->pc = 0x2dcc74u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 4294962610), GPR_VEC(ctx, 30));
    // 0x2dcc78: 0x0  nop
    ctx->pc = 0x2dcc78u;
    // NOP
label_2dcc7c:
    // 0x2dcc7c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dcc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dcc80: 0x2442cc6c  addiu       $v0, $v0, -0x3394
    ctx->pc = 0x2dcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954092));
    // 0x2dcc84: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dcc88: 0x2484cc4c  addiu       $a0, $a0, -0x33B4
    ctx->pc = 0x2dcc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954060));
    // 0x2dcc8c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dcc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dcc90: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dcc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dcc94: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DCC94u;
    SET_GPR_U32(ctx, 31, 0x2DCC9Cu);
    ctx->pc = 0x2DCC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCC94u;
            // 0x2dcc98: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC9Cu; }
        if (ctx->pc != 0x2DCC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCC9Cu; }
        if (ctx->pc != 0x2DCC9Cu) { return; }
    }
    ctx->pc = 0x2DCC9Cu;
label_2dcc9c:
    // 0x2dcc9c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dcc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcca0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2dcca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dcca4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2dcca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dcca8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2dcca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2dccac:
    // 0x2dccac: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2dccacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dccb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dccb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dccb4: 0xc7b60088  lwc1        $f22, 0x88($sp)
    ctx->pc = 0x2dccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dccb8: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x2dccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dccbc: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x2dccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dccc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DCCC0u;
            // 0x2dccc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DCCC8u;
    ctx->pc = 0x2dccc8u;
}
