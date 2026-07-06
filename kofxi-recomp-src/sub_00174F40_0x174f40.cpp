#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174F40
// Address: 0x174f40 - 0x175160
void sub_00174F40_0x174f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174F40_0x174f40");
#endif

    switch (ctx->pc) {
        case 0x174f8cu: goto label_174f8c;
        case 0x17501cu: goto label_17501c;
        case 0x1750c8u: goto label_1750c8;
        case 0x1750ecu: goto label_1750ec;
        case 0x175118u: goto label_175118;
        default: break;
    }

    ctx->pc = 0x174f40u;

    // 0x174f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x174f44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174f48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x174f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x174f4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x174f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x174f50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x174f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x174f54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x174f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x174f58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x174f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x174f5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x174f60: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x174f60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x174f64: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x174f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x174f68: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x174f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x174f6c: 0x18600072  blez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x174F6Cu;
    {
        const bool branch_taken_0x174f6c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x174F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F6Cu;
            // 0x174f70: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f6c) {
            ctx->pc = 0x175138u;
            goto label_175138;
        }
    }
    ctx->pc = 0x174F74u;
    // 0x174f74: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x174f74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x174f78: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x174f78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x174f7c: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x174f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x174f80: 0x26733730  addiu       $s3, $s3, 0x3730
    ctx->pc = 0x174f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14128));
    // 0x174f84: 0x2652dab8  addiu       $s2, $s2, -0x2548
    ctx->pc = 0x174f84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957752));
    // 0x174f88: 0x26313740  addiu       $s1, $s1, 0x3740
    ctx->pc = 0x174f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14144));
label_174f8c:
    // 0x174f8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174f90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174f94: 0x9063dad8  lbu         $v1, -0x2528($v1)
    ctx->pc = 0x174f94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957784)));
    // 0x174f98: 0x2878004  sllv        $s0, $a3, $s4
    ctx->pc = 0x174f98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 20) & 0x1F));
    // 0x174f9c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x174f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x174fa0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x174FA0u;
    {
        const bool branch_taken_0x174fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174fa0) {
            ctx->pc = 0x175028u;
            goto label_175028;
        }
    }
    ctx->pc = 0x174FA8u;
    // 0x174fa8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174fac: 0x9063db10  lbu         $v1, -0x24F0($v1)
    ctx->pc = 0x174facu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x174fb0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x174fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x174fb4: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x174FB4u;
    {
        const bool branch_taken_0x174fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174fb4) {
            ctx->pc = 0x175118u;
            goto label_175118;
        }
    }
    ctx->pc = 0x174FBCu;
    // 0x174fbc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x174fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x174fc0: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x174fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x174fc4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x174fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x174fc8: 0x5060005c  beql        $v1, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x174FC8u;
    {
        const bool branch_taken_0x174fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174fc8) {
            ctx->pc = 0x174FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174FC8u;
            // 0x174fcc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17513Cu;
            goto label_17513c;
        }
    }
    ctx->pc = 0x174FD0u;
    // 0x174fd0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x174fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174fd4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x174fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x174fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174fdc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x174fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x174fe0: 0xc6750000  lwc1        $f21, 0x0($s3)
    ctx->pc = 0x174fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x174fe4: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x174fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x174fe8: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x174fe8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174fec: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x174fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x174ff0: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x174ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
    // 0x174ff4: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x174ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x174ff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ffc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x174ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x175000: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175004: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x175004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x175008: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17500c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17500cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x175010: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x175010u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x175014: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x175014u;
    SET_GPR_U32(ctx, 31, 0x17501Cu);
    ctx->pc = 0x175018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175014u;
            // 0x175018: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17501Cu; }
        if (ctx->pc != 0x17501Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17501Cu; }
        if (ctx->pc != 0x17501Cu) { return; }
    }
    ctx->pc = 0x17501Cu;
label_17501c:
    // 0x17501c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x17501Cu;
    {
        const bool branch_taken_0x17501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17501c) {
            ctx->pc = 0x175118u;
            goto label_175118;
        }
    }
    ctx->pc = 0x175024u;
    // 0x175024: 0x0  nop
    ctx->pc = 0x175024u;
    // NOP
label_175028:
    // 0x175028: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x175028u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17502c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17502cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175030: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x175030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x175034: 0x24843750  addiu       $a0, $a0, 0x3750
    ctx->pc = 0x175034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14160));
    // 0x175038: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x175038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17503c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x175040: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x175040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175044: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x175044u;
    {
        const bool branch_taken_0x175044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x175044) {
            ctx->pc = 0x175118u;
            goto label_175118;
        }
    }
    ctx->pc = 0x17504Cu;
    // 0x17504c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17504cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175050: 0x9063daf0  lbu         $v1, -0x2510($v1)
    ctx->pc = 0x175050u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957808)));
    // 0x175054: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x175054u;
    {
        const bool branch_taken_0x175054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175054) {
            ctx->pc = 0x1750C8u;
            goto label_1750c8;
        }
    }
    ctx->pc = 0x17505Cu;
    // 0x17505c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17505cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x175060: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x175060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x175064: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x175064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x175068: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x175068u;
    {
        const bool branch_taken_0x175068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175068) {
            ctx->pc = 0x1750C8u;
            goto label_1750c8;
        }
    }
    ctx->pc = 0x175070u;
    // 0x175070: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x175070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x175074: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x175074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x175078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x175078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17507c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17507cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175080: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x175080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x175084: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x175084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x175088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17508c: 0x3c0a41e0  lui         $t2, 0x41E0
    ctx->pc = 0x17508cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16864 << 16));
    // 0x175090: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x175090u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x175094: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x175094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x175098: 0x24846148  addiu       $a0, $a0, 0x6148
    ctx->pc = 0x175098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24904));
    // 0x17509c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17509cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1750a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1750a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750a4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1750a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1750a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1750a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750ac: 0xc6350000  lwc1        $f21, 0x0($s1)
    ctx->pc = 0x1750acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1750b0: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1750b0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1750b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1750b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1750b8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1750b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1750bc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1750bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1750c0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1750C0u;
    SET_GPR_U32(ctx, 31, 0x1750C8u);
    ctx->pc = 0x1750C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1750C0u;
            // 0x1750c4: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750C8u; }
        if (ctx->pc != 0x1750C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750C8u; }
        if (ctx->pc != 0x1750C8u) { return; }
    }
    ctx->pc = 0x1750C8u;
label_1750c8:
    // 0x1750c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1750c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1750cc: 0x9064daf0  lbu         $a0, -0x2510($v1)
    ctx->pc = 0x1750ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957808)));
    // 0x1750d0: 0x901824  and         $v1, $a0, $s0
    ctx->pc = 0x1750d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x1750d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1750D4u;
    {
        const bool branch_taken_0x1750d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1750d4) {
            ctx->pc = 0x1750F8u;
            goto label_1750f8;
        }
    }
    ctx->pc = 0x1750DCu;
    // 0x1750dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1750dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1750e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1750e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1750e4: 0xc05d458  jal         func_175160
    ctx->pc = 0x1750E4u;
    SET_GPR_U32(ctx, 31, 0x1750ECu);
    ctx->pc = 0x1750E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1750E4u;
            // 0x1750e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x175160u;
    if (runtime->hasFunction(0x175160u)) {
        auto targetFn = runtime->lookupFunction(0x175160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750ECu; }
        if (ctx->pc != 0x1750ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175160_0x175160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750ECu; }
        if (ctx->pc != 0x1750ECu) { return; }
    }
    ctx->pc = 0x1750ECu;
label_1750ec:
    // 0x1750ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1750ECu;
    {
        const bool branch_taken_0x1750ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1750ec) {
            ctx->pc = 0x175118u;
            goto label_175118;
        }
    }
    ctx->pc = 0x1750F4u;
    // 0x1750f4: 0x0  nop
    ctx->pc = 0x1750f4u;
    // NOP
label_1750f8:
    // 0x1750f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1750f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1750fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1750fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x175100: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x175100u;
    {
        const bool branch_taken_0x175100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175100) {
            ctx->pc = 0x175118u;
            goto label_175118;
        }
    }
    ctx->pc = 0x175108u;
    // 0x175108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x175108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17510c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x17510cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x175110: 0xc05d538  jal         func_1754E0
    ctx->pc = 0x175110u;
    SET_GPR_U32(ctx, 31, 0x175118u);
    ctx->pc = 0x175114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175110u;
            // 0x175114: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1754E0u;
    if (runtime->hasFunction(0x1754E0u)) {
        auto targetFn = runtime->lookupFunction(0x1754E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175118u; }
        if (ctx->pc != 0x175118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001754E0_0x1754e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175118u; }
        if (ctx->pc != 0x175118u) { return; }
    }
    ctx->pc = 0x175118u;
label_175118:
    // 0x175118: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x175118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17511c: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x17511cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x175120: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x175120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x175124: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x175124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x175128: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17512c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x17512cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175130: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
    ctx->pc = 0x175130u;
    {
        const bool branch_taken_0x175130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175130u;
            // 0x175134: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175130) {
            ctx->pc = 0x174F8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174f8c;
        }
    }
    ctx->pc = 0x175138u;
label_175138:
    // 0x175138: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x175138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17513c:
    // 0x17513c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x175140: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x175140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x175144: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x175144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x175148: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x175148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17514c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17514cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175150: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x175150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175154: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175158: 0x3e00008  jr          $ra
    ctx->pc = 0x175158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175158u;
            // 0x17515c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175160u;
    ctx->pc = 0x175160u;
}
