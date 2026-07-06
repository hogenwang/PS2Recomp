#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197950
// Address: 0x197950 - 0x197bd0
void sub_00197950_0x197950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197950_0x197950");
#endif

    switch (ctx->pc) {
        case 0x1979c0u: goto label_1979c0;
        case 0x1979c8u: goto label_1979c8;
        case 0x1979fcu: goto label_1979fc;
        case 0x197a20u: goto label_197a20;
        case 0x197a8cu: goto label_197a8c;
        case 0x197a98u: goto label_197a98;
        case 0x197b68u: goto label_197b68;
        case 0x197b70u: goto label_197b70;
        default: break;
    }

    ctx->pc = 0x197950u;

    // 0x197950: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x197950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x197954: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x197954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x197958: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x197958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19795c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x197960: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x197960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x197964: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x197964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x197968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x197968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19796c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19796cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197970: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x197970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x197974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x197974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197978: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x197978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19797c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197980: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197988: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x197988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x19798c: 0x3065000c  andi        $a1, $v1, 0xC
    ctx->pc = 0x19798cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x197990: 0x948403a4  lhu         $a0, 0x3A4($a0)
    ctx->pc = 0x197990u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x197994: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x197994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x197998: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x197998u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x19799c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x19799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x1979a0: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1979a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1979a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1979A4u;
    {
        const bool branch_taken_0x1979a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1979A4u;
            // 0x1979a8: 0x5f082  srl         $fp, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979a4) {
            ctx->pc = 0x1979B8u;
            goto label_1979b8;
        }
    }
    ctx->pc = 0x1979ACu;
    // 0x1979ac: 0x36430003  ori         $v1, $s2, 0x3
    ctx->pc = 0x1979acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)3);
    // 0x1979b0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1979B0u;
    {
        const bool branch_taken_0x1979b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1979B0u;
            // 0x1979b4: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979b0) {
            ctx->pc = 0x197A58u;
            goto label_197a58;
        }
    }
    ctx->pc = 0x1979B8u;
label_1979b8:
    // 0x1979b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1979b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979bc: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x1979bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1979c0:
    // 0x1979c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1979c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1979c4: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x1979c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1979c8:
    // 0x1979c8: 0x86300382  lh          $s0, 0x382($s1)
    ctx->pc = 0x1979c8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 898)));
    // 0x1979cc: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1979CCu;
    {
        const bool branch_taken_0x1979cc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1979cc) {
            ctx->pc = 0x1979E0u;
            goto label_1979e0;
        }
    }
    ctx->pc = 0x1979D4u;
    // 0x1979d4: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x1979d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x1979d8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1979d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1979dc: 0x0  nop
    ctx->pc = 0x1979dcu;
    // NOP
label_1979e0:
    // 0x1979e0: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1979E0u;
    {
        const bool branch_taken_0x1979e0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1979e0) {
            ctx->pc = 0x1979F0u;
            goto label_1979f0;
        }
    }
    ctx->pc = 0x1979E8u;
    // 0x1979e8: 0x36420001  ori         $v0, $s2, 0x1
    ctx->pc = 0x1979e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x1979ec: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1979ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1979f0:
    // 0x1979f0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1979f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1979f4: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x1979F4u;
    SET_GPR_U32(ctx, 31, 0x1979FCu);
    ctx->pc = 0x1979F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1979F4u;
            // 0x1979f8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979FCu; }
        if (ctx->pc != 0x1979FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979FCu; }
        if (ctx->pc != 0x1979FCu) { return; }
    }
    ctx->pc = 0x1979FCu;
label_1979fc:
    // 0x1979fc: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1979fcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197a00: 0x0  nop
    ctx->pc = 0x197a00u;
    // NOP
    // 0x197a04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x197a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x197a08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x197a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197a0c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x197A0Cu;
    {
        const bool branch_taken_0x197a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x197a0c) {
            ctx->pc = 0x197A38u;
            goto label_197a38;
        }
    }
    ctx->pc = 0x197A14u;
    // 0x197a14: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x197a14u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197a18: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x197A18u;
    SET_GPR_U32(ctx, 31, 0x197A20u);
    ctx->pc = 0x197A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A18u;
            // 0x197a1c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A20u; }
        if (ctx->pc != 0x197A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A20u; }
        if (ctx->pc != 0x197A20u) { return; }
    }
    ctx->pc = 0x197A20u;
label_197a20:
    // 0x197a20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197a20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197a24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x197a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x197a28: 0x0  nop
    ctx->pc = 0x197a28u;
    // NOP
    // 0x197a2c: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x197a2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x197a30: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x197a30u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x197a34: 0x0  nop
    ctx->pc = 0x197a34u;
    // NOP
label_197a38:
    // 0x197a38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x197a38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x197a3c: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x197a3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197a40: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x197A40u;
    {
        const bool branch_taken_0x197a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A40u;
            // 0x197a44: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a40) {
            ctx->pc = 0x1979C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1979c8;
        }
    }
    ctx->pc = 0x197A48u;
    // 0x197a48: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x197a48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x197a4c: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x197a4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197a50: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x197A50u;
    {
        const bool branch_taken_0x197a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A50u;
            // 0x197a54: 0x26f70006  addiu       $s7, $s7, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a50) {
            ctx->pc = 0x1979C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1979c0;
        }
    }
    ctx->pc = 0x197A58u;
label_197a58:
    // 0x197a58: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x197a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x197a5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x197a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197a60: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x197A60u;
    {
        const bool branch_taken_0x197a60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x197a60) {
            ctx->pc = 0x197AECu;
            goto label_197aec;
        }
    }
    ctx->pc = 0x197A68u;
    // 0x197a68: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x197a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x197a6c: 0x1e2040  sll         $a0, $fp, 1
    ctx->pc = 0x197a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x197a70: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x197a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x197a74: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x197a74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x197a78: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x197a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x197a7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a80: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x197a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x197a84: 0x256bdb50  addiu       $t3, $t3, -0x24B0
    ctx->pc = 0x197a84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957904));
    // 0x197a88: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x197a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_197a8c:
    // 0x197a8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a90: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x197a90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a94: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x197a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_197a98:
    // 0x197a98: 0x8d230078  lw          $v1, 0x78($t1)
    ctx->pc = 0x197a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x197a9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x197A9Cu;
    {
        const bool branch_taken_0x197a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A9Cu;
            // 0x197aa0: 0x85450382  lh          $a1, 0x382($t2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 898)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a9c) {
            ctx->pc = 0x197AB8u;
            goto label_197ab8;
        }
    }
    ctx->pc = 0x197AA4u;
    // 0x197aa4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x197aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x197aa8: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x197aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x197aac: 0x84830382  lh          $v1, 0x382($a0)
    ctx->pc = 0x197aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 898)));
    // 0x197ab0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x197ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x197ab4: 0xa4830382  sh          $v1, 0x382($a0)
    ctx->pc = 0x197ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 898), (uint16_t)GPR_U32(ctx, 3));
label_197ab8:
    // 0x197ab8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x197ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x197abc: 0xa5400382  sh          $zero, 0x382($t2)
    ctx->pc = 0x197abcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 898), (uint16_t)GPR_U32(ctx, 0));
    // 0x197ac0: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x197ac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197ac4: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x197ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x197ac8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x197AC8u;
    {
        const bool branch_taken_0x197ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197AC8u;
            // 0x197acc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ac8) {
            ctx->pc = 0x197A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197a98;
        }
    }
    ctx->pc = 0x197AD0u;
    // 0x197ad0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x197ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x197ad4: 0x26b50006  addiu       $s5, $s5, 0x6
    ctx->pc = 0x197ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
    // 0x197ad8: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x197ad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197adc: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x197ADCu;
    {
        const bool branch_taken_0x197adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197ADCu;
            // 0x197ae0: 0x256b0248  addiu       $t3, $t3, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197adc) {
            ctx->pc = 0x197A8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197a8c;
        }
    }
    ctx->pc = 0x197AE4u;
    // 0x197ae4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x197AE4u;
    {
        const bool branch_taken_0x197ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ae4) {
            ctx->pc = 0x197BA0u;
            goto label_197ba0;
        }
    }
    ctx->pc = 0x197AECu;
label_197aec:
    // 0x197aec: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x197AECu;
    {
        const bool branch_taken_0x197aec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x197aec) {
            ctx->pc = 0x197BA0u;
            goto label_197ba0;
        }
    }
    ctx->pc = 0x197AF4u;
    // 0x197af4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x197af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x197af8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x197AF8u;
    {
        const bool branch_taken_0x197af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197af8) {
            ctx->pc = 0x197AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197AF8u;
            // 0x197afc: 0x13243c  dsll32      $a0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197B10u;
            goto label_197b10;
        }
    }
    ctx->pc = 0x197B00u;
    // 0x197b00: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x197b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197b04: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x197b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x197b08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197B08u;
    {
        const bool branch_taken_0x197b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B08u;
            // 0x197b0c: 0xa6a30000  sh          $v1, 0x0($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b08) {
            ctx->pc = 0x197B2Cu;
            goto label_197b2c;
        }
    }
    ctx->pc = 0x197B10u;
label_197b10:
    // 0x197b10: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x197b10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197b14: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x197b14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x197b18: 0x42023  negu        $a0, $a0
    ctx->pc = 0x197b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x197b1c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x197b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x197b20: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x197b20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x197b24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197b28: 0xa6a30000  sh          $v1, 0x0($s5)
    ctx->pc = 0x197b28u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
label_197b2c:
    // 0x197b2c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x197b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197b30: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x197b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197b34: 0x8463db1c  lh          $v1, -0x24E4($v1)
    ctx->pc = 0x197b34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957852)));
    // 0x197b38: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x197b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x197b3c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x197B3Cu;
    {
        const bool branch_taken_0x197b3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197b3c) {
            ctx->pc = 0x197B48u;
            goto label_197b48;
        }
    }
    ctx->pc = 0x197B44u;
    // 0x197b44: 0xa6a30000  sh          $v1, 0x0($s5)
    ctx->pc = 0x197b44u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
label_197b48:
    // 0x197b48: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x197b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197b4c: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x197b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197b50: 0x8463db1e  lh          $v1, -0x24E2($v1)
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957854)));
    // 0x197b54: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x197b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x197b58: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x197B58u;
    {
        const bool branch_taken_0x197b58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197b58) {
            ctx->pc = 0x197B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197B58u;
            // 0x197b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197B68u;
            goto label_197b68;
        }
    }
    ctx->pc = 0x197B60u;
    // 0x197b60: 0xa6a30000  sh          $v1, 0x0($s5)
    ctx->pc = 0x197b60u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x197b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197b68:
    // 0x197b68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x197b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_197b70:
    // 0x197b70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x197b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x197b74: 0xa4c00382  sh          $zero, 0x382($a2)
    ctx->pc = 0x197b74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 898), (uint16_t)GPR_U32(ctx, 0));
    // 0x197b78: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x197b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x197b7c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x197b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x197b80: 0x0  nop
    ctx->pc = 0x197b80u;
    // NOP
    // 0x197b84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x197B84u;
    {
        const bool branch_taken_0x197b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x197b84) {
            ctx->pc = 0x197B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197b70;
        }
    }
    ctx->pc = 0x197B8Cu;
    // 0x197b8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x197b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x197b90: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x197b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x197b94: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x197B94u;
    {
        const bool branch_taken_0x197b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B94u;
            // 0x197b98: 0x26b50006  addiu       $s5, $s5, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b94) {
            ctx->pc = 0x197B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197b68;
        }
    }
    ctx->pc = 0x197B9Cu;
    // 0x197b9c: 0x0  nop
    ctx->pc = 0x197b9cu;
    // NOP
label_197ba0:
    // 0x197ba0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x197ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x197ba4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x197ba4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x197ba8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x197ba8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x197bac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x197bacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197bb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x197bb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197bb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x197bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197bb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x197BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BC8u;
            // 0x197bcc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197BD0u;
    ctx->pc = 0x197bd0u;
}
