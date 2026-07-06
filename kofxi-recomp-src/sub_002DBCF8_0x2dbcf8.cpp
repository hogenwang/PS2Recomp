#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DBCF8
// Address: 0x2dbcf8 - 0x2dbf10
void sub_002DBCF8_0x2dbcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBCF8_0x2dbcf8");
#endif

    switch (ctx->pc) {
        case 0x2dbd50u: goto label_2dbd50;
        case 0x2dbd90u: goto label_2dbd90;
        case 0x2dbdc8u: goto label_2dbdc8;
        case 0x2dbe0cu: goto label_2dbe0c;
        case 0x2dbe48u: goto label_2dbe48;
        case 0x2dbeacu: goto label_2dbeac;
        case 0x2dbee4u: goto label_2dbee4;
        default: break;
    }

    ctx->pc = 0x2dbcf8u;

    // 0x2dbcf8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dbcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dbcfc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2dbcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2dbd00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dbd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbd04: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2dbd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2dbd08: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2dbd08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dbd0c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2dbd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2dbd10: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2dbd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2dbd14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2dbd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2dbd18: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x2dbd18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2dbd1c: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x2dbd1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2dbd20: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x2dbd20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2dbd24: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dbd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dbd28: 0x2463bd70  addiu       $v1, $v1, -0x4290
    ctx->pc = 0x2dbd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950256));
    // 0x2dbd2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbd30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBD30u;
    {
        const bool branch_taken_0x2dbd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd30) {
            ctx->pc = 0x2DBD50u;
            goto label_2dbd50;
        }
    }
    ctx->pc = 0x2DBD38u;
    // 0x2dbd38: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dbd3c: 0x2484bd84  addiu       $a0, $a0, -0x427C
    ctx->pc = 0x2dbd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950276));
    // 0x2dbd40: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dbd40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dbd44: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dbd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dbd48: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DBD48u;
    SET_GPR_U32(ctx, 31, 0x2DBD50u);
    ctx->pc = 0x2DBD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD48u;
            // 0x2dbd4c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD50u; }
        if (ctx->pc != 0x2DBD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD50u; }
        if (ctx->pc != 0x2DBD50u) { return; }
    }
    ctx->pc = 0x2DBD50u;
label_2dbd50:
    // 0x2dbd50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DBD50u;
    {
        const bool branch_taken_0x2dbd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbd50) {
            ctx->pc = 0x2DBD84u;
            goto label_2dbd84;
        }
    }
    ctx->pc = 0x2DBD58u;
    // 0x2dbd58: 0x25974910  addiu       $s7, $t4, 0x4910
    ctx->pc = 0x2dbd58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 12), 18704));
    // 0x2dbd5c: 0xa3adbb51  sb          $t5, -0x44AF($sp)
    ctx->pc = 0x2dbd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294949713), (uint8_t)GPR_U32(ctx, 13));
    // 0x2dbd60: 0xdd02324f  ld          $v0, 0x324F($t0)
    ctx->pc = 0x2dbd60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 12879)));
    // 0x2dbd64: 0xdf84044f  ld          $a0, 0x44F($gp)
    ctx->pc = 0x2dbd64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 1103)));
    // 0x2dbd68: 0xddd749ff  ld          $s7, 0x49FF($t6)
    ctx->pc = 0x2dbd68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 14), 18943)));
    // 0x2dbd6c: 0x8c6a3c5d  lw          $t2, 0x3C5D($v1)
    ctx->pc = 0x2dbd6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15453)));
    // 0x2dbd70: 0x0  nop
    ctx->pc = 0x2dbd70u;
    // NOP
    // 0x2dbd74: 0x8681f7ce  lh          $at, -0x832($s4)
    ctx->pc = 0x2dbd74u;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294965198)));
    // 0x2dbd78: 0xc712f10e  lwc1        $f18, -0xEF2($t8)
    ctx->pc = 0x2dbd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963470)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dbd7c: 0x8681f6de  lh          $at, -0x922($s4)
    ctx->pc = 0x2dbd7cu;
    SET_GPR_S32(ctx, 1, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294964958)));
    // 0x2dbd80: 0x0  nop
    ctx->pc = 0x2dbd80u;
    // NOP
label_2dbd84:
    // 0x2dbd84: 0xc2476749  ll          $a3, 0x6749($s2)
    ctx->pc = 0x2dbd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 26441); SET_GPR_S32(ctx, 7, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbd88: 0xc0b7536  jal         func_2DD4D8
    ctx->pc = 0x2DBD88u;
    SET_GPR_U32(ctx, 31, 0x2DBD90u);
    ctx->pc = 0x2DBD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBD88u;
            // 0x2dbd8c: 0x4225f39d  .word       0x4225F39D                   # INVALID     $s1, $a1, -0xC63 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x11
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD4D8u;
    if (runtime->hasFunction(0x2DD4D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DD4D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD90u; }
        if (ctx->pc != 0x2DBD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DD4D8_0x2dd4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBD90u; }
        if (ctx->pc != 0x2DBD90u) { return; }
    }
    ctx->pc = 0x2DBD90u;
label_2dbd90:
    // 0x2dbd90: 0xce856b8d  pref        0x05, 0x6B8D($s4)
    ctx->pc = 0x2dbd90u;
    // PREF instruction (ignored)
    // 0x2dbd94: 0xcee4ab95  pref        0x04, -0x546B($s7)
    ctx->pc = 0x2dbd94u;
    // PREF instruction (ignored)
    // 0x2dbd98: 0xc6076749  lwc1        $f7, 0x6749($s0)
    ctx->pc = 0x2dbd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26441)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2dbd9c: 0x6225fb9d  daddi       $a1, $s1, -0x463
    ctx->pc = 0x2dbd9cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)4294966173; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x2dbda0: 0x9605f38d  lhu         $a1, -0xC73($s0)
    ctx->pc = 0x2dbda0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294964109)));
    // 0x2dbda4: 0x5605f30d  bnel        $s0, $a1, . + 4 + (-0xCF3 << 2)
    ctx->pc = 0x2DBDA4u;
    {
        const bool branch_taken_0x2dbda4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x2dbda4) {
            ctx->pc = 0x2DBDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDA4u;
            // 0x2dbda8: 0xce84bb8b  pref        0x04, -0x4475($s4) (Delay Slot)
        // PREF instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D89DCu;
            return;
        }
    }
    ctx->pc = 0x2DBDACu;
    // 0x2dbdac: 0xd6876b0d  ldc1        $f7, 0x6B0D($s4)
    ctx->pc = 0x2dbdacu;
    // Unhandled opcode: 0x35
    // 0x2dbdb0: 0xcaa74b09  lwc2        $7, 0x4B09($s5)
    ctx->pc = 0x2dbdb0u;
    // Unhandled opcode: 0x32
    // 0x2dbdb4: 0x2178a881  addi        $t8, $t3, -0x577F
    ctx->pc = 0x2dbdb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)4294944897, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x2dbdb8: 0xce877b8b  pref        0x07, 0x7B8B($s4)
    ctx->pc = 0x2dbdb8u;
    // PREF instruction (ignored)
    // 0x2dbdbc: 0xd2c76709  lld         $a3, 0x6709($s6)
    ctx->pc = 0x2dbdbcu;
    // Unhandled opcode: 0x34
    // 0x2dbdc0: 0xc0b6e92  jal         func_2DBA48
    ctx->pc = 0x2DBDC0u;
    SET_GPR_U32(ctx, 31, 0x2DBDC8u);
    ctx->pc = 0x2DBDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBDC0u;
            // 0x2dbdc4: 0x2d7968d5  sltiu       $t9, $t3, 0x68D5 (Delay Slot)
        SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)26837) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA48u;
    if (runtime->hasFunction(0x2DBA48u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDC8u; }
        if (ctx->pc != 0x2DBDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA48_0x2dba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBDC8u; }
        if (ctx->pc != 0x2DBDC8u) { return; }
    }
    ctx->pc = 0x2DBDC8u;
label_2dbdc8:
    // 0x2dbdc8: 0xc2c4eb81  ll          $a0, -0x147F($s6)
    ctx->pc = 0x2dbdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4294962049); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbdcc: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x2dbdccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x2dbdd0: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x2dbdd0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x2dbdd4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dbdd8: 0xce856b81  pref        0x05, 0x6B81($s4)
    ctx->pc = 0x2dbdd8u;
    // PREF instruction (ignored)
    // 0x2dbddc: 0x2442e040  addiu       $v0, $v0, -0x1FC0
    ctx->pc = 0x2dbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959168));
    // 0x2dbde0: 0x4224f39d  .word       0x4224F39D                   # INVALID     $s1, $a0, -0xC63 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dbde0u;
    // Unhandled COP0 instruction format: 0x11
    // 0x2dbde4: 0x2529dfe0  addiu       $t1, $t1, -0x2020
    ctx->pc = 0x2dbde4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959072));
    // 0x2dbde8: 0x8225f21d  lb          $a1, -0xDE3($s1)
    ctx->pc = 0x2dbde8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294963741)));
    // 0x2dbdec: 0x256be020  addiu       $t3, $t3, -0x1FE0
    ctx->pc = 0x2dbdecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959136));
    // 0x2dbdf0: 0xd6256b89  ldc1        $f5, 0x6B89($s1)
    ctx->pc = 0x2dbdf0u;
    // Unhandled opcode: 0x35
    // 0x2dbdf4: 0xdb876709  lqc2        $vf7, 0x6709($gp)
    ctx->pc = 0x2dbdf4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 28), 26377)));
    // 0x2dbdf8: 0xdec76709  ld          $a3, 0x6709($s6)
    ctx->pc = 0x2dbdf8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 22), 26377)));
    // 0x2dbdfc: 0xc2c56ba9  ll          $a1, 0x6BA9($s6)
    ctx->pc = 0x2dbdfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 27561); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe00: 0xca87470b  lwc2        $7, 0x470B($s4)
    ctx->pc = 0x2dbe00u;
    // Unhandled opcode: 0x32
    // 0x2dbe04: 0xc0b8e62  jal         func_2E3988
    ctx->pc = 0x2DBE04u;
    SET_GPR_U32(ctx, 31, 0x2DBE0Cu);
    ctx->pc = 0x2DBE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE04u;
            // 0x2dbe08: 0xcea7470b  pref        0x07, 0x470B($s5) (Delay Slot)
        // PREF instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3988u;
    if (runtime->hasFunction(0x2E3988u)) {
        auto targetFn = runtime->lookupFunction(0x2E3988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE0Cu; }
        if (ctx->pc != 0x2DBE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3988_0x2e3988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE0Cu; }
        if (ctx->pc != 0x2DBE0Cu) { return; }
    }
    ctx->pc = 0x2DBE0Cu;
label_2dbe0c:
    // 0x2dbe0c: 0xca845b89  lwc2        $4, 0x5B89($s4)
    ctx->pc = 0x2dbe0cu;
    // Unhandled opcode: 0x32
    // 0x2dbe10: 0xaaa5f981  swl         $a1, -0x67F($s5)
    ctx->pc = 0x2dbe10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294965633); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dbe14: 0xe57d0a95  swc1        $f29, 0xA95($t3)
    ctx->pc = 0x2dbe14u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 2709), bits); }
    // 0x2dbe18: 0x25792815  addiu       $t9, $t3, 0x2815
    ctx->pc = 0x2dbe18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), 10261));
    // 0x2dbe1c: 0x687e988  .word       0x0687E988                   # INVALID     $s4, $a3, -0x1678 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2dbe1cu;
    // Unhandled REGIMM instruction: 0x7
    // 0x2dbe20: 0xcac76749  lwc2        $7, 0x6749($s6)
    ctx->pc = 0x2dbe20u;
    // Unhandled opcode: 0x32
    // 0x2dbe24: 0xc4890a89  lwc1        $f9, 0xA89($a0)
    ctx->pc = 0x2dbe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2697)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2dbe28: 0x6687e988  daddiu      $a3, $s4, -0x1678
    ctx->pc = 0x2dbe28u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4294961544);
    // 0x2dbe2c: 0xc225f99d  ll          $a1, -0x663($s1)
    ctx->pc = 0x2dbe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294965661); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe30: 0xe6990a89  swc1        $f25, 0xA89($s4)
    ctx->pc = 0x2dbe30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2697), bits); }
    // 0x2dbe34: 0x4687e988  .word       0x4687E988                   # INVALID     $s4, $a3, -0x1678 # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x2dbe34u;
    // Unhandled FPU.W instruction: function 0x8
    // 0x2dbe38: 0xc68509c9  lwc1        $f5, 0x9C9($s4)
    ctx->pc = 0x2dbe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2505)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2dbe3c: 0xc285fb89  ll          $a1, -0x477($s4)
    ctx->pc = 0x2dbe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294966153); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe40: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DBE40u;
    SET_GPR_U32(ctx, 31, 0x2DBE48u);
    ctx->pc = 0x2DBE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBE40u;
            // 0x2dbe44: 0xc285fb89  ll          $a1, -0x477($s4) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294966153); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE48u; }
        if (ctx->pc != 0x2DBE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBE48u; }
        if (ctx->pc != 0x2DBE48u) { return; }
    }
    ctx->pc = 0x2DBE48u;
label_2dbe48:
    // 0x2dbe48: 0xca87eb88  lwc2        $7, -0x1478($s4)
    ctx->pc = 0x2dbe48u;
    // Unhandled opcode: 0x32
    // 0x2dbe4c: 0xc207e388  ll          $a3, -0x1C78($s0)
    ctx->pc = 0x2dbe4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294960008); SET_GPR_S32(ctx, 7, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe50: 0x4204f3cd  .word       0x4204F3CD                   # INVALID     $s0, $a0, -0xC33 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2dbe50u;
    // Unhandled COP0 CO-OP: 0xD
    // 0x2dbe54: 0xc28563cd  ll          $a1, 0x63CD($s4)
    ctx->pc = 0x2dbe54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 25549); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe58: 0xc285fb89  ll          $a1, -0x477($s4)
    ctx->pc = 0x2dbe58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294966153); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe5c: 0xc285fb89  ll          $a1, -0x477($s4)
    ctx->pc = 0x2dbe5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294966153); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe60: 0xda85e3c4  lqc2        $vf5, -0x1C3C($s4)
    ctx->pc = 0x2dbe60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 4294960068)));
    // 0x2dbe64: 0xd685e3c0  ldc1        $f5, -0x1C40($s4)
    ctx->pc = 0x2dbe64u;
    // Unhandled opcode: 0x35
    // 0x2dbe68: 0x4245e190  .word       0x4245E190                   # INVALID     $s2, $a1, -0x1E70 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dbe68u;
    // Unhandled COP0 instruction format: 0x12
    // 0x2dbe6c: 0xc305e398  ll          $a1, -0x1C68($t8)
    ctx->pc = 0x2dbe6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294960024); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe70: 0xea85eb88  swc2        $5, -0x1478($s4)
    ctx->pc = 0x2dbe70u;
    // Unhandled opcode: 0x3A
    // 0x2dbe74: 0xc285ef9c  ll          $a1, -0x1064($s4)
    ctx->pc = 0x2dbe74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963100); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe78: 0xcec54389  pref        0x05, 0x4389($s6)
    ctx->pc = 0x2dbe78u;
    // PREF instruction (ignored)
    // 0x2dbe7c: 0xd285e3cc  lld         $a1, -0x1C34($s4)
    ctx->pc = 0x2dbe7cu;
    // Unhandled opcode: 0x34
    // 0x2dbe80: 0xc305e398  ll          $a1, -0x1C68($t8)
    ctx->pc = 0x2dbe80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294960024); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2dbe84: 0xea85eb88  swc2        $5, -0x1478($s4)
    ctx->pc = 0x2dbe84u;
    // Unhandled opcode: 0x3A
    // 0x2dbe88: 0x8604fbdd  lh          $a0, -0x423($s0)
    ctx->pc = 0x2dbe88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294966237)));
    // 0x2dbe8c: 0x2138a819  addi        $t8, $t1, -0x57E7
    ctx->pc = 0x2dbe8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294944793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
    // 0x2dbe90: 0xca877b8b  lwc2        $7, 0x7B8B($s4)
    ctx->pc = 0x2dbe90u;
    // Unhandled opcode: 0x32
    // 0x2dbe94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DBE94u;
    {
        const bool branch_taken_0x2dbe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe94) {
            ctx->pc = 0x2DBEC4u;
            goto label_2dbec4;
        }
    }
    ctx->pc = 0x2DBE9Cu;
    // 0x2dbe9c: 0xa2ce7249  sb          $t6, 0x7249($s6)
    ctx->pc = 0x2dbe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 29257), (uint8_t)GPR_U32(ctx, 14));
    // 0x2dbea0: 0x844505c3  lh          $a1, 0x5C3($v0)
    ctx->pc = 0x2dbea0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1475)));
    // 0x2dbea4: 0xcd34e9f  jal         func_34D3A7C
    ctx->pc = 0x2DBEA4u;
    SET_GPR_U32(ctx, 31, 0x2DBEACu);
    ctx->pc = 0x2DBEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBEA4u;
            // 0x2dbea8: 0x2481020  add         $v0, $s2, $t0 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D3A7Cu;
    {
        auto targetFn = runtime->lookupFunction(0x34D3A7Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEACu; }
        if (ctx->pc != 0x2DBEACu) { return; }
    }
    ctx->pc = 0x2DBEACu;
label_2dbeac:
    // 0x2dbeac: 0xfd08b6f2  sd          $t0, -0x490E($t0)
    ctx->pc = 0x2dbeacu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294948594), GPR_U64(ctx, 8));
    // 0x2dbeb0: 0x18f1820  add         $v1, $t4, $t7
    ctx->pc = 0x2dbeb0u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x2dbeb4: 0x868ec7f1  lh          $t6, -0x380F($s4)
    ctx->pc = 0x2dbeb4u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294952945)));
    // 0x2dbeb8: 0xc712f10f  lwc1        $f18, -0xEF1($t8)
    ctx->pc = 0x2dbeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294963471)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dbebc: 0x868ec6e1  lh          $t6, -0x391F($s4)
    ctx->pc = 0x2dbebcu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294952673)));
    // 0x2dbec0: 0x0  nop
    ctx->pc = 0x2dbec0u;
    // NOP
label_2dbec4:
    // 0x2dbec4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dbec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dbec8: 0x2442beb4  addiu       $v0, $v0, -0x414C
    ctx->pc = 0x2dbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950580));
    // 0x2dbecc: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dbeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dbed0: 0x2484be94  addiu       $a0, $a0, -0x416C
    ctx->pc = 0x2dbed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950548));
    // 0x2dbed4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dbed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dbed8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dbed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dbedc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DBEDCu;
    SET_GPR_U32(ctx, 31, 0x2DBEE4u);
    ctx->pc = 0x2DBEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBEDCu;
            // 0x2dbee0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEE4u; }
        if (ctx->pc != 0x2DBEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DBEE4u; }
        if (ctx->pc != 0x2DBEE4u) { return; }
    }
    ctx->pc = 0x2DBEE4u;
label_2dbee4:
    // 0x2dbee4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dbee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbee8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2dbee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dbeec: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2dbeecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dbef0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2dbef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dbef4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2dbef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dbef8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dbef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dbefc: 0xc7b60088  lwc1        $f22, 0x88($sp)
    ctx->pc = 0x2dbefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dbf00: 0xc7b50080  lwc1        $f21, 0x80($sp)
    ctx->pc = 0x2dbf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dbf04: 0xc7b40078  lwc1        $f20, 0x78($sp)
    ctx->pc = 0x2dbf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dbf08: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DBF08u;
            // 0x2dbf0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DBF10u;
    ctx->pc = 0x2dbf10u;
}
