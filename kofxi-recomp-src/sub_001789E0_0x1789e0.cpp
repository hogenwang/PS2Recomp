#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001789E0
// Address: 0x1789e0 - 0x178cf0
void sub_001789E0_0x1789e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001789E0_0x1789e0");
#endif

    switch (ctx->pc) {
        case 0x178ac8u: goto label_178ac8;
        case 0x178ba0u: goto label_178ba0;
        case 0x178bc0u: goto label_178bc0;
        case 0x178bc8u: goto label_178bc8;
        case 0x178cacu: goto label_178cac;
        default: break;
    }

    ctx->pc = 0x1789e0u;

    // 0x1789e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1789e4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1789e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1789e8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1789e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1789ec: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1789ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1789f0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1789f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1789f4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1789f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1789f8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1789f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1789fc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1789fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x178a00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x178a00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a04: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x178a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x178a08: 0x3474ffff  ori         $s4, $v1, 0xFFFF
    ctx->pc = 0x178a08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x178a0c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x178a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x178a10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178a14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x178a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x178a18: 0x2463ac60  addiu       $v1, $v1, -0x53A0
    ctx->pc = 0x178a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945888));
    // 0x178a1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x178a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x178a20: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x178a20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x178a24: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x178a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x178a28: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x178a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x178a2c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x178a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x178a30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178a34: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x178a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178a38: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x178a38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178a3c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x178a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x178a40: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x178a40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x178a44: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x178a44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178a48: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x178a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x178a4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178A4Cu;
    {
        const bool branch_taken_0x178a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178a4c) {
            ctx->pc = 0x178A5Cu;
            goto label_178a5c;
        }
    }
    ctx->pc = 0x178A54u;
    // 0x178a54: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x178A54u;
    {
        const bool branch_taken_0x178a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178A54u;
            // 0x178a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a54) {
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178A5Cu;
label_178a5c:
    // 0x178a5c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178a60: 0x92a40019  lbu         $a0, 0x19($s5)
    ctx->pc = 0x178a60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
    // 0x178a64: 0x9063b570  lbu         $v1, -0x4A90($v1)
    ctx->pc = 0x178a64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948208)));
    // 0x178a68: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x178a68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x178a6c: 0x50200014  beql        $at, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x178A6Cu;
    {
        const bool branch_taken_0x178a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a6c) {
            ctx->pc = 0x178A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178A6Cu;
            // 0x178a70: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x178AC0u;
            goto label_178ac0;
        }
    }
    ctx->pc = 0x178A74u;
    // 0x178a74: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x178a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x178a78: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x178a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x178a7c: 0x2463b580  addiu       $v1, $v1, -0x4A80
    ctx->pc = 0x178a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948224));
    // 0x178a80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x178a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x178a84: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x178a84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178a88: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x178A88u;
    {
        const bool branch_taken_0x178a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a88) {
            ctx->pc = 0x178ABCu;
            goto label_178abc;
        }
    }
    ctx->pc = 0x178A90u;
    // 0x178a90: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x178a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x178a94: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x178a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x178a98: 0x2484b581  addiu       $a0, $a0, -0x4A7F
    ctx->pc = 0x178a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948225));
    // 0x178a9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x178a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x178aa0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x178aa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178aa4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x178aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178aa8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x178aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178aac: 0x52400  sll         $a0, $a1, 16
    ctx->pc = 0x178aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x178ab0: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x178ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x178ab4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x178ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x178ab8: 0xa3a025  or          $s4, $a1, $v1
    ctx->pc = 0x178ab8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_178abc:
    // 0x178abc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x178abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_178ac0:
    // 0x178ac0: 0xc05dfc4  jal         func_177F10
    ctx->pc = 0x178AC0u;
    SET_GPR_U32(ctx, 31, 0x178AC8u);
    ctx->pc = 0x177F10u;
    if (runtime->hasFunction(0x177F10u)) {
        auto targetFn = runtime->lookupFunction(0x177F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AC8u; }
        if (ctx->pc != 0x178AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177F10_0x177f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178AC8u; }
        if (ctx->pc != 0x178AC8u) { return; }
    }
    ctx->pc = 0x178AC8u;
label_178ac8:
    // 0x178ac8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x178ac8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178acc: 0x56e00003  bnel        $s7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x178ACCu;
    {
        const bool branch_taken_0x178acc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x178acc) {
            ctx->pc = 0x178AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178ACCu;
            // 0x178ad0: 0xc6b40024  lwc1        $f20, 0x24($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x178ADCu;
            goto label_178adc;
        }
    }
    ctx->pc = 0x178AD4u;
    // 0x178ad4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x178AD4u;
    {
        const bool branch_taken_0x178ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178AD4u;
            // 0x178ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ad4) {
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178ADCu;
label_178adc:
    // 0x178adc: 0x96b00046  lhu         $s0, 0x46($s5)
    ctx->pc = 0x178adcu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 70)));
    // 0x178ae0: 0x86a30040  lh          $v1, 0x40($s5)
    ctx->pc = 0x178ae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x178ae4: 0xc6b50028  lwc1        $f21, 0x28($s5)
    ctx->pc = 0x178ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x178ae8: 0x96b60048  lhu         $s6, 0x48($s5)
    ctx->pc = 0x178ae8u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x178aec: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178af0: 0x86a20042  lh          $v0, 0x42($s5)
    ctx->pc = 0x178af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 66)));
    // 0x178af4: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x178af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x178af8: 0x70561018  mult1       $v0, $v0, $s6
    ctx->pc = 0x178af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x178afc: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x178afcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x178b00: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x178b00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x178b04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x178b04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x178b08: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178b08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178b0c: 0x449823  subu        $s3, $v0, $a0
    ctx->pc = 0x178b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x178b10: 0x2a610281  slti        $at, $s3, 0x281
    ctx->pc = 0x178b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)641) ? 1 : 0);
    // 0x178b14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x178b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x178b18: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x178B18u;
    {
        const bool branch_taken_0x178b18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B18u;
            // 0x178b1c: 0x439023  subu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b18) {
            ctx->pc = 0x178B30u;
            goto label_178b30;
        }
    }
    ctx->pc = 0x178B20u;
    // 0x178b20: 0x86be003e  lh          $fp, 0x3E($s5)
    ctx->pc = 0x178b20u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 62)));
    // 0x178b24: 0x27e1021  addu        $v0, $s3, $fp
    ctx->pc = 0x178b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x178b28: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178B28u;
    {
        const bool branch_taken_0x178b28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x178b28) {
            ctx->pc = 0x178B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178B28u;
            // 0x178b2c: 0x2a4101e1  slti        $at, $s2, 0x1E1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)481) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x178B38u;
            goto label_178b38;
        }
    }
    ctx->pc = 0x178B30u;
label_178b30:
    // 0x178b30: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x178B30u;
    {
        const bool branch_taken_0x178b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B30u;
            // 0x178b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b30) {
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178B38u;
label_178b38:
    // 0x178b38: 0x5020005d  beql        $at, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x178B38u;
    {
        const bool branch_taken_0x178b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b38) {
            ctx->pc = 0x178B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178B38u;
            // 0x178b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178B40u;
    // 0x178b40: 0x86a2003c  lh          $v0, 0x3C($s5)
    ctx->pc = 0x178b40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x178b44: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x178b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x178b48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x178b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x178b4c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x178B4Cu;
    {
        const bool branch_taken_0x178b4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x178b4c) {
            ctx->pc = 0x178B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178B4Cu;
            // 0x178b50: 0x92a200ac  lbu         $v0, 0xAC($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178B60u;
            goto label_178b60;
        }
    }
    ctx->pc = 0x178B54u;
    // 0x178b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178b58: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x178B58u;
    {
        const bool branch_taken_0x178b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b58) {
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178B60u;
label_178b60:
    // 0x178b60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178B60u;
    {
        const bool branch_taken_0x178b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178b60) {
            ctx->pc = 0x178B70u;
            goto label_178b70;
        }
    }
    ctx->pc = 0x178B68u;
    // 0x178b68: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x178B68u;
    {
        const bool branch_taken_0x178b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178B68u;
            // 0x178b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b68) {
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178B70u;
label_178b70:
    // 0x178b70: 0x5200004f  beql        $s0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x178B70u;
    {
        const bool branch_taken_0x178b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b70) {
            ctx->pc = 0x178B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178B70u;
            // 0x178b74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178B78u;
    // 0x178b78: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x178B78u;
    {
        const bool branch_taken_0x178b78 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x178b78) {
            ctx->pc = 0x178B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178B78u;
            // 0x178b7c: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178B8Cu;
            goto label_178b8c;
        }
    }
    ctx->pc = 0x178B80u;
    // 0x178b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178b84: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x178B84u;
    {
        const bool branch_taken_0x178b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b84) {
            ctx->pc = 0x178CB0u;
            goto label_178cb0;
        }
    }
    ctx->pc = 0x178B8Cu;
label_178b8c:
    // 0x178b8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x178b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b90: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x178b90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x178b94: 0x92a20019  lbu         $v0, 0x19($s5)
    ctx->pc = 0x178b94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 25)));
    // 0x178b98: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x178B98u;
    SET_GPR_U32(ctx, 31, 0x178BA0u);
    ctx->pc = 0x178B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178B98u;
            // 0x178b9c: 0x244400c8  addiu       $a0, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BA0u; }
        if (ctx->pc != 0x178BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BA0u; }
        if (ctx->pc != 0x178BA0u) { return; }
    }
    ctx->pc = 0x178BA0u;
label_178ba0:
    // 0x178ba0: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x178ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
    // 0x178ba4: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x178ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x178ba8: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x178ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31457);
    // 0x178bac: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x178bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x178bb0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x178bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x178bb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bb8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x178BB8u;
    SET_GPR_U32(ctx, 31, 0x178BC0u);
    ctx->pc = 0x178BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178BB8u;
            // 0x178bbc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BC0u; }
        if (ctx->pc != 0x178BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BC0u; }
        if (ctx->pc != 0x178BC0u) { return; }
    }
    ctx->pc = 0x178BC0u;
label_178bc0:
    // 0x178bc0: 0xc048c12  jal         func_123048
    ctx->pc = 0x178BC0u;
    SET_GPR_U32(ctx, 31, 0x178BC8u);
    ctx->pc = 0x178BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178BC0u;
            // 0x178bc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (runtime->hasFunction(0x123048u)) {
        auto targetFn = runtime->lookupFunction(0x123048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BC8u; }
        if (ctx->pc != 0x178BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123048_0x123048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BC8u; }
        if (ctx->pc != 0x178BC8u) { return; }
    }
    ctx->pc = 0x178BC8u;
label_178bc8:
    // 0x178bc8: 0x92a20044  lbu         $v0, 0x44($s5)
    ctx->pc = 0x178bc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x178bcc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x178BCCu;
    {
        const bool branch_taken_0x178bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178bcc) {
            ctx->pc = 0x178BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178BCCu;
            // 0x178bd0: 0x92a20045  lbu         $v0, 0x45($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 69)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178BDCu;
            goto label_178bdc;
        }
    }
    ctx->pc = 0x178BD4u;
    // 0x178bd4: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x178bd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x178bd8: 0x92a20045  lbu         $v0, 0x45($s5)
    ctx->pc = 0x178bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 69)));
label_178bdc:
    // 0x178bdc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x178BDCu;
    {
        const bool branch_taken_0x178bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178bdc) {
            ctx->pc = 0x178BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178BDCu;
            // 0x178be0: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178BECu;
            goto label_178bec;
        }
    }
    ctx->pc = 0x178BE4u;
    // 0x178be4: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x178be4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x178be8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x178be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_178bec:
    // 0x178bec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x178becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178bf0: 0x0  nop
    ctx->pc = 0x178bf0u;
    // NOP
    // 0x178bf4: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x178bf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178bf8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x178BF8u;
    {
        const bool branch_taken_0x178bf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x178bf8) {
            ctx->pc = 0x178BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178BF8u;
            // 0x178bfc: 0x4601a041  sub.s       $f1, $f20, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x178C10u;
            goto label_178c10;
        }
    }
    ctx->pc = 0x178C00u;
    // 0x178c00: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178c04: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x178c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x178c08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x178C08u;
    {
        const bool branch_taken_0x178c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C08u;
            // 0x178c0c: 0x3c034f00  lui         $v1, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c08) {
            ctx->pc = 0x178C28u;
            goto label_178c28;
        }
    }
    ctx->pc = 0x178C10u;
label_178c10:
    // 0x178c10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x178c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x178c14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178c14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178c18: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x178c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x178c1c: 0x0  nop
    ctx->pc = 0x178c1cu;
    // NOP
    // 0x178c20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x178c24: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_178c28:
    // 0x178c28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x178c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178c2c: 0x0  nop
    ctx->pc = 0x178c2cu;
    // NOP
    // 0x178c30: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x178c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178c34: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x178C34u;
    {
        const bool branch_taken_0x178c34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x178c34) {
            ctx->pc = 0x178C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178C34u;
            // 0x178c38: 0x4601a841  sub.s       $f1, $f21, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x178C4Cu;
            goto label_178c4c;
        }
    }
    ctx->pc = 0x178C3Cu;
    // 0x178c3c: 0x4600a864  .word       0x4600A864                   # cvt.w.s     $f1, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178c3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178c40: 0x440c0800  mfc1        $t4, $f1
    ctx->pc = 0x178c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x178c44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x178C44u;
    {
        const bool branch_taken_0x178c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178C44u;
            // 0x178c48: 0x32c3ffff  andi        $v1, $s6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c44) {
            ctx->pc = 0x178C64u;
            goto label_178c64;
        }
    }
    ctx->pc = 0x178C4Cu;
label_178c4c:
    // 0x178c4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x178c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x178c50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178c50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178c54: 0x440c0800  mfc1        $t4, $f1
    ctx->pc = 0x178c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x178c58: 0x0  nop
    ctx->pc = 0x178c58u;
    // NOP
    // 0x178c5c: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x178c5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x178c60: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x178c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
label_178c64:
    // 0x178c64: 0x1e4c3c  dsll32      $t1, $fp, 16
    ctx->pc = 0x178c64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 30) << (32 + 16));
    // 0x178c68: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x178c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x178c6c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x178c6cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x178c70: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x178c70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x178c74: 0x320bffff  andi        $t3, $s0, 0xFFFF
    ctx->pc = 0x178c74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x178c78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x178c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x178c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x178c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c84: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x178c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c88: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x178c88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x178c8c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x178c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c90: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x178c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x178c94: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x178c94u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x178c98: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x178c98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x178c9c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x178c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x178ca0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x178ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x178ca4: 0xc0c4a8c  jal         func_312A30
    ctx->pc = 0x178CA4u;
    SET_GPR_U32(ctx, 31, 0x178CACu);
    ctx->pc = 0x178CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178CA4u;
            // 0x178ca8: 0xffac0018  sd          $t4, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312A30u;
    if (runtime->hasFunction(0x312A30u)) {
        auto targetFn = runtime->lookupFunction(0x312A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178CACu; }
        if (ctx->pc != 0x178CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312A30_0x312a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178CACu; }
        if (ctx->pc != 0x178CACu) { return; }
    }
    ctx->pc = 0x178CACu;
label_178cac:
    // 0x178cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178cb0:
    // 0x178cb0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x178cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x178cb4: 0xc7b50024  lwc1        $f21, 0x24($sp)
    ctx->pc = 0x178cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x178cb8: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x178cb8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x178cbc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x178cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178cc0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x178cc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x178cc4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x178cc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x178cc8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x178cc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178ccc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x178cccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178cd0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x178cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178cd4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x178cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178cd8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x178cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178cdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x178cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x178CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178CE0u;
            // 0x178ce4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178CE8u;
    // 0x178ce8: 0x0  nop
    ctx->pc = 0x178ce8u;
    // NOP
    // 0x178cec: 0x0  nop
    ctx->pc = 0x178cecu;
    // NOP
    ctx->pc = 0x178cf0u;
}
