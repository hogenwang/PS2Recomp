#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275D00
// Address: 0x275d00 - 0x2766f0
void sub_00275D00_0x275d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275D00_0x275d00");
#endif

    switch (ctx->pc) {
        case 0x275d5cu: goto label_275d5c;
        case 0x275d78u: goto label_275d78;
        case 0x275dc4u: goto label_275dc4;
        case 0x275e20u: goto label_275e20;
        case 0x275e70u: goto label_275e70;
        case 0x275ea8u: goto label_275ea8;
        case 0x275ef8u: goto label_275ef8;
        case 0x275f48u: goto label_275f48;
        case 0x275fa0u: goto label_275fa0;
        case 0x275fe0u: goto label_275fe0;
        case 0x276028u: goto label_276028;
        case 0x27604cu: goto label_27604c;
        case 0x276070u: goto label_276070;
        case 0x2760b0u: goto label_2760b0;
        case 0x276138u: goto label_276138;
        case 0x276188u: goto label_276188;
        case 0x2761d8u: goto label_2761d8;
        case 0x276230u: goto label_276230;
        case 0x2762d8u: goto label_2762d8;
        case 0x276328u: goto label_276328;
        case 0x276404u: goto label_276404;
        case 0x27645cu: goto label_27645c;
        case 0x276474u: goto label_276474;
        case 0x276494u: goto label_276494;
        case 0x2764b8u: goto label_2764b8;
        case 0x2764f8u: goto label_2764f8;
        case 0x27652cu: goto label_27652c;
        case 0x276538u: goto label_276538;
        case 0x276540u: goto label_276540;
        case 0x27656cu: goto label_27656c;
        case 0x2765d0u: goto label_2765d0;
        case 0x2765e8u: goto label_2765e8;
        case 0x2765f0u: goto label_2765f0;
        case 0x276668u: goto label_276668;
        case 0x276670u: goto label_276670;
        case 0x2766c4u: goto label_2766c4;
        default: break;
    }

    ctx->pc = 0x275d00u;

    // 0x275d00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x275d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x275d04: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x275d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x275d08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d0c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x275d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x275d10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x275d10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x275d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x275d18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x275d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x275d1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x275d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x275d20: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x275d20u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x275d24: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x275d24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x275d28: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x275d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x275d2c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x275d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x275d30: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x275d34: 0x24635d7c  addiu       $v1, $v1, 0x5D7C
    ctx->pc = 0x275d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23932));
    // 0x275d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275d3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275D3Cu;
    {
        const bool branch_taken_0x275d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275d3c) {
            ctx->pc = 0x275D5Cu;
            goto label_275d5c;
        }
    }
    ctx->pc = 0x275D44u;
    // 0x275d44: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x275d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275d48: 0x24845d90  addiu       $a0, $a0, 0x5D90
    ctx->pc = 0x275d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
    // 0x275d4c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x275d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x275d50: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x275d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x275d54: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x275D54u;
    SET_GPR_U32(ctx, 31, 0x275D5Cu);
    ctx->pc = 0x275D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D54u;
            // 0x275d58: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D5Cu; }
        if (ctx->pc != 0x275D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D5Cu; }
        if (ctx->pc != 0x275D5Cu) { return; }
    }
    ctx->pc = 0x275D5Cu;
label_275d5c:
    // 0x275d5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275D5Cu;
    {
        const bool branch_taken_0x275d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275d5c) {
            ctx->pc = 0x275D90u;
            goto label_275d90;
        }
    }
    ctx->pc = 0x275D64u;
    // 0x275d64: 0xfe4eee32  sd          $t6, -0x11CE($s2)
    ctx->pc = 0x275d64u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294962738), GPR_U64(ctx, 14));
    // 0x275d68: 0x26ce27e8  addiu       $t6, $s6, 0x27E8
    ctx->pc = 0x275d68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 22), 10216));
    // 0x275d6c: 0x8dce408d  lw          $t6, 0x408D($t6)
    ctx->pc = 0x275d6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16525)));
    // 0x275d70: 0xc44c343  jal         func_1130D0C
    ctx->pc = 0x275D70u;
    SET_GPR_U32(ctx, 31, 0x275D78u);
    ctx->pc = 0x275D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275D70u;
            // 0x275d74: 0xfeedd462  sd          $t5, -0x2B9E($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 4294956130), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1130D0Cu;
    {
        auto targetFn = runtime->lookupFunction(0x1130D0Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275D78u; }
        if (ctx->pc != 0x275D78u) { return; }
    }
    ctx->pc = 0x275D78u;
label_275d78:
    // 0x275d78: 0x8e426685  lw          $v0, 0x6685($s2)
    ctx->pc = 0x275d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 26245)));
    // 0x275d7c: 0x0  nop
    ctx->pc = 0x275d7cu;
    // NOP
    // 0x275d80: 0xb314433c  sdl         $s4, 0x433C($t8)
    ctx->pc = 0x275d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 17212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275d84: 0x9806e032  lwr         $a2, -0x1FCE($zero)
    ctx->pc = 0x275d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959154); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x275d88: 0xb31444e0  sdl         $s4, 0x44E0($t8)
    ctx->pc = 0x275d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 17632); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275d8c: 0x0  nop
    ctx->pc = 0x275d8cu;
    // NOP
label_275d90:
    // 0x275d90: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x275d90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x275d94: 0x26032d78  addiu       $v1, $s0, 0x2D78
    ctx->pc = 0x275d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x275d98: 0x104003c  .word       0x0104003C                   # dsll32      $zero, $a0, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275d98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) << (32 + 0));
    // 0x275d9c: 0x21832000  addi        $v1, $t4, 0x2000
    ctx->pc = 0x275d9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)8192, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x275da0: 0x3884078c  xori        $a0, $a0, 0x78C
    ctx->pc = 0x275da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1932);
    // 0x275da4: 0x9782ff28  lhu         $v0, -0xD8($gp)
    ctx->pc = 0x275da4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294967080)));
    // 0x275da8: 0x19400010  blez        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x275DA8u;
    {
        const bool branch_taken_0x275da8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x275DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275DA8u;
            // 0x275dac: 0x9902ff24  lwr         $v0, -0xDC($t0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294967076); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275da8) {
            ctx->pc = 0x275DECu;
            goto label_275dec;
        }
    }
    ctx->pc = 0x275DB0u;
    // 0x275db0: 0x9582ff28  lhu         $v0, -0xD8($t4)
    ctx->pc = 0x275db0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294967080)));
    // 0x275db4: 0xba400010  swr         $zero, 0x10($s2)
    ctx->pc = 0x275db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275db8: 0x3882ff28  xori        $v0, $a0, 0xFF28
    ctx->pc = 0x275db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)65320);
    // 0x275dbc: 0xc400010  jal         func_1000040
    ctx->pc = 0x275DBCu;
    SET_GPR_U32(ctx, 31, 0x275DC4u);
    ctx->pc = 0x275DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275DBCu;
            // 0x275dc0: 0x9302ff24  lbu         $v0, -0xDC($t8) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 4294967076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000040u;
    {
        auto targetFn = runtime->lookupFunction(0x1000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275DC4u; }
        if (ctx->pc != 0x275DC4u) { return; }
    }
    ctx->pc = 0x275DC4u;
label_275dc4:
    // 0x275dc4: 0x3482ff28  ori         $v0, $a0, 0xFF28
    ctx->pc = 0x275dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65320);
    // 0x275dc8: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x275dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275dcc: 0x4482fd28  .word       0x4482FD28                   # mtc1        $v0, $f31 # 00000528 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x275dd0: 0x7f400110  sq          $zero, 0x110($k0)
    ctx->pc = 0x275dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 0));
    // 0x275dd4: 0x26022d78  addiu       $v0, $s0, 0x2D78
    ctx->pc = 0x275dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x275dd8: 0x4182fd28  .word       0x4182FD28                   # INVALID     $t4, $v0, -0x2D8 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x275dd8u;
    // Unhandled COP0 instruction format: 0xC
    // 0x275ddc: 0x7c400114  sq          $zero, 0x114($v0)
    ctx->pc = 0x275ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 276), GPR_VEC(ctx, 0));
    // 0x275de0: 0x26022d78  addiu       $v0, $s0, 0x2D78
    ctx->pc = 0x275de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x275de4: 0x24000110  addiu       $zero, $zero, 0x110
    ctx->pc = 0x275de4u;
    // NOP (addiu $zero, ...)
    // 0x275de8: 0x26042d78  addiu       $a0, $s0, 0x2D78
    ctx->pc = 0x275de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
label_275dec:
    // 0x275dec: 0x0  nop
    ctx->pc = 0x275decu;
    // NOP
    // 0x275df0: 0x89820010  lwl         $v0, 0x10($t4)
    ctx->pc = 0x275df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x275df4: 0x9482ff28  lhu         $v0, -0xD8($a0)
    ctx->pc = 0x275df4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967080)));
    // 0x275df8: 0x75400010  .word       0x75400010                   # INVALID     $t2, $zero, 0x10 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275df8u;
    // Unhandled opcode: 0x1D
    // 0x275dfc: 0x9202ff24  lbu         $v0, -0xDC($s0)
    ctx->pc = 0x275dfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967076)));
    // 0x275e00: 0x97820010  lhu         $v0, 0x10($gp)
    ctx->pc = 0x275e00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 16)));
    // 0x275e04: 0x26022d78  addiu       $v0, $s0, 0x2D78
    ctx->pc = 0x275e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x275e08: 0x71000110  .word       0x71000110                   # mfhi1       $zero # 01000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275e08u;
    SET_GPR_U64(ctx, 0, ctx->hi1);
    // 0x275e0c: 0x0  nop
    ctx->pc = 0x275e0cu;
    // NOP
    // 0x275e10: 0x37820010  ori         $v0, $gp, 0x10
    ctx->pc = 0x275e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 28) | (uint64_t)(uint16_t)16);
    // 0x275e14: 0x9a82ff28  lwr         $v0, -0xD8($s4)
    ctx->pc = 0x275e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294967080); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x275e18: 0x9400010  j           func_5000040
    ctx->pc = 0x275E18u;
    ctx->pc = 0x275E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275E18u;
            // 0x275e1c: 0x9b02ff24  lwr         $v0, -0xDC($t8) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294967076); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x5000040u;
    {
        auto targetFn = runtime->lookupFunction(0x5000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x275E20u;
label_275e20:
    // 0x275e20: 0x9702ff24  lhu         $v0, -0xDC($t8)
    ctx->pc = 0x275e20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294967076)));
    // 0x275e24: 0x5a820010  .word       0x5A820010                   # blezl       $s4, . + 4 + (0x10 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275E24u;
    {
        const bool branch_taken_0x275e24 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x275e24) {
            ctx->pc = 0x275E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275E24u;
            // 0x275e28: 0x9802ff24  lwr         $v0, -0xDC($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294967076); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x275E68u;
            goto label_275e68;
        }
    }
    ctx->pc = 0x275E2Cu;
    // 0x275e2c: 0x44820010  .word       0x44820010                   # mtc1        $v0, $f0 # 00000010 <InstrIdType: R5900_COP1>
    ctx->pc = 0x275e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275e30: 0x26022d78  addiu       $v0, $s0, 0x2D78
    ctx->pc = 0x275e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x275e34: 0x66000110  daddiu      $zero, $s0, 0x110
    ctx->pc = 0x275e34u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)272);
    // 0x275e38: 0x0  nop
    ctx->pc = 0x275e38u;
    // NOP
    // 0x275e3c: 0x0  nop
    ctx->pc = 0x275e3cu;
    // NOP
    // 0x275e40: 0x7820010  bltzl       $gp, . + 4 + (0x10 << 2)
    ctx->pc = 0x275E40u;
    {
        const bool branch_taken_0x275e40 = (GPR_S32(ctx, 28) < 0);
        if (branch_taken_0x275e40) {
            ctx->pc = 0x275E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275E40u;
            // 0x275e44: 0x9b82ff28  lwr         $v0, -0xD8($gp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294967080); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x275E84u;
            goto label_275e84;
        }
    }
    ctx->pc = 0x275E48u;
    // 0x275e48: 0x15400014  bnez        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x275E48u;
    {
        const bool branch_taken_0x275e48 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x275e48) {
            ctx->pc = 0x275E9Cu;
            goto label_275e9c;
        }
    }
    ctx->pc = 0x275E50u;
    // 0x275e50: 0x7e800110  sq          $zero, 0x110($s4)
    ctx->pc = 0x275e50u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 272), GPR_VEC(ctx, 0));
    // 0x275e54: 0x26022d78  addiu       $v0, $s0, 0x2D78
    ctx->pc = 0x275e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x275e58: 0x5d000110  bgtzl       $t0, . + 4 + (0x110 << 2)
    ctx->pc = 0x275E58u;
    {
        const bool branch_taken_0x275e58 = (GPR_S32(ctx, 8) > 0);
        if (branch_taken_0x275e58) {
            ctx->pc = 0x27629Cu;
            goto label_27629c;
        }
    }
    ctx->pc = 0x275E60u;
    // 0x275e60: 0x9000010  j           func_4000040
    ctx->pc = 0x275E60u;
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x275E68u;
label_275e68:
    // 0x275e68: 0x0  nop
    ctx->pc = 0x275e68u;
    // NOP
    // 0x275e6c: 0x0  nop
    ctx->pc = 0x275e6cu;
    // NOP
label_275e70:
    // 0x275e70: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x275e70u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x275e74: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x275e74u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x275e78: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275e78u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x275e7c: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x275e7cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x275e80: 0x62737579  daddi       $s3, $s3, 0x7579
    ctx->pc = 0x275e80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30073; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_275e84:
    // 0x275e84: 0x0  nop
    ctx->pc = 0x275e84u;
    // NOP
    // 0x275e88: 0x0  nop
    ctx->pc = 0x275e88u;
    // NOP
    // 0x275e8c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275e90: 0x24425e70  addiu       $v0, $v0, 0x5E70
    ctx->pc = 0x275e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24176));
    // 0x275e94: 0xa2000110  sb          $zero, 0x110($s0)
    ctx->pc = 0x275e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x275e98: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275e98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
label_275e9c:
    // 0x275e9c: 0x0  nop
    ctx->pc = 0x275e9cu;
    // NOP
    // 0x275ea0: 0xd000010  jal         func_4000040
    ctx->pc = 0x275EA0u;
    SET_GPR_U32(ctx, 31, 0x275EA8u);
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EA8u; }
        if (ctx->pc != 0x275EA8u) { return; }
    }
    ctx->pc = 0x275EA8u;
label_275ea8:
    // 0x275ea8: 0x0  nop
    ctx->pc = 0x275ea8u;
    // NOP
    // 0x275eac: 0x0  nop
    ctx->pc = 0x275eacu;
    // NOP
    // 0x275eb0: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x275eb0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x275eb4: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x275eb4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x275eb8: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275eb8u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x275ebc: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x275ebcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x275ec0: 0x6266656f  daddi       $a2, $s3, 0x656F
    ctx->pc = 0x275ec0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)25967; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x275ec4: 0x725f6564  .word       0x725F6564                   # INVALID     $s2, $ra, 0x6564 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275ec4u;
    // Unhandled MMI instruction: function 0x24
    // 0x275ec8: 0x6e73615f  ldr         $s3, 0x615F($s3)
    ctx->pc = 0x275ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x275ecc: 0x73726576  .word       0x73726576                   # psrlh       $t4, $s2, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275eccu;
    SET_GPR_VEC(ctx, 12, _mm_srli_epi16(GPR_VEC(ctx, 18), 21));
    // 0x275ed0: 0x69656300  ldl         $a1, 0x6300($t3)
    ctx->pc = 0x275ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x275ed4: 0x0  nop
    ctx->pc = 0x275ed4u;
    // NOP
    // 0x275ed8: 0x0  nop
    ctx->pc = 0x275ed8u;
    // NOP
    // 0x275edc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275ee0: 0x24425eb0  addiu       $v0, $v0, 0x5EB0
    ctx->pc = 0x275ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24240));
    // 0x275ee4: 0x8e000110  lw          $zero, 0x110($s0)
    ctx->pc = 0x275ee4u;
    SET_GPR_S32(ctx, 0, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x275ee8: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275ee8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x275eec: 0x0  nop
    ctx->pc = 0x275eecu;
    // NOP
    // 0x275ef0: 0xd000010  jal         func_4000040
    ctx->pc = 0x275EF0u;
    SET_GPR_U32(ctx, 31, 0x275EF8u);
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275EF8u; }
        if (ctx->pc != 0x275EF8u) { return; }
    }
    ctx->pc = 0x275EF8u;
label_275ef8:
    // 0x275ef8: 0x0  nop
    ctx->pc = 0x275ef8u;
    // NOP
    // 0x275efc: 0x0  nop
    ctx->pc = 0x275efcu;
    // NOP
    // 0x275f00: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x275f00u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x275f04: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x275f04u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x275f08: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275f08u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x275f0c: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x275f0cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x275f10: 0x61746665  daddi       $s4, $t3, 0x6665
    ctx->pc = 0x275f10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x275f14: 0x72645f6e  .word       0x72645F6E                   # INVALID     $s3, $a0, 0x5F6E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275f14u;
    // Unhandled MMI instruction: function 0x2E
    // 0x275f18: 0x615f7373  daddi       $ra, $t2, 0x7373
    ctx->pc = 0x275f18u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29555; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x275f1c: 0x65767269  daddiu      $s6, $t3, 0x7269
    ctx->pc = 0x275f1cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29289);
    // 0x275f20: 0x63006500  daddi       $zero, $t8, 0x6500
    ctx->pc = 0x275f20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 24); int64_t imm = (int64_t)(int32_t)25856; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x275f24: 0x0  nop
    ctx->pc = 0x275f24u;
    // NOP
    // 0x275f28: 0x0  nop
    ctx->pc = 0x275f28u;
    // NOP
    // 0x275f2c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275f30: 0x24425f00  addiu       $v0, $v0, 0x5F00
    ctx->pc = 0x275f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24320));
    // 0x275f34: 0x7a000110  lq          $zero, 0x110($s0)
    ctx->pc = 0x275f34u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x275f38: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x275f3c: 0x0  nop
    ctx->pc = 0x275f3cu;
    // NOP
    // 0x275f40: 0xd000010  jal         func_4000040
    ctx->pc = 0x275F40u;
    SET_GPR_U32(ctx, 31, 0x275F48u);
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275F48u; }
        if (ctx->pc != 0x275F48u) { return; }
    }
    ctx->pc = 0x275F48u;
label_275f48:
    // 0x275f48: 0x0  nop
    ctx->pc = 0x275f48u;
    // NOP
    // 0x275f4c: 0x0  nop
    ctx->pc = 0x275f4cu;
    // NOP
    // 0x275f50: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x275f50u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x275f54: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x275f54u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x275f58: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275f58u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x275f5c: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x275f5cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x275f60: 0x64616e73  daddiu      $at, $v1, 0x6E73
    ctx->pc = 0x275f60u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28275);
    // 0x275f64: 0x5f657372  .word       0x5F657372                   # bgtzl       $k1, . + 4 + (0x7372 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275F64u;
    {
        const bool branch_taken_0x275f64 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x275f64) {
            ctx->pc = 0x275F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275F64u;
            // 0x275f68: 0x76636965  .word       0x76636965                   # INVALID     $s3, $v1, 0x6965 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x1D
        ctx->in_delay_slot = false;
            ctx->pc = 0x292D30u;
            return;
        }
    }
    ctx->pc = 0x275F6Cu;
    // 0x275f6c: 0x5f69666e  .word       0x5F69666E                   # bgtzl       $k1, . + 4 + (0x666E << 2) # 00090000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275F6Cu;
    {
        const bool branch_taken_0x275f6c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x275f6c) {
            ctx->pc = 0x275F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275F6Cu;
            // 0x275f70: 0x69687365  ldl         $t0, 0x7365($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F928u;
            return;
        }
    }
    ctx->pc = 0x275F74u;
    // 0x275f74: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x275f74u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
    // 0x275f78: 0x0  nop
    ctx->pc = 0x275f78u;
    // NOP
    // 0x275f7c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275f80: 0x24425f50  addiu       $v0, $v0, 0x5F50
    ctx->pc = 0x275f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24400));
    // 0x275f84: 0x66000110  daddiu      $zero, $s0, 0x110
    ctx->pc = 0x275f84u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)272);
    // 0x275f88: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275f88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x275f8c: 0x0  nop
    ctx->pc = 0x275f8cu;
    // NOP
    // 0x275f90: 0x9000010  j           func_4000040
    ctx->pc = 0x275F90u;
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x275F98u;
    // 0x275f98: 0x0  nop
    ctx->pc = 0x275f98u;
    // NOP
    // 0x275f9c: 0x0  nop
    ctx->pc = 0x275f9cu;
    // NOP
label_275fa0:
    // 0x275fa0: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x275fa0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x275fa4: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x275fa4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x275fa8: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275fa8u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x275fac: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x275facu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x275fb0: 0x746d6965  .word       0x746D6965                   # INVALID     $v1, $t5, 0x6965 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275fb0u;
    // Unhandled opcode: 0x1D
    // 0x275fb4: 0x6f747500  ldr         $s4, 0x7500($k1)
    ctx->pc = 0x275fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x275fb8: 0x0  nop
    ctx->pc = 0x275fb8u;
    // NOP
    // 0x275fbc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x275fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x275fc0: 0x24425fa0  addiu       $v0, $v0, 0x5FA0
    ctx->pc = 0x275fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24480));
    // 0x275fc4: 0x56000110  bnel        $s0, $zero, . + 4 + (0x110 << 2)
    ctx->pc = 0x275FC4u;
    {
        const bool branch_taken_0x275fc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x275fc4) {
            ctx->pc = 0x275FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275FC4u;
            // 0x275fc8: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276408u;
            goto label_276408;
        }
    }
    ctx->pc = 0x275FCCu;
    // 0x275fcc: 0x0  nop
    ctx->pc = 0x275fccu;
    // NOP
    // 0x275fd0: 0xb000010  j           func_C000040
    ctx->pc = 0x275FD0u;
    ctx->pc = 0xC000040u;
    {
        auto targetFn = runtime->lookupFunction(0xC000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x275FD8u;
    // 0x275fd8: 0x0  nop
    ctx->pc = 0x275fd8u;
    // NOP
    // 0x275fdc: 0x0  nop
    ctx->pc = 0x275fdcu;
    // NOP
label_275fe0:
    // 0x275fe0: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x275fe0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x275fe4: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x275fe4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x275fe8: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275fe8u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x275fec: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x275fecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x275ff0: 0x65747865  daddiu      $s4, $t3, 0x7865
    ctx->pc = 0x275ff0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30821);
    // 0x275ff4: 0x72616e6c  .word       0x72616E6C                   # INVALID     $s3, $at, 0x6E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x275ff4u;
    // Unhandled MMI instruction: function 0x2C
    // 0x275ff8: 0x5f726572  .word       0x5F726572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275FF8u;
    {
        const bool branch_taken_0x275ff8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x275ff8) {
            ctx->pc = 0x275FFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x275FF8u;
            // 0x275ffc: 0x6f007200  ldr         $zero, 0x7200($t8) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 24), 29184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F5C4u;
            return;
        }
    }
    ctx->pc = 0x276000u;
    // 0x276000: 0x0  nop
    ctx->pc = 0x276000u;
    // NOP
    // 0x276004: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276008: 0x24425fe0  addiu       $v0, $v0, 0x5FE0
    ctx->pc = 0x276008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24544));
    // 0x27600c: 0x44000110  .word       0x44000110                   # mfc1        $zero, $f0 # 00000110 <InstrIdType: R5900_COP1>
    ctx->pc = 0x27600cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
    // 0x276010: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276010u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x276014: 0x0  nop
    ctx->pc = 0x276014u;
    // NOP
    // 0x276018: 0xb000010  j           func_C000040
    ctx->pc = 0x276018u;
    ctx->pc = 0xC000040u;
    {
        auto targetFn = runtime->lookupFunction(0xC000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x276020u;
    // 0x276020: 0x0  nop
    ctx->pc = 0x276020u;
    // NOP
    // 0x276024: 0x0  nop
    ctx->pc = 0x276024u;
    // NOP
label_276028:
    // 0x276028: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x276028u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x27602c: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x27602cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x276030: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276030u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x276034: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x276034u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x276038: 0x64666966  daddiu      $a2, $v1, 0x6966
    ctx->pc = 0x276038u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26982);
    // 0x27603c: 0x6565726e  daddiu      $a1, $t3, 0x726E
    ctx->pc = 0x27603cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29294);
    // 0x276040: 0x74685f64  .word       0x74685F64                   # INVALID     $v1, $t0, 0x5F64 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x276040u;
    // Unhandled opcode: 0x1D
    // 0x276044: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x276044u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
    // 0x276048: 0x0  nop
    ctx->pc = 0x276048u;
    // NOP
label_27604c:
    // 0x27604c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276050: 0x24426028  addiu       $v0, $v0, 0x6028
    ctx->pc = 0x276050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24616));
    // 0x276054: 0x32000110  andi        $zero, $s0, 0x110
    ctx->pc = 0x276054u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)272);
    // 0x276058: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276058u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x27605c: 0x0  nop
    ctx->pc = 0x27605cu;
    // NOP
    // 0x276060: 0x9000010  j           func_4000040
    ctx->pc = 0x276060u;
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x276068u;
    // 0x276068: 0x0  nop
    ctx->pc = 0x276068u;
    // NOP
    // 0x27606c: 0x0  nop
    ctx->pc = 0x27606cu;
    // NOP
label_276070:
    // 0x276070: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x276070u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x276074: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x276074u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x276078: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276078u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x27607c: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x27607cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x276080: 0x616c6c5f  daddi       $t4, $t3, 0x6C5F
    ctx->pc = 0x276080u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27743; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
    // 0x276084: 0x6f006b00  ldr         $zero, 0x6B00($t8)
    ctx->pc = 0x276084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 27392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x276088: 0x0  nop
    ctx->pc = 0x276088u;
    // NOP
    // 0x27608c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276090: 0x24426070  addiu       $v0, $v0, 0x6070
    ctx->pc = 0x276090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24688));
    // 0x276094: 0x22000110  addi        $zero, $s0, 0x110
    ctx->pc = 0x276094u;
    // NOP (addi to $zero)
    // 0x276098: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276098u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x27609c: 0x0  nop
    ctx->pc = 0x27609cu;
    // NOP
    // 0x2760a0: 0x9000010  j           func_4000040
    ctx->pc = 0x2760A0u;
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2760A8u;
    // 0x2760a8: 0x0  nop
    ctx->pc = 0x2760a8u;
    // NOP
    // 0x2760ac: 0x0  nop
    ctx->pc = 0x2760acu;
    // NOP
label_2760b0:
    // 0x2760b0: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x2760b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x2760b4: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x2760b4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x2760b8: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2760b8u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x2760bc: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x2760bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x2760c0: 0x62737579  daddi       $s3, $s3, 0x7579
    ctx->pc = 0x2760c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30073; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
    // 0x2760c4: 0x0  nop
    ctx->pc = 0x2760c4u;
    // NOP
    // 0x2760c8: 0x0  nop
    ctx->pc = 0x2760c8u;
    // NOP
    // 0x2760cc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2760ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2760d0: 0x244260b0  addiu       $v0, $v0, 0x60B0
    ctx->pc = 0x2760d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24752));
    // 0x2760d4: 0x12000110  beqz        $s0, . + 4 + (0x110 << 2)
    ctx->pc = 0x2760D4u;
    {
        const bool branch_taken_0x2760d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2760D4u;
            // 0x2760d8: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760d4) {
            ctx->pc = 0x276518u;
            goto label_276518;
        }
    }
    ctx->pc = 0x2760DCu;
    // 0x2760dc: 0x0  nop
    ctx->pc = 0x2760dcu;
    // NOP
    // 0x2760e0: 0x102003c  .word       0x0102003C                   # dsll32      $zero, $v0, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2760e4: 0x21431000  addi        $v1, $t2, 0x1000
    ctx->pc = 0x2760e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)4096, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x2760e8: 0x884206dc  lwl         $v0, 0x6DC($v0)
    ctx->pc = 0x2760e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1756); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2760ec: 0x32224  .word       0x00032224                   # and         $a0, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2760ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 3));
    // 0x2760f0: 0x423f30  tge         $v0, $v0, 252
    ctx->pc = 0x2760f0u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x2760f4: 0xd5430014  ldc1        $f3, 0x14($t2)
    ctx->pc = 0x2760f4u;
    // Unhandled opcode: 0x35
    // 0x2760f8: 0x3502ff24  ori         $v0, $t0, 0xFF24
    ctx->pc = 0x2760f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65316);
    // 0x2760fc: 0x34820010  ori         $v0, $a0, 0x10
    ctx->pc = 0x2760fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x276100: 0x3682ff28  ori         $v0, $s4, 0xFF28
    ctx->pc = 0x276100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65320);
    // 0x276104: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x276104u;
    {
        const bool branch_taken_0x276104 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x276108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276104u;
            // 0x276108: 0x3602ff24  ori         $v0, $s0, 0xFF24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65316);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276104) {
            ctx->pc = 0x276148u;
            goto label_276148;
        }
    }
    ctx->pc = 0x27610Cu;
    // 0x27610c: 0x3402ff24  ori         $v0, $zero, 0xFF24
    ctx->pc = 0x27610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65316);
    // 0x276110: 0x45820010  .word       0x45820010                   # INVALID     $t4, $v0, 0x10 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x276110u;
    // Unhandled FPU instruction: format 0xC, function 0x10
    // 0x276114: 0x0  nop
    ctx->pc = 0x276114u;
    // NOP
    // 0x276118: 0x57000010  bnel        $t8, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x276118u;
    {
        const bool branch_taken_0x276118 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x276118) {
            ctx->pc = 0x27611Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276118u;
            // 0x27611c: 0x26042d78  addiu       $a0, $s0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27615Cu;
            goto label_27615c;
        }
    }
    ctx->pc = 0x276120u;
    // 0x276120: 0x17820010  bne         $gp, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x276120u;
    {
        const bool branch_taken_0x276120 = (GPR_U64(ctx, 28) != GPR_U64(ctx, 2));
        ctx->pc = 0x276124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276120u;
            // 0x276124: 0x3702ff24  ori         $v0, $t8, 0xFF24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)65316);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276120) {
            ctx->pc = 0x276164u;
            goto label_276164;
        }
    }
    ctx->pc = 0x276128u;
    // 0x276128: 0x53820054  beql        $gp, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x276128u;
    {
        const bool branch_taken_0x276128 = (GPR_U64(ctx, 28) == GPR_U64(ctx, 2));
        if (branch_taken_0x276128) {
            ctx->pc = 0x27612Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276128u;
            // 0x27612c: 0x26042d78  addiu       $a0, $s0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27627Cu;
            goto label_27627c;
        }
    }
    ctx->pc = 0x276130u;
    // 0x276130: 0xd000010  jal         func_4000040
    ctx->pc = 0x276130u;
    SET_GPR_U32(ctx, 31, 0x276138u);
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276138u; }
        if (ctx->pc != 0x276138u) { return; }
    }
    ctx->pc = 0x276138u;
label_276138:
    // 0x276138: 0x0  nop
    ctx->pc = 0x276138u;
    // NOP
    // 0x27613c: 0x0  nop
    ctx->pc = 0x27613cu;
    // NOP
    // 0x276140: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x276140u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x276144: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x276144u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
label_276148:
    // 0x276148: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276148u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x27614c: 0x2f6f6477  sltiu       $t7, $k1, 0x6477
    ctx->pc = 0x27614cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25719) ? 1 : 0);
    // 0x276150: 0x6e725f65  ldr         $s2, 0x5F65($s3)
    ctx->pc = 0x276150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x276154: 0x736c7574  .word       0x736C7574                   # psllh       $t6, $t4, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276154u;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 12), 21));
    // 0x276158: 0x2f6f6e74  sltiu       $t7, $k1, 0x6E74
    ctx->pc = 0x276158u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28276) ? 1 : 0);
label_27615c:
    // 0x27615c: 0x5f786569  .word       0x5F786569                   # bgtzl       $k1, . + 4 + (0x6569 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27615Cu;
    {
        const bool branch_taken_0x27615c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x27615c) {
            ctx->pc = 0x276160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27615Cu;
            // 0x276160: 0x73007400  .word       0x73007400                   # madd        $t6, $t8, $zero # 00000400 <InstrIdType: R5900_MMI> (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F704u;
            return;
        }
    }
    ctx->pc = 0x276164u;
label_276164:
    // 0x276164: 0x0  nop
    ctx->pc = 0x276164u;
    // NOP
    // 0x276168: 0x0  nop
    ctx->pc = 0x276168u;
    // NOP
    // 0x27616c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276170: 0x24426140  addiu       $v0, $v0, 0x6140
    ctx->pc = 0x276170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24896));
    // 0x276174: 0xea000010  swc2        $0, 0x10($s0)
    ctx->pc = 0x276174u;
    // Unhandled opcode: 0x3A
    // 0x276178: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276178u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x27617c: 0x0  nop
    ctx->pc = 0x27617cu;
    // NOP
    // 0x276180: 0xd000010  jal         func_4000040
    ctx->pc = 0x276180u;
    SET_GPR_U32(ctx, 31, 0x276188u);
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276188u; }
        if (ctx->pc != 0x276188u) { return; }
    }
    ctx->pc = 0x276188u;
label_276188:
    // 0x276188: 0x0  nop
    ctx->pc = 0x276188u;
    // NOP
    // 0x27618c: 0x0  nop
    ctx->pc = 0x27618cu;
    // NOP
    // 0x276190: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x276190u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x276194: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x276194u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x276198: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276198u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x27619c: 0x2f6f6477  sltiu       $t7, $k1, 0x6477
    ctx->pc = 0x27619cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25719) ? 1 : 0);
    // 0x2761a0: 0x6e725f65  ldr         $s2, 0x5F65($s3)
    ctx->pc = 0x2761a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2761a4: 0x736c7574  .word       0x736C7574                   # psllh       $t6, $t4, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2761a4u;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 12), 21));
    // 0x2761a8: 0x2f656266  sltiu       $a1, $k1, 0x6266
    ctx->pc = 0x2761a8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25190) ? 1 : 0);
    // 0x2761ac: 0x6f65725f  ldr         $a1, 0x725F($k1)
    ctx->pc = 0x2761acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2761b0: 0x73726576  .word       0x73726576                   # psrlh       $t4, $s2, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2761b0u;
    SET_GPR_VEC(ctx, 12, _mm_srli_epi16(GPR_VEC(ctx, 18), 21));
    // 0x2761b4: 0x69656300  ldl         $a1, 0x6300($t3)
    ctx->pc = 0x2761b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2761b8: 0x0  nop
    ctx->pc = 0x2761b8u;
    // NOP
    // 0x2761bc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2761bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2761c0: 0x24426190  addiu       $v0, $v0, 0x6190
    ctx->pc = 0x2761c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24976));
    // 0x2761c4: 0xd6000010  ldc1        $f0, 0x10($s0)
    ctx->pc = 0x2761c4u;
    // Unhandled opcode: 0x35
    // 0x2761c8: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2761c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x2761cc: 0x0  nop
    ctx->pc = 0x2761ccu;
    // NOP
    // 0x2761d0: 0xf000010  jal         func_C000040
    ctx->pc = 0x2761D0u;
    SET_GPR_U32(ctx, 31, 0x2761D8u);
    ctx->pc = 0xC000040u;
    {
        auto targetFn = runtime->lookupFunction(0xC000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2761D8u; }
        if (ctx->pc != 0x2761D8u) { return; }
    }
    ctx->pc = 0x2761D8u;
label_2761d8:
    // 0x2761d8: 0x0  nop
    ctx->pc = 0x2761d8u;
    // NOP
    // 0x2761dc: 0x0  nop
    ctx->pc = 0x2761dcu;
    // NOP
    // 0x2761e0: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x2761e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x2761e4: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x2761e4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x2761e8: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2761e8u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x2761ec: 0x2f6f6477  sltiu       $t7, $k1, 0x6477
    ctx->pc = 0x2761ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25719) ? 1 : 0);
    // 0x2761f0: 0x6e725f65  ldr         $s2, 0x5F65($s3)
    ctx->pc = 0x2761f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x2761f4: 0x736c7574  .word       0x736C7574                   # psllh       $t6, $t4, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2761f4u;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 12), 21));
    // 0x2761f8: 0x2f657372  sltiu       $a1, $k1, 0x7372
    ctx->pc = 0x2761f8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)29554) ? 1 : 0);
    // 0x2761fc: 0x76636965  .word       0x76636965                   # INVALID     $s3, $v1, 0x6965 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2761fcu;
    // Unhandled opcode: 0x1D
    // 0x276200: 0x5f69666e  .word       0x5F69666E                   # bgtzl       $k1, . + 4 + (0x666E << 2) # 00090000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x276200u;
    {
        const bool branch_taken_0x276200 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x276200) {
            ctx->pc = 0x276204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276200u;
            // 0x276204: 0x69687365  ldl         $t0, 0x7365($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FBBCu;
            return;
        }
    }
    ctx->pc = 0x276208u;
    // 0x276208: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x276208u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
    // 0x27620c: 0x0  nop
    ctx->pc = 0x27620cu;
    // NOP
    // 0x276210: 0x0  nop
    ctx->pc = 0x276210u;
    // NOP
    // 0x276214: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276218: 0x244261e0  addiu       $v0, $v0, 0x61E0
    ctx->pc = 0x276218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25056));
    // 0x27621c: 0xc0000010  ll          $zero, 0x10($zero)
    ctx->pc = 0x27621cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 16); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x276220: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276220u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x276224: 0x0  nop
    ctx->pc = 0x276224u;
    // NOP
    // 0x276228: 0xd000010  jal         func_4000040
    ctx->pc = 0x276228u;
    SET_GPR_U32(ctx, 31, 0x276230u);
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276230u; }
        if (ctx->pc != 0x276230u) { return; }
    }
    ctx->pc = 0x276230u;
label_276230:
    // 0x276230: 0x0  nop
    ctx->pc = 0x276230u;
    // NOP
    // 0x276234: 0x0  nop
    ctx->pc = 0x276234u;
    // NOP
    // 0x276238: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x276238u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x27623c: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x27623cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x276240: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276240u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x276244: 0x2f6f6477  sltiu       $t7, $k1, 0x6477
    ctx->pc = 0x276244u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)25719) ? 1 : 0);
    // 0x276248: 0x6e725f65  ldr         $s2, 0x5F65($s3)
    ctx->pc = 0x276248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x27624c: 0x736c7574  .word       0x736C7574                   # psllh       $t6, $t4, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27624cu;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 12), 21));
    // 0x276250: 0x2f6f6e74  sltiu       $t7, $k1, 0x6E74
    ctx->pc = 0x276250u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28276) ? 1 : 0);
    // 0x276254: 0x5f6f6d64  .word       0x5F6F6D64                   # bgtzl       $k1, . + 4 + (0x6D64 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x276254u;
    {
        const bool branch_taken_0x276254 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x276254) {
            ctx->pc = 0x276258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x276254u;
            // 0x276258: 0x69696665  ldl         $t1, 0x6665($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26213); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2917E8u;
            return;
        }
    }
    ctx->pc = 0x27625Cu;
    // 0x27625c: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x27625cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
    // 0x276260: 0x0  nop
    ctx->pc = 0x276260u;
    // NOP
    // 0x276264: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276268: 0x24426238  addiu       $v0, $v0, 0x6238
    ctx->pc = 0x276268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25144));
    // 0x27626c: 0xac000010  sw          $zero, 0x10($zero)
    ctx->pc = 0x27626cu;
    WRITE32(ADD32(GPR_U32(ctx, 0), 16), GPR_U32(ctx, 0));
    // 0x276270: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276270u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x276274: 0x0  nop
    ctx->pc = 0x276274u;
    // NOP
    // 0x276278: 0x30824  and         $at, $zero, $v1
    ctx->pc = 0x276278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 3));
label_27627c:
    // 0x27627c: 0x102003c  .word       0x0102003C                   # dsll32      $zero, $v0, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27627cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) << (32 + 0));
    // 0x276280: 0x21441000  addi        $a0, $t2, 0x1000
    ctx->pc = 0x276280u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)4096, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x276284: 0x884206dc  lwl         $v0, 0x6DC($v0)
    ctx->pc = 0x276284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1756); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x276288: 0x423830  tge         $v0, $v0, 224
    ctx->pc = 0x276288u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
    // 0x27628c: 0x6f430014  ldr         $v1, 0x14($k0)
    ctx->pc = 0x27628cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x276290: 0x4202fd24  .word       0x4202FD24                   # INVALID     $s0, $v0, -0x2DC # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x276290u;
    // Unhandled COP0 CO-OP: 0x24
    // 0x276294: 0x103003c  .word       0x0103003C                   # dsll32      $zero, $v1, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276294u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << (32 + 0));
    // 0x276298: 0x21641800  addi        $a0, $t3, 0x1800
    ctx->pc = 0x276298u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)6144, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_27629c:
    // 0x27629c: 0x3863078c  xori        $v1, $v1, 0x78C
    ctx->pc = 0x27629cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1932);
    // 0x2762a0: 0x1f620010  .word       0x1F620010                   # bgtz        $k1, . + 4 + (0x10 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2762A0u;
    {
        const bool branch_taken_0x2762a0 = (GPR_S32(ctx, 27) > 0);
        ctx->pc = 0x2762A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762A0u;
            // 0x2762a4: 0x4362fd28  .word       0x4362FD28                   # INVALID     $k1, $v0, -0x2D8 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x1B
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762a0) {
            ctx->pc = 0x2762E4u;
            goto label_2762e4;
        }
    }
    ctx->pc = 0x2762A8u;
    // 0x2762a8: 0x7400010  bltz        $k0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2762A8u;
    {
        const bool branch_taken_0x2762a8 = (GPR_S32(ctx, 26) < 0);
        ctx->pc = 0x2762ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762A8u;
            // 0x2762ac: 0x4302fd24  .word       0x4302FD24                   # INVALID     $t8, $v0, -0x2DC # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x18
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762a8) {
            ctx->pc = 0x2762ECu;
            goto label_2762ec;
        }
    }
    ctx->pc = 0x2762B0u;
    // 0x2762b0: 0x4102fd24  bc0fl       . + 4 + (-0x2DC << 2)
    ctx->pc = 0x2762B0u;
    {
        const bool branch_taken_0x2762b0 = (false);
        ctx->pc = 0x2762B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762B0u;
            // 0x2762b4: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762b0) {
            ctx->pc = 0x275744u;
            return;
        }
    }
    ctx->pc = 0x2762B8u;
    // 0x2762b8: 0x26022d78  addiu       $v0, $s0, 0x2D78
    ctx->pc = 0x2762b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x2762bc: 0x44000010  .word       0x44000010                   # mfc1        $zero, $f0 # 00000010 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2762bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
    // 0x2762c0: 0x0  nop
    ctx->pc = 0x2762c0u;
    // NOP
    // 0x2762c4: 0x0  nop
    ctx->pc = 0x2762c4u;
    // NOP
    // 0x2762c8: 0x41620014  .word       0x41620014                   # INVALID     $t3, $v0, 0x14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2762c8u;
    // Unhandled COP0 instruction format: 0xB
    // 0x2762cc: 0x26022d78  addiu       $v0, $s0, 0x2D78
    ctx->pc = 0x2762ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x2762d0: 0xd000010  jal         func_4000040
    ctx->pc = 0x2762D0u;
    SET_GPR_U32(ctx, 31, 0x2762D8u);
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2762D8u; }
        if (ctx->pc != 0x2762D8u) { return; }
    }
    ctx->pc = 0x2762D8u;
label_2762d8:
    // 0x2762d8: 0x0  nop
    ctx->pc = 0x2762d8u;
    // NOP
    // 0x2762dc: 0x0  nop
    ctx->pc = 0x2762dcu;
    // NOP
    // 0x2762e0: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x2762e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
label_2762e4:
    // 0x2762e4: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x2762e4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x2762e8: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2762e8u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
label_2762ec:
    // 0x2762ec: 0x2f64695f  sltiu       $a0, $k1, 0x695F
    ctx->pc = 0x2762ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)26975) ? 1 : 0);
    // 0x2762f0: 0x72736575  .word       0x72736575                   # INVALID     $s3, $s3, 0x6575 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2762f0u;
    // Unhandled MMI instruction: function 0x35
    // 0x2762f4: 0x6c2f746e  ldr         $t7, 0x746E($at)
    ctx->pc = 0x2762f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29806); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x2762f8: 0x6f5f7472  ldr         $ra, 0x7472($k0)
    ctx->pc = 0x2762f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29810); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x2762fc: 0x65696773  daddiu      $t1, $t3, 0x6773
    ctx->pc = 0x2762fcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26483);
    // 0x276300: 0x74726565  .word       0x74726565                   # INVALID     $v1, $s2, 0x6565 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x276300u;
    // Unhandled opcode: 0x1D
    // 0x276304: 0x64000000  daddiu      $zero, $zero, 0x0
    ctx->pc = 0x276304u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)0);
    // 0x276308: 0x0  nop
    ctx->pc = 0x276308u;
    // NOP
    // 0x27630c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276310: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x276310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
    // 0x276314: 0x82000010  lb          $zero, 0x10($s0)
    ctx->pc = 0x276314u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x276318: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276318u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x27631c: 0x0  nop
    ctx->pc = 0x27631cu;
    // NOP
    // 0x276320: 0xd000010  jal         func_4000040
    ctx->pc = 0x276320u;
    SET_GPR_U32(ctx, 31, 0x276328u);
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276328u; }
        if (ctx->pc != 0x276328u) { return; }
    }
    ctx->pc = 0x276328u;
label_276328:
    // 0x276328: 0x0  nop
    ctx->pc = 0x276328u;
    // NOP
    // 0x27632c: 0x0  nop
    ctx->pc = 0x27632cu;
    // NOP
    // 0x276330: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x276330u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x276334: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x276334u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x276338: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276338u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x27633c: 0x2f64695f  sltiu       $a0, $k1, 0x695F
    ctx->pc = 0x27633cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)26975) ? 1 : 0);
    // 0x276340: 0x72736575  .word       0x72736575                   # INVALID     $s3, $s3, 0x6575 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276340u;
    // Unhandled MMI instruction: function 0x35
    // 0x276344: 0x6c2f7469  ldr         $t7, 0x7469($at)
    ctx->pc = 0x276344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x276348: 0x6e61766c  ldr         $at, 0x766C($s3)
    ctx->pc = 0x276348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30316); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x27634c: 0x695f6463  ldl         $ra, 0x6463($t2)
    ctx->pc = 0x27634cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
    // 0x276350: 0x61657467  daddi       $a1, $t3, 0x7467
    ctx->pc = 0x276350u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29799; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x276354: 0x6f797200  ldr         $t9, 0x7200($k1)
    ctx->pc = 0x276354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x276358: 0x0  nop
    ctx->pc = 0x276358u;
    // NOP
    // 0x27635c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27635cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276360: 0x24426330  addiu       $v0, $v0, 0x6330
    ctx->pc = 0x276360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25392));
    // 0x276364: 0x6e000010  ldr         $zero, 0x10($s0)
    ctx->pc = 0x276364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x276368: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276368u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x27636c: 0x0  nop
    ctx->pc = 0x27636cu;
    // NOP
    // 0x276370: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x276370u;
    {
        const bool branch_taken_0x276370 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x276370) {
            ctx->pc = 0x2763B4u;
            goto label_2763b4;
        }
    }
    ctx->pc = 0x276378u;
    // 0x276378: 0x0  nop
    ctx->pc = 0x276378u;
    // NOP
    // 0x27637c: 0x0  nop
    ctx->pc = 0x27637cu;
    // NOP
    // 0x276380: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x276380u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
    // 0x276384: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x276384u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x276388: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276388u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x27638c: 0x2f64695f  sltiu       $a0, $k1, 0x695F
    ctx->pc = 0x27638cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)26975) ? 1 : 0);
    // 0x276390: 0x72736575  .word       0x72736575                   # INVALID     $s3, $s3, 0x6575 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276390u;
    // Unhandled MMI instruction: function 0x35
    // 0x276394: 0x6c2f746e  ldr         $t7, 0x746E($at)
    ctx->pc = 0x276394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29806); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x276398: 0x6f5f746a  ldr         $ra, 0x746A($k0)
    ctx->pc = 0x276398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29802); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x27639c: 0x6f6e695f  ldr         $t6, 0x695F($k1)
    ctx->pc = 0x27639cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26975); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2763a0: 0x695f6e74  ldl         $ra, 0x6E74($t2)
    ctx->pc = 0x2763a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
    // 0x2763a4: 0x6873695f  ldl         $s3, 0x695F($v1)
    ctx->pc = 0x2763a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26975); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x2763a8: 0x63746165  daddi       $s4, $k1, 0x6165
    ctx->pc = 0x2763a8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24933; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x2763ac: 0x67726f79  daddiu      $s2, $k1, 0x6F79
    ctx->pc = 0x2763acu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28537);
    // 0x2763b0: 0x0  nop
    ctx->pc = 0x2763b0u;
    // NOP
label_2763b4:
    // 0x2763b4: 0x0  nop
    ctx->pc = 0x2763b4u;
    // NOP
    // 0x2763b8: 0x0  nop
    ctx->pc = 0x2763b8u;
    // NOP
    // 0x2763bc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2763bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2763c0: 0x24426380  addiu       $v0, $v0, 0x6380
    ctx->pc = 0x2763c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25472));
    // 0x2763c4: 0x56000010  bnel        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2763C4u;
    {
        const bool branch_taken_0x2763c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2763c4) {
            ctx->pc = 0x2763C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2763C4u;
            // 0x2763c8: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x276408u;
            goto label_276408;
        }
    }
    ctx->pc = 0x2763CCu;
    // 0x2763cc: 0x0  nop
    ctx->pc = 0x2763ccu;
    // NOP
    // 0x2763d0: 0x104003c  .word       0x0104003C                   # dsll32      $zero, $a0, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2763d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2763d4: 0x21822000  addi        $v0, $t4, 0x2000
    ctx->pc = 0x2763d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)8192, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x2763d8: 0x3884078c  xori        $a0, $a0, 0x78C
    ctx->pc = 0x2763d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1932);
    // 0x2763dc: 0xdb83fc28  lqc2        $vf3, -0x3D8($gp)
    ctx->pc = 0x2763dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 28), 4294966312)));
    // 0x2763e0: 0x17600010  bnez        $k1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2763E0u;
    {
        const bool branch_taken_0x2763e0 = (GPR_U64(ctx, 27) != GPR_U64(ctx, 0));
        ctx->pc = 0x2763E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763E0u;
            // 0x2763e4: 0x26022d78  addiu       $v0, $s0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763e0) {
            ctx->pc = 0x276424u;
            goto label_276424;
        }
    }
    ctx->pc = 0x2763E8u;
    // 0x2763e8: 0x8002fc24  lb          $v0, -0x3DC($zero)
    ctx->pc = 0x2763e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294966308)));
    // 0x2763ec: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2763ECu;
    {
        const bool branch_taken_0x2763ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2763F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2763ECu;
            // 0x2763f0: 0x26022d78  addiu       $v0, $s0, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2763ec) {
            ctx->pc = 0x276430u;
            goto label_276430;
        }
    }
    ctx->pc = 0x2763F4u;
    // 0x2763f4: 0xa000010  j           func_8000040
    ctx->pc = 0x2763F4u;
    ctx->pc = 0x8000040u;
    {
        auto targetFn = runtime->lookupFunction(0x8000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2763FCu;
    // 0x2763fc: 0x0  nop
    ctx->pc = 0x2763fcu;
    // NOP
    // 0x276400: 0x0  nop
    ctx->pc = 0x276400u;
    // NOP
label_276404:
    // 0x276404: 0x64626575  daddiu      $v0, $v1, 0x6575
    ctx->pc = 0x276404u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25973);
label_276408:
    // 0x276408: 0x67665f65  daddiu      $a2, $k1, 0x5F65
    ctx->pc = 0x276408u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24421);
    // 0x27640c: 0x72616d74  .word       0x72616D74                   # psllh       $t5, $at, 21 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27640cu;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x276410: 0x2f676e2f  sltiu       $a3, $k1, 0x6E2F
    ctx->pc = 0x276410u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)28207) ? 1 : 0);
    // 0x276414: 0x756b6e6e  .word       0x756B6E6E                   # INVALID     $t3, $t3, 0x6E6E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x276414u;
    // Unhandled opcode: 0x1D
    // 0x276418: 0x6f6e775f  ldr         $t6, 0x775F($k1)
    ctx->pc = 0x276418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x27641c: 0x6e2f6700  ldr         $t7, 0x6700($s1)
    ctx->pc = 0x27641cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 26368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x276420: 0x0  nop
    ctx->pc = 0x276420u;
    // NOP
label_276424:
    // 0x276424: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276428: 0x24426404  addiu       $v0, $v0, 0x6404
    ctx->pc = 0x276428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25604));
    // 0x27642c: 0x1030024  and         $zero, $t0, $v1
    ctx->pc = 0x27642cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_276430:
    // 0x276430: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276430u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x276434: 0x3a000010  xori        $zero, $s0, 0x10
    ctx->pc = 0x276434u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)16);
    // 0x276438: 0x4a300af  bgezl       $a1, . + 4 + (0xAF << 2)
    ctx->pc = 0x276438u;
    {
        const bool branch_taken_0x276438 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x276438) {
            ctx->pc = 0x2766F8u;
            return;
        }
    }
    ctx->pc = 0x276440u;
    // 0x276440: 0x101003c  .word       0x0101003C                   # dsll32      $zero, $at, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276440u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 0));
    // 0x276444: 0x21220800  addi        $v0, $t1, 0x800
    ctx->pc = 0x276444u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)2048, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x276448: 0x382007ac  xori        $zero, $at, 0x7AC
    ctx->pc = 0x276448u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)1964);
    // 0x27644c: 0x26200016  addiu       $zero, $s1, 0x16
    ctx->pc = 0x27644cu;
    // NOP (addiu $zero, ...)
    // 0x276450: 0x0  nop
    ctx->pc = 0x276450u;
    // NOP
    // 0x276454: 0xc09c8c4  jal         func_272310
    ctx->pc = 0x276454u;
    SET_GPR_U32(ctx, 31, 0x27645Cu);
    ctx->pc = 0x276458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276454u;
            // 0x276458: 0x4040024  .word       0x04040024                   # INVALID     $zero, $a0, 0x24 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
        // Unhandled REGIMM instruction: 0x4
        ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (runtime->hasFunction(0x272310u)) {
        auto targetFn = runtime->lookupFunction(0x272310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27645Cu; }
        if (ctx->pc != 0x27645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00272310_0x272310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27645Cu; }
        if (ctx->pc != 0x27645Cu) { return; }
    }
    ctx->pc = 0x27645Cu;
label_27645c:
    // 0x27645c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x27645Cu;
    {
        const bool branch_taken_0x27645c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27645c) {
            ctx->pc = 0x2764B0u;
            goto label_2764b0;
        }
    }
    ctx->pc = 0x276464u;
    // 0x276464: 0xa000010  j           func_8000040
    ctx->pc = 0x276464u;
    ctx->pc = 0x8000040u;
    {
        auto targetFn = runtime->lookupFunction(0x8000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x27646Cu;
    // 0x27646c: 0x0  nop
    ctx->pc = 0x27646cu;
    // NOP
    // 0x276470: 0x0  nop
    ctx->pc = 0x276470u;
    // NOP
label_276474:
    // 0x276474: 0x6769612d  daddiu      $t1, $k1, 0x612D
    ctx->pc = 0x276474u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24877);
    // 0x276478: 0x672f7776  daddiu      $t7, $t9, 0x7776
    ctx->pc = 0x276478u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30582);
    // 0x27647c: 0x32352e5f  andi        $s5, $s1, 0x2E5F
    ctx->pc = 0x27647cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)11871);
    // 0x276480: 0x69632d6f  ldl         $v1, 0x2D6F($t3)
    ctx->pc = 0x276480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11631); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x276484: 0x6e656e63  ldr         $a1, 0x6E63($s3)
    ctx->pc = 0x276484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x276488: 0x74000000  .word       0x74000000                   # INVALID     $zero, $zero, 0x0 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x276488u;
    // Unhandled opcode: 0x1D
    // 0x27648c: 0x0  nop
    ctx->pc = 0x27648cu;
    // NOP
    // 0x276490: 0x0  nop
    ctx->pc = 0x276490u;
    // NOP
label_276494:
    // 0x276494: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x276498: 0x24426474  addiu       $v0, $v0, 0x6474
    ctx->pc = 0x276498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25716));
    // 0x27649c: 0x20000010  addi        $zero, $zero, 0x10
    ctx->pc = 0x27649cu;
    // NOP (addi to $zero)
    // 0x2764a0: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2764a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x2764a4: 0x0  nop
    ctx->pc = 0x2764a4u;
    // NOP
    // 0x2764a8: 0x9000010  j           func_4000040
    ctx->pc = 0x2764A8u;
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2764B0u;
label_2764b0:
    // 0x2764b0: 0x0  nop
    ctx->pc = 0x2764b0u;
    // NOP
    // 0x2764b4: 0x0  nop
    ctx->pc = 0x2764b4u;
    // NOP
label_2764b8:
    // 0x2764b8: 0x6769612d  daddiu      $t1, $k1, 0x612D
    ctx->pc = 0x2764b8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24877);
    // 0x2764bc: 0x672f7776  daddiu      $t7, $t9, 0x7776
    ctx->pc = 0x2764bcu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30582);
    // 0x2764c0: 0x32352e5f  andi        $s5, $s1, 0x2E5F
    ctx->pc = 0x2764c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)11871);
    // 0x2764c4: 0x64632d6f  daddiu      $v1, $v1, 0x2D6F
    ctx->pc = 0x2764c4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)11631);
    // 0x2764c8: 0x6e656e63  ldr         $a1, 0x6E63($s3)
    ctx->pc = 0x2764c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2764cc: 0x74000000  .word       0x74000000                   # INVALID     $zero, $zero, 0x0 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2764ccu;
    // Unhandled opcode: 0x1D
    // 0x2764d0: 0x0  nop
    ctx->pc = 0x2764d0u;
    // NOP
    // 0x2764d4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2764d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2764d8: 0x244264b8  addiu       $v0, $v0, 0x64B8
    ctx->pc = 0x2764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25784));
    // 0x2764dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2764DCu;
    {
        const bool branch_taken_0x2764dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2764E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2764DCu;
            // 0x2764e0: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2764dc) {
            ctx->pc = 0x276520u;
            goto label_276520;
        }
    }
    ctx->pc = 0x2764E4u;
    // 0x2764e4: 0x0  nop
    ctx->pc = 0x2764e4u;
    // NOP
    // 0x2764e8: 0x9000010  j           func_4000040
    ctx->pc = 0x2764E8u;
    ctx->pc = 0x4000040u;
    {
        auto targetFn = runtime->lookupFunction(0x4000040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2764F0u;
    // 0x2764f0: 0x0  nop
    ctx->pc = 0x2764f0u;
    // NOP
    // 0x2764f4: 0x0  nop
    ctx->pc = 0x2764f4u;
    // NOP
label_2764f8:
    // 0x2764f8: 0x6769612d  daddiu      $t1, $k1, 0x612D
    ctx->pc = 0x2764f8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24877);
    // 0x2764fc: 0x672f7776  daddiu      $t7, $t9, 0x7776
    ctx->pc = 0x2764fcu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)30582);
    // 0x276500: 0x32352e5f  andi        $s5, $s1, 0x2E5F
    ctx->pc = 0x276500u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)11871);
    // 0x276504: 0x6f687465  ldr         $t0, 0x7465($k1)
    ctx->pc = 0x276504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x276508: 0x72007300  .word       0x72007300                   # madd        $t6, $s0, $zero # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x276508u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x27650c: 0x0  nop
    ctx->pc = 0x27650cu;
    // NOP
    // 0x276510: 0x0  nop
    ctx->pc = 0x276510u;
    // NOP
    // 0x276514: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x276514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_276518:
    // 0x276518: 0x244264f8  addiu       $v0, $v0, 0x64F8
    ctx->pc = 0x276518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25848));
    // 0x27651c: 0xa200af  .word       0x00A200AF                   # dsubu       $zero, $a1, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27651cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
label_276520:
    // 0x276520: 0xa5008f  .word       0x00A5008F                   # sync # 00A50000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276520u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x276524: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x276524u;
    SET_GPR_U32(ctx, 31, 0x27652Cu);
    ctx->pc = 0x276528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276524u;
            // 0x276528: 0x2d602002  sltiu       $zero, $t3, 0x2002 (Delay Slot)
        SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)8194) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27652Cu; }
        if (ctx->pc != 0x27652Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27652Cu; }
        if (ctx->pc != 0x27652Cu) { return; }
    }
    ctx->pc = 0x27652Cu;
label_27652c:
    // 0x27652c: 0x4a3008f  bgezl       $a1, . + 4 + (0x8F << 2)
    ctx->pc = 0x27652Cu;
    {
        const bool branch_taken_0x27652c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x27652c) {
            ctx->pc = 0x276530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27652Cu;
            // 0x276530: 0xe600018  jal         func_9800060 (Delay Slot)
        // JAL 0x9800060 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x27676Cu;
            return;
        }
    }
    ctx->pc = 0x276534u;
    // 0x276534: 0x0  nop
    ctx->pc = 0x276534u;
    // NOP
label_276538:
    // 0x276538: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x276538u;
    SET_GPR_U32(ctx, 31, 0x276540u);
    ctx->pc = 0x27653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276538u;
            // 0x27653c: 0x2d602002  sltiu       $zero, $t3, 0x2002 (Delay Slot)
        SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)8194) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276540u; }
        if (ctx->pc != 0x276540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276540u; }
        if (ctx->pc != 0x276540u) { return; }
    }
    ctx->pc = 0x276540u;
label_276540:
    // 0x276540: 0x26032d78  addiu       $v1, $s0, 0x2D78
    ctx->pc = 0x276540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x276544: 0x105003c  .word       0x0105003C                   # dsll32      $zero, $a1, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x276544u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) << (32 + 0));
    // 0x276548: 0x21a32800  addi        $v1, $t5, 0x2800
    ctx->pc = 0x276548u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)10240, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x27654c: 0x38a5078c  xori        $a1, $a1, 0x78C
    ctx->pc = 0x27654cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1932);
    // 0x276550: 0xe007fc24  sc          $a3, -0x3DC($zero)
    ctx->pc = 0x276550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294966308); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 7)); SET_GPR_S32(ctx, 7, 1); } else { SET_GPR_S32(ctx, 7, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x276554: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x276554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x276558: 0x21622002  addi        $v0, $t3, 0x2002
    ctx->pc = 0x276558u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)8194, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27655c: 0x23e53800  addi        $a1, $ra, 0x3800
    ctx->pc = 0x27655cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 31), (int32_t)14336, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x276560: 0x3050024  and         $zero, $t8, $a1
    ctx->pc = 0x276560u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x276564: 0xc043e24  jal         func_10F890
    ctx->pc = 0x276564u;
    SET_GPR_U32(ctx, 31, 0x27656Cu);
    ctx->pc = 0x276568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276564u;
            // 0x276568: 0x24c69f70  addiu       $a2, $a2, -0x6090 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27656Cu; }
        if (ctx->pc != 0x27656Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27656Cu; }
        if (ctx->pc != 0x27656Cu) { return; }
    }
    ctx->pc = 0x27656Cu;
label_27656c:
    // 0x27656c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27656Cu;
    {
        const bool branch_taken_0x27656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27656c) {
            ctx->pc = 0x27659Cu;
            goto label_27659c;
        }
    }
    ctx->pc = 0x276574u;
    // 0x276574: 0x8e09b775  lw          $t1, -0x488B($s0)
    ctx->pc = 0x276574u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948725)));
    // 0x276578: 0xff06513a  sd          $a2, 0x513A($t8)
    ctx->pc = 0x276578u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 20794), GPR_U64(ctx, 6));
    // 0x27657c: 0x25a96dd0  addiu       $t1, $t5, 0x6DD0
    ctx->pc = 0x27657cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 28112));
    // 0x276580: 0xddcab8d7  ld          $t2, -0x4729($t6)
    ctx->pc = 0x276580u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 14), 4294949079)));
    // 0x276584: 0x27036540  addiu       $v1, $t8, 0x6540
    ctx->pc = 0x276584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 25920));
    // 0x276588: 0xa0b42dc9  sb          $s4, 0x2DC9($a1)
    ctx->pc = 0x276588u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11721), (uint8_t)GPR_U32(ctx, 20));
    // 0x27658c: 0xb3144c33  sdl         $s4, 0x4C33($t8)
    ctx->pc = 0x27658cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 19507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276590: 0x9806e033  lwr         $a2, -0x1FCD($zero)
    ctx->pc = 0x276590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294959155); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x276594: 0xb3144bef  sdl         $s4, 0x4BEF($t8)
    ctx->pc = 0x276594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 19439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x276598: 0x0  nop
    ctx->pc = 0x276598u;
    // NOP
label_27659c:
    // 0x27659c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x27659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2765a0: 0x2442658c  addiu       $v0, $v0, 0x658C
    ctx->pc = 0x2765a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25996));
    // 0x2765a4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2765a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2765a8: 0x2484656c  addiu       $a0, $a0, 0x656C
    ctx->pc = 0x2765a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25964));
    // 0x2765ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2765acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765b0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2765b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2765b4: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x2765b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x2765b8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2765b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2765bc: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2765bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2765c0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2765c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2765c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2765c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2765c8: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2765C8u;
    SET_GPR_U32(ctx, 31, 0x2765D0u);
    ctx->pc = 0x2765CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2765C8u;
            // 0x2765cc: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765D0u; }
        if (ctx->pc != 0x2765D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765D0u; }
        if (ctx->pc != 0x2765D0u) { return; }
    }
    ctx->pc = 0x2765D0u;
label_2765d0:
    // 0x2765d0: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2765d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2765d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2765d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2765d8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2765d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2765dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2765dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2765e0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2765e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765e4: 0x0  nop
    ctx->pc = 0x2765e4u;
    // NOP
label_2765e8:
    // 0x2765e8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2765E8u;
    SET_GPR_U32(ctx, 31, 0x2765F0u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765F0u; }
        if (ctx->pc != 0x2765F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2765F0u; }
        if (ctx->pc != 0x2765F0u) { return; }
    }
    ctx->pc = 0x2765F0u;
label_2765f0:
    // 0x2765f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2765f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2765f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2765f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2765f8: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x2765f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2765fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2765fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276600: 0x0  nop
    ctx->pc = 0x276600u;
    // NOP
    // 0x276604: 0x0  nop
    ctx->pc = 0x276604u;
    // NOP
    // 0x276608: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x276608u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27660c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27660cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x276610: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x276610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276614: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276614u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276618: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27661c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27661Cu;
    {
        const bool branch_taken_0x27661c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27661Cu;
            // 0x276620: 0x2e030004  sltiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27661c) {
            ctx->pc = 0x276634u;
            goto label_276634;
        }
    }
    ctx->pc = 0x276624u;
    // 0x276624: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x276624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x276628: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27662c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27662cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x276630: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x276630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_276634:
    // 0x276634: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x276634u;
    {
        const bool branch_taken_0x276634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276634u;
            // 0x276638: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276634) {
            ctx->pc = 0x2765E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2765e8;
        }
    }
    ctx->pc = 0x27663Cu;
    // 0x27663c: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27663cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x276640: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x276640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x276644: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x276644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x276648: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x276648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x27664c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x276650: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x276650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x276654: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x276654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276658: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x276658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x27665c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27665cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x276660: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x276660u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x276664: 0x0  nop
    ctx->pc = 0x276664u;
    // NOP
label_276668:
    // 0x276668: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x276668u;
    SET_GPR_U32(ctx, 31, 0x276670u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276670u; }
        if (ctx->pc != 0x276670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276670u; }
        if (ctx->pc != 0x276670u) { return; }
    }
    ctx->pc = 0x276670u;
label_276670:
    // 0x276670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x276674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x276678: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x276678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x27667c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27667cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x276680: 0x0  nop
    ctx->pc = 0x276680u;
    // NOP
    // 0x276684: 0x0  nop
    ctx->pc = 0x276684u;
    // NOP
    // 0x276688: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x276688u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27668c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27668cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x276690: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x276690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276694: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x276694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x276698: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x276698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27669c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x27669Cu;
    {
        const bool branch_taken_0x27669c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2766A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27669Cu;
            // 0x2766a0: 0x2e030004  sltiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27669c) {
            ctx->pc = 0x2766B4u;
            goto label_2766b4;
        }
    }
    ctx->pc = 0x2766A4u;
    // 0x2766a4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2766a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2766a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2766a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2766ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2766acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2766b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2766b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_2766b4:
    // 0x2766b4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2766B4u;
    {
        const bool branch_taken_0x2766b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2766B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766B4u;
            // 0x2766b8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2766b4) {
            ctx->pc = 0x276668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_276668;
        }
    }
    ctx->pc = 0x2766BCu;
    // 0x2766bc: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2766BCu;
    SET_GPR_U32(ctx, 31, 0x2766C4u);
    ctx->pc = 0x2766C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2766BCu;
            // 0x2766c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766C4u; }
        if (ctx->pc != 0x2766C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2766C4u; }
        if (ctx->pc != 0x2766C4u) { return; }
    }
    ctx->pc = 0x2766C4u;
label_2766c4:
    // 0x2766c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2766c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2766c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2766c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2766cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2766ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2766d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2766d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2766d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2766d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2766d8: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x2766d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2766dc: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2766dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2766e0: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2766e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2766e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2766E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2766E4u;
            // 0x2766e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2766ECu;
    // 0x2766ec: 0x0  nop
    ctx->pc = 0x2766ecu;
    // NOP
    ctx->pc = 0x2766f0u;
}
