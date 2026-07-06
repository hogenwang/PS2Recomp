#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011AD70
// Address: 0x11ad70 - 0x11ae28
void sub_0011AD70_0x11ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AD70_0x11ad70");
#endif

    switch (ctx->pc) {
        case 0x11ada0u: goto label_11ada0;
        case 0x11ada8u: goto label_11ada8;
        case 0x11adacu: goto label_11adac;
        case 0x11adb4u: goto label_11adb4;
        case 0x11adbcu: goto label_11adbc;
        case 0x11addcu: goto label_11addc;
        case 0x11ade4u: goto label_11ade4;
        case 0x11ae0cu: goto label_11ae0c;
        case 0x11ae20u: goto label_11ae20;
        default: break;
    }

    ctx->pc = 0x11ad70u;

    // 0x11ad70: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11ad70u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11ad74: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11ad74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ad78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ad78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ad7c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11ad7cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11ad80: 0x3c0e3f49  lui         $t6, 0x3F49
    ctx->pc = 0x11ad80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16201 << 16));
    // 0x11ad84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ad84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ad88: 0x35ce0fd8  ori         $t6, $t6, 0xFD8
    ctx->pc = 0x11ad88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4056);
    // 0x11ad8c: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11ad8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ad90: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11ad90u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11ad94: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AD94u;
    {
        const bool branch_taken_0x11ad94 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AD94u;
            // 0x11ad98: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad94) {
            ctx->pc = 0x11ADB4u;
            goto label_11adb4;
        }
    }
    ctx->pc = 0x11AD9Cu;
    // 0x11ad9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ada0:
    // 0x11ada0: 0xc0469ac  jal         func_11A6B0
    ctx->pc = 0x11ADA0u;
    SET_GPR_U32(ctx, 31, 0x11ADA8u);
    ctx->pc = 0x11A6B0u;
    if (runtime->hasFunction(0x11A6B0u)) {
        auto targetFn = runtime->lookupFunction(0x11A6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADA8u; }
        if (ctx->pc != 0x11ADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011A6B0_0x11a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADA8u; }
        if (ctx->pc != 0x11ADA8u) { return; }
    }
    ctx->pc = 0x11ADA8u;
label_11ada8:
    // 0x11ada8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11adac:
    // 0x11adac: 0x3e00008  jr          $ra
    ctx->pc = 0x11ADACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ADB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADACu;
            // 0x11adb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11ADB4u;
label_11adb4:
    // 0x11adb4: 0xc046632  jal         func_1198C8
    ctx->pc = 0x11ADB4u;
    SET_GPR_U32(ctx, 31, 0x11ADBCu);
    ctx->pc = 0x11ADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADB4u;
            // 0x11adb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1198C8u;
    if (runtime->hasFunction(0x1198C8u)) {
        auto targetFn = runtime->lookupFunction(0x1198C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADBCu; }
        if (ctx->pc != 0x11ADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001198C8_0x1198c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADBCu; }
        if (ctx->pc != 0x11ADBCu) { return; }
    }
    ctx->pc = 0x11ADBCu;
label_11adbc:
    // 0x11adbc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11adbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11adc0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11adc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11adc4: 0x104f0013  beq         $v0, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x11ADC4u;
    {
        const bool branch_taken_0x11adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11ADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADC4u;
            // 0x11adc8: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adc4) {
            ctx->pc = 0x11AE14u;
            goto label_11ae14;
        }
    }
    ctx->pc = 0x11ADCCu;
    // 0x11adcc: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11ADCCu;
    {
        const bool branch_taken_0x11adcc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADCCu;
            // 0x11add0: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adcc) {
            ctx->pc = 0x11ADF8u;
            goto label_11adf8;
        }
    }
    ctx->pc = 0x11ADD4u;
    // 0x11add4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ADD4u;
    {
        const bool branch_taken_0x11add4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADD4u;
            // 0x11add8: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11add4) {
            ctx->pc = 0x11ADECu;
            goto label_11adec;
        }
    }
    ctx->pc = 0x11ADDCu;
label_11addc:
    // 0x11addc: 0xc046750  jal         func_119D40
    ctx->pc = 0x11ADDCu;
    SET_GPR_U32(ctx, 31, 0x11ADE4u);
    ctx->pc = 0x11ADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADDCu;
            // 0x11ade0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x119D40u;
    if (runtime->hasFunction(0x119D40u)) {
        auto targetFn = runtime->lookupFunction(0x119D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADE4u; }
        if (ctx->pc != 0x11ADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00119D40_0x119d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ADE4u; }
        if (ctx->pc != 0x11ADE4u) { return; }
    }
    ctx->pc = 0x11ADE4u;
label_11ade4:
    // 0x11ade4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x11ADE4u;
    {
        const bool branch_taken_0x11ade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADE4u;
            // 0x11ade8: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ade4) {
            ctx->pc = 0x11ADA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ada8;
        }
    }
    ctx->pc = 0x11ADECu;
label_11adec:
    // 0x11adec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11adf0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x11ADF0u;
    {
        const bool branch_taken_0x11adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADF0u;
            // 0x11adf4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adf0) {
            ctx->pc = 0x11ADA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ada0;
        }
    }
    ctx->pc = 0x11ADF8u;
label_11adf8:
    // 0x11adf8: 0x144ffff8  bne         $v0, $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11ADF8u;
    {
        const bool branch_taken_0x11adf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11ADFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADF8u;
            // 0x11adfc: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adf8) {
            ctx->pc = 0x11ADDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11addc;
        }
    }
    ctx->pc = 0x11AE00u;
    // 0x11ae00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ae04: 0xc0469ac  jal         func_11A6B0
    ctx->pc = 0x11AE04u;
    SET_GPR_U32(ctx, 31, 0x11AE0Cu);
    ctx->pc = 0x11AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE04u;
            // 0x11ae08: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A6B0u;
    if (runtime->hasFunction(0x11A6B0u)) {
        auto targetFn = runtime->lookupFunction(0x11A6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE0Cu; }
        if (ctx->pc != 0x11AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011A6B0_0x11a6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE0Cu; }
        if (ctx->pc != 0x11AE0Cu) { return; }
    }
    ctx->pc = 0x11AE0Cu;
label_11ae0c:
    // 0x11ae0c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11AE0Cu;
    {
        const bool branch_taken_0x11ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE0Cu;
            // 0x11ae10: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae0c) {
            ctx->pc = 0x11ADA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ada8;
        }
    }
    ctx->pc = 0x11AE14u;
label_11ae14:
    // 0x11ae14: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11ae14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11ae18: 0xc046750  jal         func_119D40
    ctx->pc = 0x11AE18u;
    SET_GPR_U32(ctx, 31, 0x11AE20u);
    ctx->pc = 0x11AE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE18u;
            // 0x11ae1c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x119D40u;
    if (runtime->hasFunction(0x119D40u)) {
        auto targetFn = runtime->lookupFunction(0x119D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE20u; }
        if (ctx->pc != 0x11AE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00119D40_0x119d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE20u; }
        if (ctx->pc != 0x11AE20u) { return; }
    }
    ctx->pc = 0x11AE20u;
label_11ae20:
    // 0x11ae20: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x11AE20u;
    {
        const bool branch_taken_0x11ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE20u;
            // 0x11ae24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae20) {
            ctx->pc = 0x11ADACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11adac;
        }
    }
    ctx->pc = 0x11AE28u;
    ctx->pc = 0x11ae28u;
}
