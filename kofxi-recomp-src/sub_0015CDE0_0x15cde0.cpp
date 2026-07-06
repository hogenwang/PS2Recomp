#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CDE0
// Address: 0x15cde0 - 0x15d110
void sub_0015CDE0_0x15cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CDE0_0x15cde0");
#endif

    switch (ctx->pc) {
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce4cu: goto label_15ce4c;
        case 0x15ce60u: goto label_15ce60;
        case 0x15cec4u: goto label_15cec4;
        case 0x15cf70u: goto label_15cf70;
        case 0x15cf9cu: goto label_15cf9c;
        case 0x15d018u: goto label_15d018;
        case 0x15d030u: goto label_15d030;
        case 0x15d054u: goto label_15d054;
        case 0x15d088u: goto label_15d088;
        case 0x15d090u: goto label_15d090;
        case 0x15d09cu: goto label_15d09c;
        case 0x15d0a4u: goto label_15d0a4;
        case 0x15d0acu: goto label_15d0ac;
        case 0x15d0c4u: goto label_15d0c4;
        case 0x15d0e0u: goto label_15d0e0;
        case 0x15d0f4u: goto label_15d0f4;
        default: break;
    }

    ctx->pc = 0x15cde0u;

    // 0x15cde0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15cde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15cde4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15cde8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15cde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15cdec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cdf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cdf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15cdf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cdf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15cdf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cdfc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x15cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15ce00: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15CE00u;
    {
        const bool branch_taken_0x15ce00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE00u;
            // 0x15ce04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce00) {
            ctx->pc = 0x15CE24u;
            goto label_15ce24;
        }
    }
    ctx->pc = 0x15CE08u;
label_15ce08:
    // 0x15ce08: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x15ce08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ce0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15ce10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ce14: 0x0  nop
    ctx->pc = 0x15ce14u;
    // NOP
    // 0x15ce18: 0x0  nop
    ctx->pc = 0x15ce18u;
    // NOP
    // 0x15ce1c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15CE1Cu;
    {
        const bool branch_taken_0x15ce1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ce1c) {
            ctx->pc = 0x15CE08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ce08;
        }
    }
    ctx->pc = 0x15CE24u;
label_15ce24:
    // 0x15ce24: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x15ce24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15ce28: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x15CE28u;
    {
        const bool branch_taken_0x15ce28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce28) {
            ctx->pc = 0x15CE2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE28u;
            // 0x15ce2c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CEACu;
            goto label_15ceac;
        }
    }
    ctx->pc = 0x15CE30u;
    // 0x15ce30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ce34: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CE34u;
    {
        const bool branch_taken_0x15ce34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15ce34) {
            ctx->pc = 0x15CE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE34u;
            // 0x15ce38: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CE44u;
            goto label_15ce44;
        }
    }
    ctx->pc = 0x15CE3Cu;
    // 0x15ce3c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15CE3Cu;
    {
        const bool branch_taken_0x15ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce3c) {
            ctx->pc = 0x15CEA8u;
            goto label_15cea8;
        }
    }
    ctx->pc = 0x15CE44u;
label_15ce44:
    // 0x15ce44: 0xc0572a0  jal         func_15CA80
    ctx->pc = 0x15CE44u;
    SET_GPR_U32(ctx, 31, 0x15CE4Cu);
    ctx->pc = 0x15CE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE44u;
            // 0x15ce48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA80u;
    if (runtime->hasFunction(0x15CA80u)) {
        auto targetFn = runtime->lookupFunction(0x15CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE4Cu; }
        if (ctx->pc != 0x15CE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CA80_0x15ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE4Cu; }
        if (ctx->pc != 0x15CE4Cu) { return; }
    }
    ctx->pc = 0x15CE4Cu;
label_15ce4c:
    // 0x15ce4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ce4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce50: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x15ce50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15ce54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15ce54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce58: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x15ce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x15ce5c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15ce60:
    // 0x15ce60: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x15ce60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15ce64: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CE64u;
    {
        const bool branch_taken_0x15ce64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce64) {
            ctx->pc = 0x15CE80u;
            goto label_15ce80;
        }
    }
    ctx->pc = 0x15CE6Cu;
    // 0x15ce6c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x15ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ce70: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x15ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x15ce74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15CE74u;
    {
        const bool branch_taken_0x15ce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE74u;
            // 0x15ce78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce74) {
            ctx->pc = 0x15CE90u;
            goto label_15ce90;
        }
    }
    ctx->pc = 0x15CE7Cu;
    // 0x15ce7c: 0x0  nop
    ctx->pc = 0x15ce7cu;
    // NOP
label_15ce80:
    // 0x15ce80: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x15ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ce84: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x15ce84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15ce88: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x15ce8c: 0x0  nop
    ctx->pc = 0x15ce8cu;
    // NOP
label_15ce90:
    // 0x15ce90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15ce90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15ce94: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x15ce94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15ce98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15ce98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15ce9c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15CE9Cu;
    {
        const bool branch_taken_0x15ce9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE9Cu;
            // 0x15cea0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce9c) {
            ctx->pc = 0x15CE60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ce60;
        }
    }
    ctx->pc = 0x15CEA4u;
    // 0x15cea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cea8:
    // 0x15cea8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15ceac:
    // 0x15ceac: 0x27a8004c  addiu       $t0, $sp, 0x4C
    ctx->pc = 0x15ceacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15ceb0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x15ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x15ceb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ceb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ceb8: 0x24670038  addiu       $a3, $v1, 0x38
    ctx->pc = 0x15ceb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x15cebc: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x15cebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x15cec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cec4:
    // 0x15cec4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x15cec4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15cec8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15CEC8u;
    {
        const bool branch_taken_0x15cec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cec8) {
            ctx->pc = 0x15CF18u;
            goto label_15cf18;
        }
    }
    ctx->pc = 0x15CED0u;
    // 0x15ced0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CED0u;
    {
        const bool branch_taken_0x15ced0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15ced0) {
            ctx->pc = 0x15CEE0u;
            goto label_15cee0;
        }
    }
    ctx->pc = 0x15CED8u;
    // 0x15ced8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15CED8u;
    {
        const bool branch_taken_0x15ced8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ced8) {
            ctx->pc = 0x15CF18u;
            goto label_15cf18;
        }
    }
    ctx->pc = 0x15CEE0u;
label_15cee0:
    // 0x15cee0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x15cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cee4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x15cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cee8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x15cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ceec: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x15ceecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x15cef0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15cef0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15cef4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x15cef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x15cef8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15cef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15cefc: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x15cefcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x15cf00: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x15cf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x15cf04: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cf08: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x15cf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x15cf0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15cf10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15CF10u;
    {
        const bool branch_taken_0x15cf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF10u;
            // 0x15cf14: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf10) {
            ctx->pc = 0x15CF38u;
            goto label_15cf38;
        }
    }
    ctx->pc = 0x15CF18u;
label_15cf18:
    // 0x15cf18: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x15cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cf1c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x15cf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x15cf20: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cf24: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x15cf24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x15cf28: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15cf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cf2c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x15cf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x15cf30: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15cf34: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x15cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_15cf38:
    // 0x15cf38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15cf3c: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x15cf3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15cf40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15cf40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15cf44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15cf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15cf48: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x15CF48u;
    {
        const bool branch_taken_0x15cf48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF48u;
            // 0x15cf4c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf48) {
            ctx->pc = 0x15CEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cec4;
        }
    }
    ctx->pc = 0x15CF50u;
    // 0x15cf50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15cf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cf54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cf54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cf58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF5Cu;
            // 0x15cf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CF64u;
    // 0x15cf64: 0x0  nop
    ctx->pc = 0x15cf64u;
    // NOP
    // 0x15cf68: 0x0  nop
    ctx->pc = 0x15cf68u;
    // NOP
    // 0x15cf6c: 0x0  nop
    ctx->pc = 0x15cf6cu;
    // NOP
label_15cf70:
    // 0x15cf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15cf74: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15cf78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15cf7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cf80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cf84: 0x80424074  lb          $v0, 0x4074($v0)
    ctx->pc = 0x15cf84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16500)));
    // 0x15cf88: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x15CF88u;
    {
        const bool branch_taken_0x15cf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF88u;
            // 0x15cf8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf88) {
            ctx->pc = 0x15D0E8u;
            goto label_15d0e8;
        }
    }
    ctx->pc = 0x15CF90u;
    // 0x15cf90: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x15cf90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15cf94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15cf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf98: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x15cf98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15cf9c:
    // 0x15cf9c: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x15cf9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15cfa0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CFA0u;
    {
        const bool branch_taken_0x15cfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cfa0) {
            ctx->pc = 0x15CFC8u;
            goto label_15cfc8;
        }
    }
    ctx->pc = 0x15CFA8u;
    // 0x15cfa8: 0x82020040  lb          $v0, 0x40($s0)
    ctx->pc = 0x15cfa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15cfac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15cfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cfb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15cfb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cfb4: 0x0  nop
    ctx->pc = 0x15cfb4u;
    // NOP
    // 0x15cfb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15cfb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15cfbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15cfbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15cfc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15CFC0u;
    {
        const bool branch_taken_0x15cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFC0u;
            // 0x15cfc4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfc0) {
            ctx->pc = 0x15CFE8u;
            goto label_15cfe8;
        }
    }
    ctx->pc = 0x15CFC8u;
label_15cfc8:
    // 0x15cfc8: 0x82020040  lb          $v0, 0x40($s0)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15cfcc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cfd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15cfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15cfd4: 0x0  nop
    ctx->pc = 0x15cfd4u;
    // NOP
    // 0x15cfd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15cfd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15cfdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15cfdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15cfe0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x15cfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15cfe4: 0x0  nop
    ctx->pc = 0x15cfe4u;
    // NOP
label_15cfe8:
    // 0x15cfe8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15cfec: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x15cfecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15cff0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x15CFF0u;
    {
        const bool branch_taken_0x15cff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFF0u;
            // 0x15cff4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cff0) {
            ctx->pc = 0x15CF9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cf9c;
        }
    }
    ctx->pc = 0x15CFF8u;
    // 0x15cff8: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x15cff8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15cffc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15CFFCu;
    {
        const bool branch_taken_0x15cffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cffc) {
            ctx->pc = 0x15D000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFFCu;
            // 0x15d000: 0x8205004a  lb          $a1, 0x4A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D020u;
            goto label_15d020;
        }
    }
    ctx->pc = 0x15D004u;
    // 0x15d004: 0x8205004a  lb          $a1, 0x4A($s0)
    ctx->pc = 0x15d004u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x15d008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d00c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15d00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d010: 0xc0572f8  jal         func_15CBE0
    ctx->pc = 0x15D010u;
    SET_GPR_U32(ctx, 31, 0x15D018u);
    ctx->pc = 0x15D014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D010u;
            // 0x15d014: 0x3c072000  lui         $a3, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBE0u;
    if (runtime->hasFunction(0x15CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D018u; }
        if (ctx->pc != 0x15D018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CBE0_0x15cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D018u; }
        if (ctx->pc != 0x15D018u) { return; }
    }
    ctx->pc = 0x15D018u;
label_15d018:
    // 0x15d018: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15D018u;
    {
        const bool branch_taken_0x15d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D018u;
            // 0x15d01c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d018) {
            ctx->pc = 0x15D034u;
            goto label_15d034;
        }
    }
    ctx->pc = 0x15D020u;
label_15d020:
    // 0x15d020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d024: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15d024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d028: 0xc0572f8  jal         func_15CBE0
    ctx->pc = 0x15D028u;
    SET_GPR_U32(ctx, 31, 0x15D030u);
    ctx->pc = 0x15D02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D028u;
            // 0x15d02c: 0x3c072000  lui         $a3, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBE0u;
    if (runtime->hasFunction(0x15CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D030u; }
        if (ctx->pc != 0x15D030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CBE0_0x15cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D030u; }
        if (ctx->pc != 0x15D030u) { return; }
    }
    ctx->pc = 0x15D030u;
label_15d030:
    // 0x15d030: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15d034:
    // 0x15d034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D038u;
    {
        const bool branch_taken_0x15d038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d038) {
            ctx->pc = 0x15D04Cu;
            goto label_15d04c;
        }
    }
    ctx->pc = 0x15D040u;
    // 0x15d040: 0x8202004a  lb          $v0, 0x4A($s0)
    ctx->pc = 0x15d040u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x15d044: 0x21023  negu        $v0, $v0
    ctx->pc = 0x15d044u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x15d048: 0xa202004a  sb          $v0, 0x4A($s0)
    ctx->pc = 0x15d048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 2));
label_15d04c:
    // 0x15d04c: 0xc067cb4  jal         func_19F2D0
    ctx->pc = 0x15D04Cu;
    SET_GPR_U32(ctx, 31, 0x15D054u);
    ctx->pc = 0x19F2D0u;
    if (runtime->hasFunction(0x19F2D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D054u; }
        if (ctx->pc != 0x15D054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2D0_0x19f2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D054u; }
        if (ctx->pc != 0x15D054u) { return; }
    }
    ctx->pc = 0x15D054u;
label_15d054:
    // 0x15d054: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15d054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15d058: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15d058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15d05c: 0x8463db32  lh          $v1, -0x24CE($v1)
    ctx->pc = 0x15d05cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957874)));
    // 0x15d060: 0x8442db30  lh          $v0, -0x24D0($v0)
    ctx->pc = 0x15d060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x15d064: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d068: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D068u;
    {
        const bool branch_taken_0x15d068 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x15D06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D068u;
            // 0x15d06c: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d068) {
            ctx->pc = 0x15D078u;
            goto label_15d078;
        }
    }
    ctx->pc = 0x15D070u;
    // 0x15d070: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d074: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x15d074u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_15d078:
    // 0x15d078: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15d078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d080: 0xc067cbc  jal         func_19F2F0
    ctx->pc = 0x15D080u;
    SET_GPR_U32(ctx, 31, 0x15D088u);
    ctx->pc = 0x15D084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D080u;
            // 0x15d084: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2F0u;
    if (runtime->hasFunction(0x19F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D088u; }
        if (ctx->pc != 0x15D088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2F0_0x19f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D088u; }
        if (ctx->pc != 0x15D088u) { return; }
    }
    ctx->pc = 0x15D088u;
label_15d088:
    // 0x15d088: 0xc067d0c  jal         func_19F430
    ctx->pc = 0x15D088u;
    SET_GPR_U32(ctx, 31, 0x15D090u);
    ctx->pc = 0x15D08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D088u;
            // 0x15d08c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F430u;
    if (runtime->hasFunction(0x19F430u)) {
        auto targetFn = runtime->lookupFunction(0x19F430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D090u; }
        if (ctx->pc != 0x15D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F430_0x19f430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D090u; }
        if (ctx->pc != 0x15D090u) { return; }
    }
    ctx->pc = 0x15D090u;
label_15d090:
    // 0x15d090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d094: 0xc067d00  jal         func_19F400
    ctx->pc = 0x15D094u;
    SET_GPR_U32(ctx, 31, 0x15D09Cu);
    ctx->pc = 0x15D098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D094u;
            // 0x15d098: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F400u;
    if (runtime->hasFunction(0x19F400u)) {
        auto targetFn = runtime->lookupFunction(0x19F400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D09Cu; }
        if (ctx->pc != 0x15D09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F400_0x19f400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D09Cu; }
        if (ctx->pc != 0x15D09Cu) { return; }
    }
    ctx->pc = 0x15D09Cu;
label_15d09c:
    // 0x15d09c: 0xc067d08  jal         func_19F420
    ctx->pc = 0x15D09Cu;
    SET_GPR_U32(ctx, 31, 0x15D0A4u);
    ctx->pc = 0x19F420u;
    if (runtime->hasFunction(0x19F420u)) {
        auto targetFn = runtime->lookupFunction(0x19F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0A4u; }
        if (ctx->pc != 0x15D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F420_0x19f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0A4u; }
        if (ctx->pc != 0x15D0A4u) { return; }
    }
    ctx->pc = 0x15D0A4u;
label_15d0a4:
    // 0x15d0a4: 0xc067cb8  jal         func_19F2E0
    ctx->pc = 0x15D0A4u;
    SET_GPR_U32(ctx, 31, 0x15D0ACu);
    ctx->pc = 0x19F2E0u;
    if (runtime->hasFunction(0x19F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0ACu; }
        if (ctx->pc != 0x15D0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2E0_0x19f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0ACu; }
        if (ctx->pc != 0x15D0ACu) { return; }
    }
    ctx->pc = 0x15D0ACu;
label_15d0ac:
    // 0x15d0ac: 0x82040049  lb          $a0, 0x49($s0)
    ctx->pc = 0x15d0acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d0b0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x15d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15d0b4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D0B4u;
    {
        const bool branch_taken_0x15d0b4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x15D0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0B4u;
            // 0x15d0b8: 0xa2030049  sb          $v1, 0x49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0b4) {
            ctx->pc = 0x15D0C4u;
            goto label_15d0c4;
        }
    }
    ctx->pc = 0x15D0BCu;
    // 0x15d0bc: 0xc055728  jal         func_155CA0
    ctx->pc = 0x15D0BCu;
    SET_GPR_U32(ctx, 31, 0x15D0C4u);
    ctx->pc = 0x15D0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0BCu;
            // 0x15d0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0C4u; }
        if (ctx->pc != 0x15D0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0C4u; }
        if (ctx->pc != 0x15D0C4u) { return; }
    }
    ctx->pc = 0x15D0C4u;
label_15d0c4:
    // 0x15d0c4: 0x82040049  lb          $a0, 0x49($s0)
    ctx->pc = 0x15d0c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x15d0c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x15d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15d0cc: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15D0CCu;
    {
        const bool branch_taken_0x15d0cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d0cc) {
            ctx->pc = 0x15D0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0CCu;
            // 0x15d0d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D0F8u;
            goto label_15d0f8;
        }
    }
    ctx->pc = 0x15D0D4u;
    // 0x15d0d4: 0x82040048  lb          $a0, 0x48($s0)
    ctx->pc = 0x15d0d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15d0d8: 0xc057444  jal         func_15D110
    ctx->pc = 0x15D0D8u;
    SET_GPR_U32(ctx, 31, 0x15D0E0u);
    ctx->pc = 0x15D0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0D8u;
            // 0x15d0dc: 0xc60c0044  lwc1        $f12, 0x44($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    if (runtime->hasFunction(0x15D110u)) {
        auto targetFn = runtime->lookupFunction(0x15D110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0E0u; }
        if (ctx->pc != 0x15D0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D110_0x15d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0E0u; }
        if (ctx->pc != 0x15D0E0u) { return; }
    }
    ctx->pc = 0x15D0E0u;
label_15d0e0:
    // 0x15d0e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15D0E0u;
    {
        const bool branch_taken_0x15d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0e0) {
            ctx->pc = 0x15D0F4u;
            goto label_15d0f4;
        }
    }
    ctx->pc = 0x15D0E8u;
label_15d0e8:
    // 0x15d0e8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15d0ec: 0xc055728  jal         func_155CA0
    ctx->pc = 0x15D0ECu;
    SET_GPR_U32(ctx, 31, 0x15D0F4u);
    ctx->pc = 0x15D0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0ECu;
            // 0x15d0f0: 0xa0404074  sb          $zero, 0x4074($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16500), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0F4u; }
        if (ctx->pc != 0x15D0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0F4u; }
        if (ctx->pc != 0x15D0F4u) { return; }
    }
    ctx->pc = 0x15D0F4u;
label_15d0f4:
    // 0x15d0f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15d0f8:
    // 0x15d0f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d100: 0x3e00008  jr          $ra
    ctx->pc = 0x15D100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D100u;
            // 0x15d104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D108u;
    // 0x15d108: 0x0  nop
    ctx->pc = 0x15d108u;
    // NOP
    // 0x15d10c: 0x0  nop
    ctx->pc = 0x15d10cu;
    // NOP
    ctx->pc = 0x15d110u;
}
