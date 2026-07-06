#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00277A20
// Address: 0x277a20 - 0x277c98
void sub_00277A20_0x277a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277A20_0x277a20");
#endif

    switch (ctx->pc) {
        case 0x277a8cu: goto label_277a8c;
        case 0x277aa8u: goto label_277aa8;
        case 0x277ad4u: goto label_277ad4;
        case 0x277b24u: goto label_277b24;
        case 0x277b50u: goto label_277b50;
        case 0x277bc8u: goto label_277bc8;
        case 0x277bf4u: goto label_277bf4;
        case 0x277c08u: goto label_277c08;
        case 0x277c64u: goto label_277c64;
        default: break;
    }

    ctx->pc = 0x277a20u;

    // 0x277a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x277a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x277a24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277a28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x277a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x277a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x277a30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x277a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x277a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x277a38: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x277a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x277a40: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x277a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a44: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x277a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x277a48: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x277a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a4c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x277a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x277a50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x277a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x277a54: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x277a54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x277a58: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x277a58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x277a5c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x277a5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x277a60: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x277a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x277a64: 0x24637aac  addiu       $v1, $v1, 0x7AAC
    ctx->pc = 0x277a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31404));
    // 0x277a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x277a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277a6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x277A6Cu;
    {
        const bool branch_taken_0x277a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277a6c) {
            ctx->pc = 0x277A8Cu;
            goto label_277a8c;
        }
    }
    ctx->pc = 0x277A74u;
    // 0x277a74: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x277a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x277a78: 0x24847ac0  addiu       $a0, $a0, 0x7AC0
    ctx->pc = 0x277a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31424));
    // 0x277a7c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x277a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x277a80: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x277a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x277a84: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x277A84u;
    SET_GPR_U32(ctx, 31, 0x277A8Cu);
    ctx->pc = 0x277A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277A84u;
            // 0x277a88: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A8Cu; }
        if (ctx->pc != 0x277A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277A8Cu; }
        if (ctx->pc != 0x277A8Cu) { return; }
    }
    ctx->pc = 0x277A8Cu;
label_277a8c:
    // 0x277a8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x277A8Cu;
    {
        const bool branch_taken_0x277a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277a8c) {
            ctx->pc = 0x277AC0u;
            goto label_277ac0;
        }
    }
    ctx->pc = 0x277A94u;
    // 0x277a94: 0xa30985c1  sb          $t1, -0x7A3F($t8)
    ctx->pc = 0x277a94u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4294936001), (uint8_t)GPR_U32(ctx, 9));
    // 0x277a98: 0x87cbb9c3  lh          $t3, -0x463D($fp)
    ctx->pc = 0x277a98u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294949315)));
    // 0x277a9c: 0xdd2d3ff7  ld          $t5, 0x3FF7($t1)
    ctx->pc = 0x277a9cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 9), 16375)));
    // 0x277aa0: 0xc1d16fe  jal         func_745BF8
    ctx->pc = 0x277AA0u;
    SET_GPR_U32(ctx, 31, 0x277AA8u);
    ctx->pc = 0x277AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277AA0u;
            // 0x277aa4: 0x87d010e3  lh          $s0, 0x10E3($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4323)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x745BF8u;
    {
        auto targetFn = runtime->lookupFunction(0x745BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277AA8u; }
        if (ctx->pc != 0x277AA8u) { return; }
    }
    ctx->pc = 0x277AA8u;
label_277aa8:
    // 0x277aa8: 0x8fc9094d  lw          $t1, 0x94D($fp)
    ctx->pc = 0x277aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2381)));
    // 0x277aac: 0x0  nop
    ctx->pc = 0x277aacu;
    // NOP
    // 0x277ab0: 0xf68b9a89  sdc1        $f11, -0x6577($s4)
    ctx->pc = 0x277ab0u;
    // Unhandled opcode: 0x3D
    // 0x277ab4: 0x98081660  lwr         $t0, 0x1660($zero)
    ctx->pc = 0x277ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5728); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x277ab8: 0xf68b9bdd  sdc1        $f11, -0x6423($s4)
    ctx->pc = 0x277ab8u;
    // Unhandled opcode: 0x3D
    // 0x277abc: 0x0  nop
    ctx->pc = 0x277abcu;
    // NOP
label_277ac0:
    // 0x277ac0: 0xa27ab314  sb          $k0, -0x4CEC($s3)
    ctx->pc = 0x277ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294947604), (uint8_t)GPR_U32(ctx, 26));
    // 0x277ac4: 0x3dab5da  .word       0x03DAB5DA                   # div         $s6, $fp, $k0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ac4u;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 30);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x277ac8: 0x825aa260  lb          $k0, -0x5DA0($s2)
    ctx->pc = 0x277ac8u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294943328)));
    // 0x277acc: 0x625aa7c6  daddi       $k0, $s2, -0x583A
    ctx->pc = 0x277accu;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)4294944710; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, res); }
    // 0x277ad0: 0x425aa7d6  .word       0x425AA7D6                   # INVALID     $s2, $k0, -0x582A # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277ad0u;
    // Unhandled COP0 instruction format: 0x12
label_277ad4:
    // 0x277ad4: 0x429ab59a  .word       0x429AB59A                   # INVALID     $s4, $k0, -0x4A66 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277ad4u;
    // Unhandled COP0 instruction format: 0x14
    // 0x277ad8: 0x427ab346  .word       0x427AB346                   # INVALID     $s3, $k0, -0x4CBA # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277ad8u;
    // Unhandled COP0 instruction format: 0x13
    // 0x277adc: 0x7fab596  .word       0x07FAB596                   # INVALID     $ra, $k0, -0x4A6A # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x277adcu;
    // Unhandled REGIMM instruction: 0x1A
    // 0x277ae0: 0x25ab796  .word       0x025AB796                   # dsrlv       $s6, $k0, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ae0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x277ae4: 0x25ab796  .word       0x025AB796                   # dsrlv       $s6, $k0, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277ae4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x277ae8: 0x71ab596  .word       0x071AB596                   # INVALID     $t8, $k0, -0x4A6A # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x277ae8u;
    // Unhandled REGIMM instruction: 0x1A
    // 0x277aec: 0x862bb784  lh          $t3, -0x487C($s1)
    ctx->pc = 0x277aecu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294948740)));
    // 0x277af0: 0x27ab354  .word       0x027AB354                   # dsllv       $s6, $k0, $s3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277af0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x277af4: 0x425aa262  .word       0x425AA262                   # INVALID     $s2, $k0, -0x5D9E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277af4u;
    // Unhandled COP0 instruction format: 0x12
    // 0x277af8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x277af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x277afc: 0x24532d78  addiu       $s3, $v0, 0x2D78
    ctx->pc = 0x277afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
    // 0x277b00: 0x425aa65e  .word       0x425AA65E                   # INVALID     $s2, $k0, -0x59A2 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b00u;
    // Unhandled COP0 instruction format: 0x12
    // 0x277b04: 0x427ab31e  .word       0x427AB31E                   # INVALID     $s3, $k0, -0x4CE2 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b04u;
    // Unhandled COP0 instruction format: 0x13
    // 0x277b08: 0x427a329e  .word       0x427A329E                   # INVALID     $s3, $k0, 0x329E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b08u;
    // Unhandled COP0 instruction format: 0x13
    // 0x277b0c: 0x67ab59e  .word       0x067AB59E                   # INVALID     $s3, $k0, -0x4A62 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x277b0cu;
    // Unhandled REGIMM instruction: 0x1A
    // 0x277b10: 0x30855314  andi        $a1, $a0, 0x5314
    ctx->pc = 0x277b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)21268);
    // 0x277b14: 0x827ab016  lb          $k0, -0x4FEA($s3)
    ctx->pc = 0x277b14u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294946838)));
    // 0x277b18: 0x667eb784  daddiu      $fp, $s3, -0x487C
    ctx->pc = 0x277b18u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4294948740);
    // 0x277b1c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x277B1Cu;
    SET_GPR_U32(ctx, 31, 0x277B24u);
    ctx->pc = 0x277B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277B1Cu;
            // 0x277b20: 0x985a6606  lwr         $k0, 0x6606($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 26118); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 26) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 26) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 26, merged64); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B24u; }
        if (ctx->pc != 0x277B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B24u; }
        if (ctx->pc != 0x277B24u) { return; }
    }
    ctx->pc = 0x277B24u;
label_277b24:
    // 0x277b24: 0x427ab016  .word       0x427AB016                   # INVALID     $s3, $k0, -0x4FEA # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b24u;
    // Unhandled COP0 instruction format: 0x13
    // 0x277b28: 0x6678b79c  daddiu      $t8, $s3, -0x4864
    ctx->pc = 0x277b28u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4294948764);
    // 0x277b2c: 0x41da461e  .word       0x41DA461E                   # INVALID     $t6, $k0, 0x461E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b2cu;
    // Unhandled COP0 instruction format: 0xE
    // 0x277b30: 0x825aa662  lb          $k0, -0x599E($s2)
    ctx->pc = 0x277b30u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294944354)));
    // 0x277b34: 0x365b79e  .word       0x0365B79E                   # ddiv        $s6, $k1, $a1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b34u;
    // Unhandled SPECIAL instruction: 0x1E
    // 0x277b38: 0xa27ab316  sb          $k0, -0x4CEA($s3)
    ctx->pc = 0x277b38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294947606), (uint8_t)GPR_U32(ctx, 26));
    // 0x277b3c: 0x827ab016  lb          $k0, -0x4FEA($s3)
    ctx->pc = 0x277b3cu;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294946838)));
    // 0x277b40: 0x667eb784  daddiu      $fp, $s3, -0x487C
    ctx->pc = 0x277b40u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4294948740);
    // 0x277b44: 0x985a6606  lwr         $k0, 0x6606($v0)
    ctx->pc = 0x277b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 26118); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 26) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 26) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 26, merged64); }
    // 0x277b48: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x277B48u;
    SET_GPR_U32(ctx, 31, 0x277B50u);
    ctx->pc = 0x277B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277B48u;
            // 0x277b4c: 0x7ebb79e  tltiu       $ra, -0x4862 (Delay Slot)
        if (GPR_U64(ctx, 31) < (uint64_t)(int64_t)(int32_t)4294948766) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B50u; }
        if (ctx->pc != 0x277B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277B50u; }
        if (ctx->pc != 0x277B50u) { return; }
    }
    ctx->pc = 0x277B50u;
label_277b50:
    // 0x277b50: 0x5ab752  .word       0x005AB752                   # mflo        $s6 # 005A0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b50u;
    SET_GPR_U64(ctx, 22, ctx->lo);
    // 0x277b54: 0x25ab796  .word       0x025AB796                   # dsrlv       $s6, $k0, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277b54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x277b58: 0xa39abd50  sb          $k0, -0x42B0($gp)
    ctx->pc = 0x277b58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950224), (uint8_t)GPR_U32(ctx, 26));
    // 0x277b5c: 0x30e55314  andi        $a1, $a3, 0x5314
    ctx->pc = 0x277b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)21268);
    // 0x277b60: 0x425aa65e  .word       0x425AA65E                   # INVALID     $s2, $k0, -0x59A2 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b60u;
    // Unhandled COP0 instruction format: 0x12
    // 0x277b64: 0x825aa662  lb          $k0, -0x599E($s2)
    ctx->pc = 0x277b64u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294944354)));
    // 0x277b68: 0x2678b79c  addiu       $t8, $s3, -0x4864
    ctx->pc = 0x277b68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948764));
    // 0x277b6c: 0x425aa25e  .word       0x425AA25E                   # INVALID     $s2, $k0, -0x5DA2 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b6cu;
    // Unhandled COP0 instruction format: 0x12
    // 0x277b70: 0x267fb784  addiu       $ra, $s3, -0x487C
    ctx->pc = 0x277b70u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948740));
    // 0x277b74: 0x425aa7d6  .word       0x425AA7D6                   # INVALID     $s2, $k0, -0x582A # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b74u;
    // Unhandled COP0 instruction format: 0x12
    // 0x277b78: 0x625aa786  daddi       $k0, $s2, -0x587A
    ctx->pc = 0x277b78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)4294944646; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, res); }
    // 0x277b7c: 0x5905551a  .word       0x5905551A                   # blezl       $t0, . + 4 + (0x551A << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277B7Cu;
    {
        const bool branch_taken_0x277b7c = (GPR_S32(ctx, 8) <= 0);
        if (branch_taken_0x277b7c) {
            ctx->pc = 0x277B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x277B7Cu;
            // 0x277b80: 0x266ab7d4  addiu       $t2, $s3, -0x482C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948820));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CFE8u;
            return;
        }
    }
    ctx->pc = 0x277B84u;
    // 0x277b84: 0x425aa7d6  .word       0x425AA7D6                   # INVALID     $s2, $k0, -0x582A # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277b84u;
    // Unhandled COP0 instruction format: 0x12
    // 0x277b88: 0x19e5551e  .word       0x19E5551E                   # blez        $t7, . + 4 + (0x551E << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277B88u;
    {
        const bool branch_taken_0x277b88 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x277B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277B88u;
            // 0x277b8c: 0xa25aa262  sb          $k0, -0x5D9E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4294943330), (uint8_t)GPR_U32(ctx, 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b88) {
            ctx->pc = 0x28D004u;
            return;
        }
    }
    ctx->pc = 0x277B90u;
    // 0x277b90: 0x862bb780  lh          $t3, -0x4880($s1)
    ctx->pc = 0x277b90u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294948736)));
    // 0x277b94: 0x3db37016  .word       0x3DB37016                   # lui         $s3, 0x7016 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277b94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28694 << 16));
    // 0x277b98: 0x3da55112  .word       0x3DA55112                   # lui         $a1, 0x5112 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20754 << 16));
    // 0x277b9c: 0x224cbf06  addi        $t4, $s2, -0x40FA
    ctx->pc = 0x277b9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)4294950662, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x277ba0: 0x7e9b7e2  tgeiu       $ra, -0x481E
    ctx->pc = 0x277ba0u;
    if (GPR_U64(ctx, 31) >= (uint64_t)(int64_t)(int32_t)4294948834) { runtime->handleTrap(rdram, ctx); }
    // 0x277ba4: 0x3252d016  andi        $s2, $s2, 0xD016
    ctx->pc = 0x277ba4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)53270);
    // 0x277ba8: 0x224fbf06  addi        $t7, $s2, -0x40FA
    ctx->pc = 0x277ba8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)4294950662, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x277bac: 0x7eab796  tlti        $ra, -0x486A
    ctx->pc = 0x277bacu;
    if (GPR_S64(ctx, 31) < (int64_t)(int32_t)4294948758) { runtime->handleTrap(rdram, ctx); }
    // 0x277bb0: 0x22535016  addi        $s3, $s2, 0x5016
    ctx->pc = 0x277bb0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)20502, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x277bb4: 0x224ebf06  addi        $t6, $s2, -0x40FA
    ctx->pc = 0x277bb4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)4294950662, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x277bb8: 0x424ab014  .word       0x424AB014                   # INVALID     $s2, $t2, -0x4FEC # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277bb8u;
    // Unhandled COP0 instruction format: 0x12
    // 0x277bbc: 0x25ab796  .word       0x025AB796                   # dsrlv       $s6, $k0, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bbcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x277bc0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x277BC0u;
    SET_GPR_U32(ctx, 31, 0x277BC8u);
    ctx->pc = 0x277BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277BC0u;
            // 0x277bc4: 0x25ab796  .word       0x025AB796                   # dsrlv       $s6, $k0, $s2 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) >> (GPR_U32(ctx, 18) & 0x3F));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BC8u; }
        if (ctx->pc != 0x277BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BC8u; }
        if (ctx->pc != 0x277BC8u) { return; }
    }
    ctx->pc = 0x277BC8u;
label_277bc8:
    // 0x277bc8: 0x425abf06  .word       0x425ABF06                   # INVALID     $s2, $k0, -0x40FA # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x277bc8u;
    // Unhandled COP0 instruction format: 0x12
    // 0x277bcc: 0x65abf46  .word       0x065ABF46                   # INVALID     $s2, $k0, -0x40BA # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x277bccu;
    // Unhandled REGIMM instruction: 0x1A
    // 0x277bd0: 0x67eb7d8  .word       0x067EB7D8                   # INVALID     $s3, $fp, -0x4828 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x277bd0u;
    // Unhandled REGIMM instruction: 0x1E
    // 0x277bd4: 0x27ab354  .word       0x027AB354                   # dsllv       $s6, $k0, $s3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x277bd8: 0x25ab796  .word       0x025AB796                   # dsrlv       $s6, $k0, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bd8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x277bdc: 0x25ab796  .word       0x025AB796                   # dsrlv       $s6, $k0, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x277bdcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 26) >> (GPR_U32(ctx, 18) & 0x3F));
    // 0x277be0: 0xc23abf54  ll          $k0, -0x40AC($s1)
    ctx->pc = 0x277be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294950740); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x277be4: 0xa21abf54  sb          $k0, -0x40AC($s0)
    ctx->pc = 0x277be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294950740), (uint8_t)GPR_U32(ctx, 26));
    // 0x277be8: 0x48ebf56  tnei        $a0, -0x40AA
    ctx->pc = 0x277be8u;
    if (GPR_S64(ctx, 4) != (int64_t)(int32_t)4294950742) { runtime->handleTrap(rdram, ctx); }
    // 0x277bec: 0xedabf56  jal         func_B6AFD58
    ctx->pc = 0x277BECu;
    SET_GPR_U32(ctx, 31, 0x277BF4u);
    ctx->pc = 0x277BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277BECu;
            // 0x277bf0: 0x425bbf16  .word       0x425BBF16                   # INVALID     $s2, $k1, -0x40EA # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x12
        ctx->in_delay_slot = false;
    ctx->pc = 0xB6AFD58u;
    {
        auto targetFn = runtime->lookupFunction(0xB6AFD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277BF4u; }
        if (ctx->pc != 0x277BF4u) { return; }
    }
    ctx->pc = 0x277BF4u;
label_277bf4:
    // 0x277bf4: 0x2fabf36  tne         $s7, $k0, 764
    ctx->pc = 0x277bf4u;
    if (GPR_U64(ctx, 23) != GPR_U64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
    // 0x277bf8: 0x62dab256  daddi       $k0, $s6, -0x4DAA
    ctx->pc = 0x277bf8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 22); int64_t imm = (int64_t)(int32_t)4294947414; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, res); }
    // 0x277bfc: 0x827abf54  lb          $k0, -0x40AC($s3)
    ctx->pc = 0x277bfcu;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294950740)));
    // 0x277c00: 0xedabf56  jal         func_B6AFD58
    ctx->pc = 0x277C00u;
    SET_GPR_U32(ctx, 31, 0x277C08u);
    ctx->pc = 0x277C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277C00u;
            // 0x277c04: 0x425bbf16  .word       0x425BBF16                   # INVALID     $s2, $k1, -0x40EA # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x12
        ctx->in_delay_slot = false;
    ctx->pc = 0xB6AFD58u;
    {
        auto targetFn = runtime->lookupFunction(0xB6AFD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C08u; }
        if (ctx->pc != 0x277C08u) { return; }
    }
    ctx->pc = 0x277C08u;
label_277c08:
    // 0x277c08: 0x46f8b79c  .word       0x46F8B79C                   # INVALID     $s7, $t8, -0x4864 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x277c08u;
    // Unhandled FPU instruction: format 0x17, function 0x1C
    // 0x277c0c: 0x1fc5551a  .word       0x1FC5551A                   # bgtz        $fp, . + 4 + (0x551A << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277C0Cu;
    {
        const bool branch_taken_0x277c0c = (GPR_S32(ctx, 30) > 0);
        ctx->pc = 0x277C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C0Cu;
            // 0x277c10: 0x425aa386  .word       0x425AA386                   # INVALID     $s2, $k0, -0x5C7A # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        // Unhandled COP0 instruction format: 0x12
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c0c) {
            ctx->pc = 0x28D078u;
            return;
        }
    }
    ctx->pc = 0x277C14u;
    // 0x277c14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x277C14u;
    {
        const bool branch_taken_0x277c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c14) {
            ctx->pc = 0x277C44u;
            goto label_277c44;
        }
    }
    ctx->pc = 0x277C1Cu;
    // 0x277c1c: 0x8fd730fd  lw          $s7, 0x30FD($fp)
    ctx->pc = 0x277c1cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12541)));
    // 0x277c20: 0xa3357949  sb          $s5, 0x7949($t9)
    ctx->pc = 0x277c20u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 31049), (uint8_t)GPR_U32(ctx, 21));
    // 0x277c24: 0xffea0a32  sd          $t2, 0xA32($ra)
    ctx->pc = 0x277c24u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 2610), GPR_U64(ctx, 10));
    // 0x277c28: 0x2b50820  add         $at, $s5, $s5
    ctx->pc = 0x277c28u;
    {     int32_t rs_val = GPR_S32(ctx, 21);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x277c2c: 0x24727608  addiu       $s2, $v1, 0x7608
    ctx->pc = 0x277c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 30216));
    // 0x277c30: 0xa1d6c449  sb          $s6, -0x3BB7($t6)
    ctx->pc = 0x277c30u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294952009), (uint8_t)GPR_U32(ctx, 22));
    // 0x277c34: 0xf98a9b86  sqc2        $vf10, -0x647A($t4)
    ctx->pc = 0x277c34u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 4294941574), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x277c38: 0x98081661  lwr         $t0, 0x1661($zero)
    ctx->pc = 0x277c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5729); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x277c3c: 0xf98a9ad2  sqc2        $vf10, -0x652E($t4)
    ctx->pc = 0x277c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 4294941394), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x277c40: 0x0  nop
    ctx->pc = 0x277c40u;
    // NOP
label_277c44:
    // 0x277c44: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x277c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x277c48: 0x24427c34  addiu       $v0, $v0, 0x7C34
    ctx->pc = 0x277c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31796));
    // 0x277c4c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x277c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x277c50: 0x24847c14  addiu       $a0, $a0, 0x7C14
    ctx->pc = 0x277c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31764));
    // 0x277c54: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x277c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x277c58: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x277c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x277c5c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x277C5Cu;
    SET_GPR_U32(ctx, 31, 0x277C64u);
    ctx->pc = 0x277C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277C5Cu;
            // 0x277c60: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C64u; }
        if (ctx->pc != 0x277C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277C64u; }
        if (ctx->pc != 0x277C64u) { return; }
    }
    ctx->pc = 0x277C64u;
label_277c64:
    // 0x277c64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x277c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277c68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277c6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x277c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277c70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x277c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277c74: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x277c74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277c78: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x277c78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277c7c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x277c7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x277c80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x277c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277c84: 0xc7b60058  lwc1        $f22, 0x58($sp)
    ctx->pc = 0x277c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x277c88: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x277c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x277c8c: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x277c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x277c90: 0x3e00008  jr          $ra
    ctx->pc = 0x277C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277C90u;
            // 0x277c94: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277C98u;
    ctx->pc = 0x277c98u;
}
