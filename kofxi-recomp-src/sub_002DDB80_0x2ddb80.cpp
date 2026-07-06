#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DDB80
// Address: 0x2ddb80 - 0x2de0b0
void sub_002DDB80_0x2ddb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDB80_0x2ddb80");
#endif

    switch (ctx->pc) {
        case 0x2ddbf0u: goto label_2ddbf0;
        case 0x2ddc50u: goto label_2ddc50;
        case 0x2ddc68u: goto label_2ddc68;
        case 0x2ddca0u: goto label_2ddca0;
        case 0x2ddd18u: goto label_2ddd18;
        case 0x2ddd78u: goto label_2ddd78;
        case 0x2ddd9cu: goto label_2ddd9c;
        case 0x2dddb0u: goto label_2dddb0;
        case 0x2dddc0u: goto label_2dddc0;
        case 0x2dddc8u: goto label_2dddc8;
        case 0x2dddd0u: goto label_2dddd0;
        case 0x2dde54u: goto label_2dde54;
        case 0x2dde60u: goto label_2dde60;
        case 0x2ddec8u: goto label_2ddec8;
        case 0x2ddee0u: goto label_2ddee0;
        case 0x2ddf40u: goto label_2ddf40;
        case 0x2ddf58u: goto label_2ddf58;
        case 0x2ddfacu: goto label_2ddfac;
        case 0x2ddfd0u: goto label_2ddfd0;
        case 0x2de024u: goto label_2de024;
        case 0x2de06cu: goto label_2de06c;
        default: break;
    }

    ctx->pc = 0x2ddb80u;

    // 0x2ddb80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ddb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ddb84: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ddb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ddb88: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x2ddb88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ddb8c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2ddb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2ddb90: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2ddb90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb94: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2ddb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2ddb98: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2ddb98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb9c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ddb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ddba0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2ddba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2ddba4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2ddba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2ddba8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2ddba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2ddbac: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2ddbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2ddbb0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2ddbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2ddbb4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2ddbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2ddbb8: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2ddbb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ddbbc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2ddbbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2ddbc0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2ddbc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2ddbc4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2ddbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2ddbc8: 0x2463dc10  addiu       $v1, $v1, -0x23F0
    ctx->pc = 0x2ddbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958096));
    // 0x2ddbcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ddbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddbd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDBD0u;
    {
        const bool branch_taken_0x2ddbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbd0) {
            ctx->pc = 0x2DDBF0u;
            goto label_2ddbf0;
        }
    }
    ctx->pc = 0x2DDBD8u;
    // 0x2ddbd8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2ddbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2ddbdc: 0x2484dc24  addiu       $a0, $a0, -0x23DC
    ctx->pc = 0x2ddbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958116));
    // 0x2ddbe0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2ddbe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2ddbe4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2ddbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2ddbe8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DDBE8u;
    SET_GPR_U32(ctx, 31, 0x2DDBF0u);
    ctx->pc = 0x2DDBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDBE8u;
    // 0x2ddbec: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DDBE8u, 0x2DDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBF0u;
label_2ddbf0:
    // 0x2ddbf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DDBF0u;
    {
        const bool branch_taken_0x2ddbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbf0) {
            ctx->pc = 0x2DDC24u;
            goto label_2ddc24;
        }
    }
    ctx->pc = 0x2DDBF8u;
    // 0x2ddbf8: 0xa07a96c1  sb          $k0, -0x693F($v1)
    ctx->pc = 0x2ddbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940353), (uint8_t)GPR_U32(ctx, 26));
    // 0x2ddbfc: 0xfc8ca15a  sd          $t4, -0x5EA6($a0)
    ctx->pc = 0x2ddbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294943066), GPR_U64(ctx, 12));
    // 0x2ddc00: 0xa26550a9  sb          $a1, 0x50A9($s3)
    ctx->pc = 0x2ddc00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 20649), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ddc04: 0xdf3ccadf  ld          $gp, -0x3521($t9)
    ctx->pc = 0x2ddc04u;
    SET_GPR_U64(ctx, 28, READ64(ADD32(GPR_U32(ctx, 25), 4294953695)));
    // 0x2ddc08: 0xa8b020  add         $s6, $a1, $t0
    ctx->pc = 0x2ddc08u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x2ddc0c: 0xfef616e2  sd          $s6, 0x16E2($s7)
    ctx->pc = 0x2ddc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 5858), GPR_U64(ctx, 22));
    // 0x2ddc10: 0x0  nop
    ctx->pc = 0x2ddc10u;
    // NOP
    // 0x2ddc14: 0x617f2d7b  daddi       $ra, $t3, 0x2D7B
    ctx->pc = 0x2ddc14u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11643; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x2ddc18: 0xc7131236  lwc1        $f19, 0x1236($t8)
    ctx->pc = 0x2ddc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4662)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2ddc1c: 0x617f2e83  daddi       $ra, $t3, 0x2E83
    ctx->pc = 0x2ddc1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11907; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x2ddc20: 0x0  nop
    ctx->pc = 0x2ddc20u;
    // NOP
label_2ddc24:
    // 0x2ddc24: 0x3c1501c9  lui         $s5, 0x1C9
    ctx->pc = 0x2ddc24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)457 << 16));
    // 0x2ddc28: 0xd5b84336  ldc1        $f24, 0x4336($t5)
    ctx->pc = 0x2ddc28u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DDC28 raw=0xD5B84336");
    // 0x2ddc2c: 0xae3675ab  sw          $s6, 0x75AB($s1)
    ctx->pc = 0x2ddc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30123), GPR_U32(ctx, 22));
    // 0x2ddc30: 0xee3664c9  .word       0xEE3664C9                   # INVALID     $s1, $s6, 0x64C9 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ddc30u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DDC30 raw=0xEE3664C9");
    // 0x2ddc34: 0xbfd88456  cache       0x18, -0x7BAA($fp)
    ctx->pc = 0x2ddc34u;
    // CACHE instruction (ignored)
    // 0x2ddc38: 0xbed875b1  cache       0x18, 0x75B1($s6)
    ctx->pc = 0x2ddc38u;
    // CACHE instruction (ignored)
    // 0x2ddc3c: 0xafd88476  sw          $t8, -0x7B8A($fp)
    ctx->pc = 0x2ddc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935670), GPR_U32(ctx, 24));
    // 0x2ddc40: 0xafd875b9  sw          $t8, 0x75B9($fp)
    ctx->pc = 0x2ddc40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 30137), GPR_U32(ctx, 24));
    // 0x2ddc44: 0xbfd88476  cache       0x18, -0x7B8A($fp)
    ctx->pc = 0x2ddc44u;
    // CACHE instruction (ignored)
    // 0x2ddc48: 0xc0b75b8  jal         func_2DD6E0
    ctx->pc = 0x2DDC48u;
    SET_GPR_U32(ctx, 31, 0x2DDC50u);
    ctx->pc = 0x2DDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC48u;
    // 0x2ddc4c: 0xbd920966  cache       0x12, 0x966($t4) (Delay Slot)
    // CACHE instruction (ignored)
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD6E0u, 0x2DDC48u, 0x2DDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC50u;
label_2ddc50:
    // 0x2ddc50: 0x26b34b00  addiu       $s3, $s5, 0x4B00
    ctx->pc = 0x2ddc50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
    // 0x2ddc54: 0xbd920c27  cache       0x12, 0xC27($t4)
    ctx->pc = 0x2ddc54u;
    // CACHE instruction (ignored)
    // 0x2ddc58: 0x9fd87437  lwu         $t8, 0x7437($fp)
    ctx->pc = 0x2ddc58u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 30), 29751)));
    // 0x2ddc5c: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddc5cu;
    // CACHE instruction (ignored)
    // 0x2ddc60: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DDC60u;
    SET_GPR_U32(ctx, 31, 0x2DDC68u);
    ctx->pc = 0x2DDC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDC60u;
    // 0x2ddc64: 0xbdd80d37  cache       0x18, 0xD37($t6) (Delay Slot)
    // CACHE instruction (ignored)
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DDC60u, 0x2DDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC68u;
label_2ddc68:
    // 0x2ddc68: 0xb9d88536  swr         $t8, -0x7ACA($t6)
    ctx->pc = 0x2ddc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935862); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddc6c: 0xbd988136  cache       0x18, -0x7ECA($t4)
    ctx->pc = 0x2ddc6cu;
    // CACHE instruction (ignored)
    // 0x2ddc70: 0x5d9a0977  .word       0x5D9A0977                   # bgtzl       $t4, . + 4 + (0x977 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DDC70u;
    {
        const bool branch_taken_0x2ddc70 = (GPR_S32(ctx, 12) > 0);
        if (branch_taken_0x2ddc70) {
            ctx->pc = 0x2DDC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDC70u;
            // 0x2ddc74: 0x9dda4137  lwu         $k0, 0x4137($t6) (Delay Slot)
            SET_GPR_U32(ctx, 26, READ32(ADD32(GPR_U32(ctx, 14), 16695)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0250u;
            return;
        }
    }
    ctx->pc = 0x2DDC78u;
    // 0x2ddc78: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddc78u;
    // CACHE instruction (ignored)
    // 0x2ddc7c: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddc7cu;
    // CACHE instruction (ignored)
    // 0x2ddc80: 0x91de8137  lbu         $fp, -0x7EC9($t6)
    ctx->pc = 0x2ddc80u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2ddc84: 0x97dc8137  lhu         $gp, -0x7EC9($fp)
    ctx->pc = 0x2ddc84u;
    SET_GPR_U32(ctx, 28, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294934839)));
    // 0x2ddc88: 0xbdb48077  cache       0x14, -0x7F89($t5)
    ctx->pc = 0x2ddc88u;
    // CACHE instruction (ignored)
    // 0x2ddc8c: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2ddc8cu;
    // CACHE instruction (ignored)
    // 0x2ddc90: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2ddc90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddc94: 0xbdd28737  cache       0x12, -0x78C9($t6)
    ctx->pc = 0x2ddc94u;
    // CACHE instruction (ignored)
    // 0x2ddc98: 0xbad85933  swr         $t8, 0x5933($s6)
    ctx->pc = 0x2ddc98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 22835); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddc9c: 0x95da8137  lhu         $k0, -0x7EC9($t6)
    ctx->pc = 0x2ddc9cu;
    SET_GPR_U32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294934839)));
label_2ddca0:
    // 0x2ddca0: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2ddca0u;
    // CACHE instruction (ignored)
    // 0x2ddca4: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2ddca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddca8: 0x1f920d17  .word       0x1F920D17                   # bgtz        $gp, . + 4 + (0xD17 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DDCA8u;
    {
        const bool branch_taken_0x2ddca8 = (GPR_S32(ctx, 28) > 0);
        ctx->pc = 0x2DDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDCA8u;
        // 0x2ddcac: 0x6c1024c9  ldr         $s0, 0x24C9($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9417); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddca8) {
            ctx->pc = 0x2E1108u;
            return;
        }
    }
    ctx->pc = 0x2DDCB0u;
    // 0x2ddcb0: 0xb9d94d36  swr         $t9, 0x4D36($t6)
    ctx->pc = 0x2ddcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 19766); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddcb4: 0x26a64b00  addiu       $a2, $s5, 0x4B00
    ctx->pc = 0x2ddcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
    // 0x2ddcb8: 0xad920d67  sw          $s2, 0xD67($t4)
    ctx->pc = 0x2ddcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3431), GPR_U32(ctx, 18));
    // 0x2ddcbc: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddcbcu;
    // CACHE instruction (ignored)
    // 0x2ddcc0: 0xb79a0916  sdr         $k0, 0x916($gp)
    ctx->pc = 0x2ddcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 2326); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 26); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ddcc4: 0x379a0d76  ori         $k0, $gp, 0xD76
    ctx->pc = 0x2ddcc4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 28) | (uint64_t)(uint16_t)3446);
    // 0x2ddcc8: 0x3bd92d37  xori        $t9, $fp, 0x2D37
    ctx->pc = 0x2ddcc8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)11575);
    // 0x2ddccc: 0xf7da4536  sdc1        $f26, 0x4536($fp)
    ctx->pc = 0x2ddcccu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DDCCC raw=0xF7DA4536");
    // 0x2ddcd0: 0xf9f85d36  sqc2        $vf24, 0x5D36($t7)
    ctx->pc = 0x2ddcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 23862), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x2ddcd4: 0x2c3c24c9  sltiu       $gp, $at, 0x24C9
    ctx->pc = 0x2ddcd4u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)9417) ? 1 : 0);
    // 0x2ddcd8: 0xbbd94d36  swr         $t9, 0x4D36($fp)
    ctx->pc = 0x2ddcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19766); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddcdc: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x2ddcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x2ddce0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ddce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ddce4: 0x24474b10  addiu       $a3, $v0, 0x4B10
    ctx->pc = 0x2ddce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 19216));
    // 0x2ddce8: 0x2466dfb8  addiu       $a2, $v1, -0x2048
    ctx->pc = 0x2ddce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959032));
    // 0x2ddcec: 0xad920d67  sw          $s2, 0xD67($t4)
    ctx->pc = 0x2ddcecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3431), GPR_U32(ctx, 18));
    // 0x2ddcf0: 0x379a0d16  ori         $k0, $gp, 0xD16
    ctx->pc = 0x2ddcf0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 28) | (uint64_t)(uint16_t)3350);
    // 0x2ddcf4: 0x779a0d76  .word       0x779A0D76                   # INVALID     $gp, $k0, 0xD76 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ddcf4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DDCF4 raw=0x779A0D76");
    // 0x2ddcf8: 0x3bd92d37  xori        $t9, $fp, 0x2D37
    ctx->pc = 0x2ddcf8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)11575);
    // 0x2ddcfc: 0xf7da4536  sdc1        $f26, 0x4536($fp)
    ctx->pc = 0x2ddcfcu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DDCFC raw=0xF7DA4536");
    // 0x2ddd00: 0xf9d85526  sqc2        $vf24, 0x5526($t6)
    ctx->pc = 0x2ddd00u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 21798), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x2ddd04: 0x2c3c24c9  sltiu       $gp, $at, 0x24C9
    ctx->pc = 0x2ddd04u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)9417) ? 1 : 0);
    // 0x2ddd08: 0xbbd94d36  swr         $t9, 0x4D36($fp)
    ctx->pc = 0x2ddd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19766); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddd0c: 0xad920d67  sw          $s2, 0xD67($t4)
    ctx->pc = 0x2ddd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3431), GPR_U32(ctx, 18));
    // 0x2ddd10: 0xbd920946  cache       0x12, 0x946($t4)
    ctx->pc = 0x2ddd10u;
    // CACHE instruction (ignored)
    // 0x2ddd14: 0x379a0d76  ori         $k0, $gp, 0xD76
    ctx->pc = 0x2ddd14u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 28) | (uint64_t)(uint16_t)3446);
label_2ddd18:
    // 0x2ddd18: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x2ddd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x2ddd1c: 0x379a0d17  ori         $k0, $gp, 0xD17
    ctx->pc = 0x2ddd1cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 28) | (uint64_t)(uint16_t)3351);
    // 0x2ddd20: 0x90424b10  lbu         $v0, 0x4B10($v0)
    ctx->pc = 0x2ddd20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19216)));
    // 0x2ddd24: 0xbbd92d36  swr         $t9, 0x2D36($fp)
    ctx->pc = 0x2ddd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 11574); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddd28: 0x3b940d17  xori        $s4, $gp, 0xD17
    ctx->pc = 0x2ddd28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)3351);
    // 0x2ddd2c: 0x3c0101c9  lui         $at, 0x1C9
    ctx->pc = 0x2ddd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)457 << 16));
    // 0x2ddd30: 0xe79a0d37  swc1        $f26, 0xD37($gp)
    ctx->pc = 0x2ddd30u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 3383), bits); }
    // 0x2ddd34: 0xa0224b10  sb          $v0, 0x4B10($at)
    ctx->pc = 0x2ddd34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ddd38: 0xf7da4536  sdc1        $f26, 0x4536($fp)
    ctx->pc = 0x2ddd38u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DDD38 raw=0xF7DA4536");
    // 0x2ddd3c: 0xf9d85526  sqc2        $vf24, 0x5526($t6)
    ctx->pc = 0x2ddd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 21798), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x2ddd40: 0x2c3224d9  sltiu       $s2, $at, 0x24D9
    ctx->pc = 0x2ddd40u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)9433) ? 1 : 0);
    // 0x2ddd44: 0x379a0d76  ori         $k0, $gp, 0xD76
    ctx->pc = 0x2ddd44u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 28) | (uint64_t)(uint16_t)3446);
    // 0x2ddd48: 0x26b04b00  addiu       $s0, $s5, 0x4B00
    ctx->pc = 0x2ddd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
    // 0x2ddd4c: 0x3c1301c9  lui         $s3, 0x1C9
    ctx->pc = 0x2ddd4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)457 << 16));
    // 0x2ddd50: 0x2d920966  sltiu       $s2, $t4, 0x966
    ctx->pc = 0x2ddd50u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)2406) ? 1 : 0);
    // 0x2ddd54: 0x26644d80  addiu       $a0, $s3, 0x4D80
    ctx->pc = 0x2ddd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19840));
    // 0x2ddd58: 0xbd920d47  cache       0x12, 0xD47($t4)
    ctx->pc = 0x2ddd58u;
    // CACHE instruction (ignored)
    // 0x2ddd5c: 0xad920947  sw          $s2, 0x947($t4)
    ctx->pc = 0x2ddd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 2375), GPR_U32(ctx, 18));
    // 0x2ddd60: 0xbcc84533  cache       0x08, 0x4533($a2)
    ctx->pc = 0x2ddd60u;
    // CACHE instruction (ignored)
    // 0x2ddd64: 0xad9209a7  sw          $s2, 0x9A7($t4)
    ctx->pc = 0x2ddd64u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 2471), GPR_U32(ctx, 18));
    // 0x2ddd68: 0xb8c84533  swr         $t0, 0x4533($a2)
    ctx->pc = 0x2ddd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 17715); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddd6c: 0xad920d87  sw          $s2, 0xD87($t4)
    ctx->pc = 0x2ddd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3463), GPR_U32(ctx, 18));
    // 0x2ddd70: 0xc0b93a0  jal         func_2E4E80
    ctx->pc = 0x2DDD70u;
    SET_GPR_U32(ctx, 31, 0x2DDD78u);
    ctx->pc = 0x2DDD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD70u;
    // 0x2ddd74: 0xfdd95336  sd          $t9, 0x5336($t6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 14), 21302), GPR_U64(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4E80u, 0x2DDD70u, 0x2DDD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD78u;
label_2ddd78:
    // 0x2ddd78: 0x3fde0537  .word       0x3FDE0537                   # lui         $fp, 0x537 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ddd78u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)1335 << 16));
    // 0x2ddd7c: 0xd1584336  lld         $t8, 0x4336($t2)
    ctx->pc = 0x2ddd7cu;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2DDD7C raw=0xD1584336");
    // 0x2ddd80: 0xbdf62d27  cache       0x16, 0x2D27($t7)
    ctx->pc = 0x2ddd80u;
    // CACHE instruction (ignored)
    // 0x2ddd84: 0x802644c9  lb          $a2, 0x44C9($at)
    ctx->pc = 0x2ddd84u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17609)));
    // 0x2ddd88: 0xbd920966  cache       0x12, 0x966($t4)
    ctx->pc = 0x2ddd88u;
    // CACHE instruction (ignored)
    // 0x2ddd8c: 0xad920967  sw          $s2, 0x967($t4)
    ctx->pc = 0x2ddd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 2407), GPR_U32(ctx, 18));
    // 0x2ddd90: 0x3d920946  .word       0x3D920946                   # lui         $s2, 0x946 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ddd90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2374 << 16));
    // 0x2ddd94: 0xc0b75f4  jal         func_2DD7D0
    ctx->pc = 0x2DDD94u;
    SET_GPR_U32(ctx, 31, 0x2DDD9Cu);
    ctx->pc = 0x2DDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDD94u;
    // 0x2ddd98: 0x9ff84137  lwu         $t8, 0x4137($ra) (Delay Slot)
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 31), 16695)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD7D0u, 0x2DDD94u, 0x2DDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD9Cu;
label_2ddd9c:
    // 0x2ddd9c: 0x2d920966  sltiu       $s2, $t4, 0x966
    ctx->pc = 0x2ddd9cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)2406) ? 1 : 0);
    // 0x2ddda0: 0xb1384533  sdl         $t8, 0x4533($t1)
    ctx->pc = 0x2ddda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 17715); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ddda4: 0xfd920967  sd          $s2, 0x967($t4)
    ctx->pc = 0x2ddda4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 2407), GPR_U64(ctx, 18));
    // 0x2ddda8: 0xc0b7658  jal         func_2DD960
    ctx->pc = 0x2DDDA8u;
    SET_GPR_U32(ctx, 31, 0x2DDDB0u);
    ctx->pc = 0x2DDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDA8u;
    // 0x2dddac: 0x802644c9  lb          $a2, 0x44C9($at) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17609)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD960u, 0x2DDDA8u, 0x2DDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDB0u;
label_2dddb0:
    // 0x2dddb0: 0xbd920967  cache       0x12, 0x967($t4)
    ctx->pc = 0x2dddb0u;
    // CACHE instruction (ignored)
    // 0x2dddb4: 0x37f84137  ori         $t8, $ra, 0x4137
    ctx->pc = 0x2dddb4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 31) | (uint64_t)(uint16_t)16695);
    // 0x2dddb8: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2DDDB8u;
    SET_GPR_U32(ctx, 31, 0x2DDDC0u);
    ctx->pc = 0x2DDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDB8u;
    // 0x2dddbc: 0xf1f84336  scd         $t8, 0x4336($t7) (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2DDDBC raw=0xF1F84336");
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E80u, 0x2DDDB8u, 0x2DDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDC0u;
label_2dddc0:
    // 0x2dddc0: 0xf9a0977  jal         func_E6825DC
    ctx->pc = 0x2DDDC0u;
    SET_GPR_U32(ctx, 31, 0x2DDDC8u);
    ctx->pc = 0x2DDDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDC0u;
    // 0x2dddc4: 0xf5f84336  sdc1        $f24, 0x4336($t7) (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DDDC4 raw=0xF5F84336");
    ctx->in_delay_slot = false;
    ctx->pc = 0xE6825DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE6825DCu, 0x2DDDC0u, 0x2DDDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDC8u;
label_2dddc8:
    // 0x2dddc8: 0xc0b7340  jal         func_2DCD00
    ctx->pc = 0x2DDDC8u;
    SET_GPR_U32(ctx, 31, 0x2DDDD0u);
    ctx->pc = 0x2DDDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDDC8u;
    // 0x2dddcc: 0xb1f04537  sdl         $s0, 0x4537($t7) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 17719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCD00u, 0x2DDDC8u, 0x2DDDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDDD0u;
label_2dddd0:
    // 0x2dddd0: 0x3dd0a527  .word       0x3DD0A527                   # lui         $s0, 0xA527 # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dddd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42279 << 16));
    // 0x2dddd4: 0x26b14b00  addiu       $s1, $s5, 0x4B00
    ctx->pc = 0x2dddd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
    // 0x2dddd8: 0x3dd82927  .word       0x3DD82927                   # lui         $t8, 0x2927 # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dddd8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)10535 << 16));
    // 0x2ddddc: 0xad920d67  sw          $s2, 0xD67($t4)
    ctx->pc = 0x2ddddcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3431), GPR_U32(ctx, 18));
    // 0x2ddde0: 0xf79a0917  sdc1        $f26, 0x917($gp)
    ctx->pc = 0x2ddde0u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DDDE0 raw=0xF79A0917");
    // 0x2ddde4: 0x779a0976  .word       0x779A0976                   # INVALID     $gp, $k0, 0x976 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ddde4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2DDDE4 raw=0x779A0976");
    // 0x2ddde8: 0x3bd92d37  xori        $t9, $fp, 0x2D37
    ctx->pc = 0x2ddde8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)11575);
    // 0x2dddec: 0xf7da4536  sdc1        $f26, 0x4536($fp)
    ctx->pc = 0x2dddecu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DDDEC raw=0xF7DA4536");
    // 0x2dddf0: 0xd99c0d06  lqc2        $vf28, 0xD06($t4)
    ctx->pc = 0x2dddf0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 3334)));
    // 0x2dddf4: 0x2c3c24c9  sltiu       $gp, $at, 0x24C9
    ctx->pc = 0x2dddf4u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)(int64_t)(int32_t)9417) ? 1 : 0);
    // 0x2dddf8: 0xbbd94d36  swr         $t9, 0x4D36($fp)
    ctx->pc = 0x2dddf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 19766); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dddfc: 0xbd920cc7  cache       0x12, 0xCC7($t4)
    ctx->pc = 0x2dddfcu;
    // CACHE instruction (ignored)
    // 0x2dde00: 0x26b14b00  addiu       $s1, $s5, 0x4B00
    ctx->pc = 0x2dde00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 19200));
    // 0x2dde04: 0xb7d67537  sdr         $s6, 0x7537($fp)
    ctx->pc = 0x2dde04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 30007); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dde08: 0x26644d80  addiu       $a0, $s3, 0x4D80
    ctx->pc = 0x2dde08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19840));
    // 0x2dde0c: 0xe7fa658e  swc1        $f26, 0x658E($ra)
    ctx->pc = 0x2dde0cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 31), 25998), bits); }
    // 0x2dde10: 0xbd920d47  cache       0x12, 0xD47($t4)
    ctx->pc = 0x2dde10u;
    // CACHE instruction (ignored)
    // 0x2dde14: 0xed920947  .word       0xED920947                   # INVALID     $t4, $s2, 0x947 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dde14u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DDE14 raw=0xED920947");
    // 0x2dde18: 0xbcc84533  cache       0x08, 0x4533($a2)
    ctx->pc = 0x2dde18u;
    // CACHE instruction (ignored)
    // 0x2dde1c: 0xed9209a7  .word       0xED9209A7                   # INVALID     $t4, $s2, 0x9A7 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dde1cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DDE1C raw=0xED9209A7");
    // 0x2dde20: 0xb8c84533  swr         $t0, 0x4533($a2)
    ctx->pc = 0x2dde20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 17715); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dde24: 0xad920d87  sw          $s2, 0xD87($t4)
    ctx->pc = 0x2dde24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3463), GPR_U32(ctx, 18));
    // 0x2dde28: 0xae3675ab  sw          $s6, 0x75AB($s1)
    ctx->pc = 0x2dde28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30123), GPR_U32(ctx, 22));
    // 0x2dde2c: 0xee3664c9  .word       0xEE3664C9                   # INVALID     $s1, $s6, 0x64C9 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dde2cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DDE2C raw=0xEE3664C9");
    // 0x2dde30: 0xbfd88456  cache       0x18, -0x7BAA($fp)
    ctx->pc = 0x2dde30u;
    // CACHE instruction (ignored)
    // 0x2dde34: 0xbd920c27  cache       0x12, 0xC27($t4)
    ctx->pc = 0x2dde34u;
    // CACHE instruction (ignored)
    // 0x2dde38: 0xbed875b1  cache       0x18, 0x75B1($s6)
    ctx->pc = 0x2dde38u;
    // CACHE instruction (ignored)
    // 0x2dde3c: 0xafd88476  sw          $t8, -0x7B8A($fp)
    ctx->pc = 0x2dde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935670), GPR_U32(ctx, 24));
    // 0x2dde40: 0x99d87437  lwr         $t8, 0x7437($t6)
    ctx->pc = 0x2dde40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 29751); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 24) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 24) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 24, merged64); }
    // 0x2dde44: 0xafd875b9  sw          $t8, 0x75B9($fp)
    ctx->pc = 0x2dde44u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 30137), GPR_U32(ctx, 24));
    // 0x2dde48: 0xbfd88476  cache       0x18, -0x7B8A($fp)
    ctx->pc = 0x2dde48u;
    // CACHE instruction (ignored)
    // 0x2dde4c: 0xc0b93a0  jal         func_2E4E80
    ctx->pc = 0x2DDE4Cu;
    SET_GPR_U32(ctx, 31, 0x2DDE54u);
    ctx->pc = 0x2DDE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDE4Cu;
    // 0x2dde50: 0xfdd95336  sd          $t9, 0x5336($t6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 14), 21302), GPR_U64(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4E80u, 0x2DDE4Cu, 0x2DDE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE54u;
label_2dde54:
    // 0x2dde54: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2dde54u;
    // CACHE instruction (ignored)
    // 0x2dde58: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DDE58u;
    SET_GPR_U32(ctx, 31, 0x2DDE60u);
    ctx->pc = 0x2DDE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDE58u;
    // 0x2dde5c: 0xbdd80d37  cache       0x18, 0xD37($t6) (Delay Slot)
    // CACHE instruction (ignored)
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DDE58u, 0x2DDE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE60u;
label_2dde60:
    // 0x2dde60: 0xb9d88536  swr         $t8, -0x7ACA($t6)
    ctx->pc = 0x2dde60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935862); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dde64: 0xbd988136  cache       0x18, -0x7ECA($t4)
    ctx->pc = 0x2dde64u;
    // CACHE instruction (ignored)
    // 0x2dde68: 0xdd9a0977  ld          $k0, 0x977($t4)
    ctx->pc = 0x2dde68u;
    SET_GPR_U64(ctx, 26, READ64(ADD32(GPR_U32(ctx, 12), 2423)));
    // 0x2dde6c: 0x9dda4137  lwu         $k0, 0x4137($t6)
    ctx->pc = 0x2dde6cu;
    SET_GPR_U32(ctx, 26, READ32(ADD32(GPR_U32(ctx, 14), 16695)));
    // 0x2dde70: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2dde70u;
    // CACHE instruction (ignored)
    // 0x2dde74: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2dde74u;
    // CACHE instruction (ignored)
    // 0x2dde78: 0x91de8137  lbu         $fp, -0x7EC9($t6)
    ctx->pc = 0x2dde78u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2dde7c: 0x97dc8137  lhu         $gp, -0x7EC9($fp)
    ctx->pc = 0x2dde7cu;
    SET_GPR_U32(ctx, 28, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294934839)));
    // 0x2dde80: 0xbdb48077  cache       0x14, -0x7F89($t5)
    ctx->pc = 0x2dde80u;
    // CACHE instruction (ignored)
    // 0x2dde84: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2dde84u;
    // CACHE instruction (ignored)
    // 0x2dde88: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2dde88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dde8c: 0xbdd28737  cache       0x12, -0x78C9($t6)
    ctx->pc = 0x2dde8cu;
    // CACHE instruction (ignored)
    // 0x2dde90: 0xbad85933  swr         $t8, 0x5933($s6)
    ctx->pc = 0x2dde90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 22835); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dde94: 0x95da8137  lhu         $k0, -0x7EC9($t6)
    ctx->pc = 0x2dde94u;
    SET_GPR_U32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2dde98: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2dde98u;
    // CACHE instruction (ignored)
    // 0x2dde9c: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2dde9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddea0: 0x19920d17  .word       0x19920D17                   # blez        $t4, . + 4 + (0xD17 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DDEA0u;
    {
        const bool branch_taken_0x2ddea0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x2DDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEA0u;
        // 0x2ddea4: 0x6c1024c9  ldr         $s0, 0x24C9($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9417); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddea0) {
            ctx->pc = 0x2E1300u;
            return;
        }
    }
    ctx->pc = 0x2DDEA8u;
    // 0x2ddea8: 0xb9d94d36  swr         $t9, 0x4D36($t6)
    ctx->pc = 0x2ddea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 19766); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddeac: 0xae3675ab  sw          $s6, 0x75AB($s1)
    ctx->pc = 0x2ddeacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30123), GPR_U32(ctx, 22));
    // 0x2ddeb0: 0xee3664c9  .word       0xEE3664C9                   # INVALID     $s1, $s6, 0x64C9 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ddeb0u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DDEB0 raw=0xEE3664C9");
    // 0x2ddeb4: 0xbfd88456  cache       0x18, -0x7BAA($fp)
    ctx->pc = 0x2ddeb4u;
    // CACHE instruction (ignored)
    // 0x2ddeb8: 0xd9f84336  lqc2        $vf24, 0x4336($t7)
    ctx->pc = 0x2ddeb8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 17206)));
    // 0x2ddebc: 0xbed875b1  cache       0x18, 0x75B1($s6)
    ctx->pc = 0x2ddebcu;
    // CACHE instruction (ignored)
    // 0x2ddec0: 0xafd88476  sw          $t8, -0x7B8A($fp)
    ctx->pc = 0x2ddec0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935670), GPR_U32(ctx, 24));
    // 0x2ddec4: 0xbd920c27  cache       0x12, 0xC27($t4)
    ctx->pc = 0x2ddec4u;
    // CACHE instruction (ignored)
label_2ddec8:
    // 0x2ddec8: 0xafd875b9  sw          $t8, 0x75B9($fp)
    ctx->pc = 0x2ddec8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 30137), GPR_U32(ctx, 24));
    // 0x2ddecc: 0xbfd88476  cache       0x18, -0x7B8A($fp)
    ctx->pc = 0x2ddeccu;
    // CACHE instruction (ignored)
    // 0x2dded0: 0x9fd87437  lwu         $t8, 0x7437($fp)
    ctx->pc = 0x2dded0u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 30), 29751)));
    // 0x2dded4: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2dded4u;
    // CACHE instruction (ignored)
    // 0x2dded8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DDED8u;
    SET_GPR_U32(ctx, 31, 0x2DDEE0u);
    ctx->pc = 0x2DDEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDED8u;
    // 0x2ddedc: 0xbdd80d37  cache       0x18, 0xD37($t6) (Delay Slot)
    // CACHE instruction (ignored)
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DDED8u, 0x2DDEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEE0u;
label_2ddee0:
    // 0x2ddee0: 0xb9d88536  swr         $t8, -0x7ACA($t6)
    ctx->pc = 0x2ddee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935862); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddee4: 0xbd988136  cache       0x18, -0x7ECA($t4)
    ctx->pc = 0x2ddee4u;
    // CACHE instruction (ignored)
    // 0x2ddee8: 0x1d9a0977  .word       0x1D9A0977                   # bgtz        $t4, . + 4 + (0x977 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DDEE8u;
    {
        const bool branch_taken_0x2ddee8 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x2DDEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEE8u;
        // 0x2ddeec: 0x9dda4137  lwu         $k0, 0x4137($t6) (Delay Slot)
        SET_GPR_U32(ctx, 26, READ32(ADD32(GPR_U32(ctx, 14), 16695)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddee8) {
            ctx->pc = 0x2E04C8u;
            return;
        }
    }
    ctx->pc = 0x2DDEF0u;
    // 0x2ddef0: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddef0u;
    // CACHE instruction (ignored)
    // 0x2ddef4: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddef4u;
    // CACHE instruction (ignored)
    // 0x2ddef8: 0x91de8137  lbu         $fp, -0x7EC9($t6)
    ctx->pc = 0x2ddef8u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2ddefc: 0x97dc8137  lhu         $gp, -0x7EC9($fp)
    ctx->pc = 0x2ddefcu;
    SET_GPR_U32(ctx, 28, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294934839)));
    // 0x2ddf00: 0xbdb48077  cache       0x14, -0x7F89($t5)
    ctx->pc = 0x2ddf00u;
    // CACHE instruction (ignored)
    // 0x2ddf04: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2ddf04u;
    // CACHE instruction (ignored)
    // 0x2ddf08: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2ddf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddf0c: 0xbdd28737  cache       0x12, -0x78C9($t6)
    ctx->pc = 0x2ddf0cu;
    // CACHE instruction (ignored)
    // 0x2ddf10: 0xbbf05137  swr         $s0, 0x5137($ra)
    ctx->pc = 0x2ddf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 20791); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddf14: 0x95da8137  lhu         $k0, -0x7EC9($t6)
    ctx->pc = 0x2ddf14u;
    SET_GPR_U32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2ddf18: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2ddf18u;
    // CACHE instruction (ignored)
    // 0x2ddf1c: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2ddf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddf20: 0x1f920d17  .word       0x1F920D17                   # bgtz        $gp, . + 4 + (0xD17 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DDF20u;
    {
        const bool branch_taken_0x2ddf20 = (GPR_S32(ctx, 28) > 0);
        ctx->pc = 0x2DDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF20u;
        // 0x2ddf24: 0x6c1024c9  ldr         $s0, 0x24C9($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9417); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf20) {
            ctx->pc = 0x2E1380u;
            return;
        }
    }
    ctx->pc = 0x2DDF28u;
    // 0x2ddf28: 0xb9d94d36  swr         $t9, 0x4D36($t6)
    ctx->pc = 0x2ddf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 19766); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddf2c: 0xae3675ab  sw          $s6, 0x75AB($s1)
    ctx->pc = 0x2ddf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30123), GPR_U32(ctx, 22));
    // 0x2ddf30: 0xee3664c9  .word       0xEE3664C9                   # INVALID     $s1, $s6, 0x64C9 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ddf30u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DDF30 raw=0xEE3664C9");
    // 0x2ddf34: 0xbfd88456  cache       0x18, -0x7BAA($fp)
    ctx->pc = 0x2ddf34u;
    // CACHE instruction (ignored)
    // 0x2ddf38: 0xbd920c27  cache       0x12, 0xC27($t4)
    ctx->pc = 0x2ddf38u;
    // CACHE instruction (ignored)
    // 0x2ddf3c: 0xbed875b1  cache       0x18, 0x75B1($s6)
    ctx->pc = 0x2ddf3cu;
    // CACHE instruction (ignored)
label_2ddf40:
    // 0x2ddf40: 0xafd88476  sw          $t8, -0x7B8A($fp)
    ctx->pc = 0x2ddf40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935670), GPR_U32(ctx, 24));
    // 0x2ddf44: 0x9fd87437  lwu         $t8, 0x7437($fp)
    ctx->pc = 0x2ddf44u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 30), 29751)));
    // 0x2ddf48: 0xafd875b9  sw          $t8, 0x75B9($fp)
    ctx->pc = 0x2ddf48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 30137), GPR_U32(ctx, 24));
    // 0x2ddf4c: 0xbfd88476  cache       0x18, -0x7B8A($fp)
    ctx->pc = 0x2ddf4cu;
    // CACHE instruction (ignored)
    // 0x2ddf50: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DDF50u;
    SET_GPR_U32(ctx, 31, 0x2DDF58u);
    ctx->pc = 0x2DDF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF50u;
    // 0x2ddf54: 0xbdd80d37  cache       0x18, 0xD37($t6) (Delay Slot)
    // CACHE instruction (ignored)
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DDF50u, 0x2DDF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF58u;
label_2ddf58:
    // 0x2ddf58: 0xb9d88536  swr         $t8, -0x7ACA($t6)
    ctx->pc = 0x2ddf58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935862); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddf5c: 0xbd988136  cache       0x18, -0x7ECA($t4)
    ctx->pc = 0x2ddf5cu;
    // CACHE instruction (ignored)
    // 0x2ddf60: 0x9d9a0976  lwu         $k0, 0x976($t4)
    ctx->pc = 0x2ddf60u;
    SET_GPR_U32(ctx, 26, READ32(ADD32(GPR_U32(ctx, 12), 2422)));
    // 0x2ddf64: 0x9dda4137  lwu         $k0, 0x4137($t6)
    ctx->pc = 0x2ddf64u;
    SET_GPR_U32(ctx, 26, READ32(ADD32(GPR_U32(ctx, 14), 16695)));
    // 0x2ddf68: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddf68u;
    // CACHE instruction (ignored)
    // 0x2ddf6c: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddf6cu;
    // CACHE instruction (ignored)
    // 0x2ddf70: 0x91de8137  lbu         $fp, -0x7EC9($t6)
    ctx->pc = 0x2ddf70u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2ddf74: 0x97dc8137  lhu         $gp, -0x7EC9($fp)
    ctx->pc = 0x2ddf74u;
    SET_GPR_U32(ctx, 28, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294934839)));
    // 0x2ddf78: 0xbdb48077  cache       0x14, -0x7F89($t5)
    ctx->pc = 0x2ddf78u;
    // CACHE instruction (ignored)
    // 0x2ddf7c: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2ddf7cu;
    // CACHE instruction (ignored)
    // 0x2ddf80: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2ddf80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddf84: 0xbdd28737  cache       0x12, -0x78C9($t6)
    ctx->pc = 0x2ddf84u;
    // CACHE instruction (ignored)
    // 0x2ddf88: 0xbbf85137  swr         $t8, 0x5137($ra)
    ctx->pc = 0x2ddf88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 20791); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddf8c: 0x95da8137  lhu         $k0, -0x7EC9($t6)
    ctx->pc = 0x2ddf8cu;
    SET_GPR_U32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2ddf90: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2ddf90u;
    // CACHE instruction (ignored)
    // 0x2ddf94: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2ddf94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddf98: 0x1f920d17  .word       0x1F920D17                   # bgtz        $gp, . + 4 + (0xD17 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DDF98u;
    {
        const bool branch_taken_0x2ddf98 = (GPR_S32(ctx, 28) > 0);
        ctx->pc = 0x2DDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF98u;
        // 0x2ddf9c: 0x6c1024c9  ldr         $s0, 0x24C9($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9417); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf98) {
            ctx->pc = 0x2E13F8u;
            return;
        }
    }
    ctx->pc = 0x2DDFA0u;
    // 0x2ddfa0: 0xb9d94d36  swr         $t9, 0x4D36($t6)
    ctx->pc = 0x2ddfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 19766); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddfa4: 0xae3675ab  sw          $s6, 0x75AB($s1)
    ctx->pc = 0x2ddfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30123), GPR_U32(ctx, 22));
    // 0x2ddfa8: 0xee3664c9  .word       0xEE3664C9                   # INVALID     $s1, $s6, 0x64C9 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ddfa8u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DDFA8 raw=0xEE3664C9");
label_2ddfac:
    // 0x2ddfac: 0xbfd88456  cache       0x18, -0x7BAA($fp)
    ctx->pc = 0x2ddfacu;
    // CACHE instruction (ignored)
    // 0x2ddfb0: 0xbd920c27  cache       0x12, 0xC27($t4)
    ctx->pc = 0x2ddfb0u;
    // CACHE instruction (ignored)
    // 0x2ddfb4: 0xbed875b1  cache       0x18, 0x75B1($s6)
    ctx->pc = 0x2ddfb4u;
    // CACHE instruction (ignored)
    // 0x2ddfb8: 0xafd88476  sw          $t8, -0x7B8A($fp)
    ctx->pc = 0x2ddfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294935670), GPR_U32(ctx, 24));
    // 0x2ddfbc: 0x9fd87437  lwu         $t8, 0x7437($fp)
    ctx->pc = 0x2ddfbcu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 30), 29751)));
    // 0x2ddfc0: 0xafd875b9  sw          $t8, 0x75B9($fp)
    ctx->pc = 0x2ddfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 30137), GPR_U32(ctx, 24));
    // 0x2ddfc4: 0xbfd88476  cache       0x18, -0x7B8A($fp)
    ctx->pc = 0x2ddfc4u;
    // CACHE instruction (ignored)
    // 0x2ddfc8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DDFC8u;
    SET_GPR_U32(ctx, 31, 0x2DDFD0u);
    ctx->pc = 0x2DDFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDFC8u;
    // 0x2ddfcc: 0xbdd80d37  cache       0x18, 0xD37($t6) (Delay Slot)
    // CACHE instruction (ignored)
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DDFC8u, 0x2DDFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFD0u;
label_2ddfd0:
    // 0x2ddfd0: 0xb9d88536  swr         $t8, -0x7ACA($t6)
    ctx->pc = 0x2ddfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935862); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddfd4: 0xbd988136  cache       0x18, -0x7ECA($t4)
    ctx->pc = 0x2ddfd4u;
    // CACHE instruction (ignored)
    // 0x2ddfd8: 0x1d9a0976  .word       0x1D9A0976                   # bgtz        $t4, . + 4 + (0x976 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DDFD8u;
    {
        const bool branch_taken_0x2ddfd8 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x2DDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFD8u;
        // 0x2ddfdc: 0x9dda4137  lwu         $k0, 0x4137($t6) (Delay Slot)
        SET_GPR_U32(ctx, 26, READ32(ADD32(GPR_U32(ctx, 14), 16695)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfd8) {
            ctx->pc = 0x2E05B4u;
            return;
        }
    }
    ctx->pc = 0x2DDFE0u;
    // 0x2ddfe0: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddfe0u;
    // CACHE instruction (ignored)
    // 0x2ddfe4: 0xbdd80d37  cache       0x18, 0xD37($t6)
    ctx->pc = 0x2ddfe4u;
    // CACHE instruction (ignored)
    // 0x2ddfe8: 0x91de8137  lbu         $fp, -0x7EC9($t6)
    ctx->pc = 0x2ddfe8u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2ddfec: 0x97dc8137  lhu         $gp, -0x7EC9($fp)
    ctx->pc = 0x2ddfecu;
    SET_GPR_U32(ctx, 28, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294934839)));
    // 0x2ddff0: 0xbdb48077  cache       0x14, -0x7F89($t5)
    ctx->pc = 0x2ddff0u;
    // CACHE instruction (ignored)
    // 0x2ddff4: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2ddff4u;
    // CACHE instruction (ignored)
    // 0x2ddff8: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2ddff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ddffc: 0xbdd28737  cache       0x12, -0x78C9($t6)
    ctx->pc = 0x2ddffcu;
    // CACHE instruction (ignored)
    // 0x2de000: 0xbbf05137  swr         $s0, 0x5137($ra)
    ctx->pc = 0x2de000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 20791); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2de004: 0x95da8137  lhu         $k0, -0x7EC9($t6)
    ctx->pc = 0x2de004u;
    SET_GPR_U32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294934839)));
    // 0x2de008: 0xbd108137  cache       0x10, -0x7EC9($t0)
    ctx->pc = 0x2de008u;
    // CACHE instruction (ignored)
    // 0x2de00c: 0xa9d88537  swl         $t8, -0x7AC9($t6)
    ctx->pc = 0x2de00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294935863); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2de010: 0x1f920d17  .word       0x1F920D17                   # bgtz        $gp, . + 4 + (0xD17 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DE010u;
    {
        const bool branch_taken_0x2de010 = (GPR_S32(ctx, 28) > 0);
        ctx->pc = 0x2DE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE010u;
        // 0x2de014: 0x6c1024c9  ldr         $s0, 0x24C9($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 9417); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de010) {
            ctx->pc = 0x2E1470u;
            return;
        }
    }
    ctx->pc = 0x2DE018u;
    // 0x2de018: 0xb9d94d36  swr         $t9, 0x4D36($t6)
    ctx->pc = 0x2de018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 19766); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 25); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2de01c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DE01Cu;
    {
        const bool branch_taken_0x2de01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de01c) {
            ctx->pc = 0x2DE04Cu;
            goto label_2de04c;
        }
    }
    ctx->pc = 0x2DE024u;
label_2de024:
    // 0x2de024: 0x8f0bd205  lw          $t3, -0x2DFB($t8)
    ctx->pc = 0x2de024u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294955525)));
    // 0x2de028: 0x86fbfbcb  lh          $k1, -0x435($s7)
    ctx->pc = 0x2de028u;
    SET_GPR_S32(ctx, 27, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4294966219)));
    // 0x2de02c: 0x85708cab  lh          $s0, -0x7355($t3)
    ctx->pc = 0x2de02cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294937771)));
    // 0x2de030: 0x26a60678  addiu       $a2, $s5, 0x678
    ctx->pc = 0x2de030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1656));
    // 0x2de034: 0x25682110  addiu       $t0, $t3, 0x2110
    ctx->pc = 0x2de034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 8464));
    // 0x2de038: 0x856feff3  lh          $t7, -0x100D($t3)
    ctx->pc = 0x2de038u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294963187)));
    // 0x2de03c: 0x61b7d2f7  daddi       $s7, $t5, -0x2D09
    ctx->pc = 0x2de03cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 13); int64_t imm = (int64_t)(int32_t)4294955767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
    // 0x2de040: 0xc7131237  lwc1        $f19, 0x1237($t8)
    ctx->pc = 0x2de040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4663)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2de044: 0x61b7d10f  daddi       $s7, $t5, -0x2EF1
    ctx->pc = 0x2de044u;
    { int64_t src = (int64_t)GPR_S64(ctx, 13); int64_t imm = (int64_t)(int32_t)4294955279; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
    // 0x2de048: 0x0  nop
    ctx->pc = 0x2de048u;
    // NOP
label_2de04c:
    // 0x2de04c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2de04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2de050: 0x2442e03c  addiu       $v0, $v0, -0x1FC4
    ctx->pc = 0x2de050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959164));
    // 0x2de054: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2de054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2de058: 0x2484e01c  addiu       $a0, $a0, -0x1FE4
    ctx->pc = 0x2de058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959132));
    // 0x2de05c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2de05cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de060: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2de060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2de064: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DE064u;
    SET_GPR_U32(ctx, 31, 0x2DE06Cu);
    ctx->pc = 0x2DE068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE064u;
    // 0x2de068: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DE064u, 0x2DE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE06Cu;
label_2de06c:
    // 0x2de06c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2de06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de070: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2de070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de074: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2de074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2de078: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2de078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de07c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2de07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2de080: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2de080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2de084: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2de084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2de088: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2de088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2de08c: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x2de08cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2de090: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2de090u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2de094: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2de094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2de098: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x2de098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2de09c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2de09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2de0a0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2de0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2de0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE0A4u;
        // 0x2de0a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE0ACu;
    // 0x2de0ac: 0x0  nop
    ctx->pc = 0x2de0acu;
    // NOP
}
