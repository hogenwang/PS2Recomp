#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00277F18
// Address: 0x277f18 - 0x278478
void sub_00277F18_0x277f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277F18_0x277f18");
#endif

    switch (ctx->pc) {
        case 0x277f7cu: goto label_277f7c;
        case 0x277f8cu: goto label_277f8c;
        case 0x277ff0u: goto label_277ff0;
        case 0x277ff8u: goto label_277ff8;
        case 0x27800cu: goto label_27800c;
        case 0x27804cu: goto label_27804c;
        case 0x278060u: goto label_278060;
        case 0x2780b0u: goto label_2780b0;
        case 0x2780d4u: goto label_2780d4;
        case 0x278120u: goto label_278120;
        case 0x27812cu: goto label_27812c;
        case 0x278180u: goto label_278180;
        case 0x278188u: goto label_278188;
        case 0x2781a8u: goto label_2781a8;
        case 0x2781d0u: goto label_2781d0;
        case 0x2781e4u: goto label_2781e4;
        case 0x278230u: goto label_278230;
        case 0x278250u: goto label_278250;
        case 0x278294u: goto label_278294;
        case 0x27829cu: goto label_27829c;
        case 0x2782acu: goto label_2782ac;
        case 0x2782b8u: goto label_2782b8;
        case 0x2782e0u: goto label_2782e0;
        case 0x27830cu: goto label_27830c;
        case 0x278318u: goto label_278318;
        case 0x278338u: goto label_278338;
        case 0x278378u: goto label_278378;
        case 0x278380u: goto label_278380;
        case 0x2783f0u: goto label_2783f0;
        case 0x2783f8u: goto label_2783f8;
        default: break;
    }

    ctx->pc = 0x277f18u;

    // 0x277f18: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x277f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x277f1c: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x277f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x277f20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x277f20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f24: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x277f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x277f28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x277f28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f2c: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x277f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x277f30: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x277f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x277f34: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x277f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x277f38: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x277f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x277f3c: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x277f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x277f40: 0xe7b60158  swc1        $f22, 0x158($sp)
    ctx->pc = 0x277f40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x277f44: 0xe7b50150  swc1        $f21, 0x150($sp)
    ctx->pc = 0x277f44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x277f48: 0xe7b40148  swc1        $f20, 0x148($sp)
    ctx->pc = 0x277f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x277f4c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x277f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x277f50: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x277f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x277f54: 0x24637f9c  addiu       $v1, $v1, 0x7F9C
    ctx->pc = 0x277f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32668));
    // 0x277f58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x277f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277f5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x277F5Cu;
    {
        const bool branch_taken_0x277f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277f5c) {
            ctx->pc = 0x277F7Cu;
            goto label_277f7c;
        }
    }
    ctx->pc = 0x277F64u;
    // 0x277f64: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x277f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x277f68: 0x24847fb0  addiu       $a0, $a0, 0x7FB0
    ctx->pc = 0x277f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32688));
    // 0x277f6c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x277f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x277f70: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x277f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x277f74: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x277F74u;
    SET_GPR_U32(ctx, 31, 0x277F7Cu);
    ctx->pc = 0x277F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F74u;
            // 0x277f78: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F7Cu; }
        if (ctx->pc != 0x277F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F7Cu; }
        if (ctx->pc != 0x277F7Cu) { return; }
    }
    ctx->pc = 0x277F7Cu;
label_277f7c:
    // 0x277f7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x277F7Cu;
    {
        const bool branch_taken_0x277f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277f7c) {
            ctx->pc = 0x277FB0u;
            goto label_277fb0;
        }
    }
    ctx->pc = 0x277F84u;
    // 0x277f84: 0xcb8ce6e  jal         func_2E339B8
    ctx->pc = 0x277F84u;
    SET_GPR_U32(ctx, 31, 0x277F8Cu);
    ctx->pc = 0x277F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277F84u;
            // 0x277f88: 0x8da264bd  lw          $v0, 0x64BD($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 25789)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E339B8u;
    {
        auto targetFn = runtime->lookupFunction(0x2E339B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277F8Cu; }
        if (ctx->pc != 0x277F8Cu) { return; }
    }
    ctx->pc = 0x277F8Cu;
label_277f8c:
    // 0x277f8c: 0x85821aeb  lh          $v0, 0x1AEB($t4)
    ctx->pc = 0x277f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 6891)));
    // 0x277f90: 0x87d6925b  lh          $s6, -0x6DA5($fp)
    ctx->pc = 0x277f90u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294939227)));
    // 0x277f94: 0xa3ce8aa1  sb          $t6, -0x755F($fp)
    ctx->pc = 0x277f94u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294937249), (uint8_t)GPR_U32(ctx, 14));
    // 0x277f98: 0xdf8c57e7  ld          $t4, 0x57E7($gp)
    ctx->pc = 0x277f98u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 28), 22503)));
    // 0x277f9c: 0x0  nop
    ctx->pc = 0x277f9cu;
    // NOP
    // 0x277fa0: 0x59b4cc66  .word       0x59B4CC66                   # blezl       $t5, . + 4 + (-0x339A << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277FA0u;
    {
        const bool branch_taken_0x277fa0 = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x277fa0) {
            ctx->pc = 0x277FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x277FA0u;
            // 0x277fa4: 0x98081728  lwr         $t0, 0x1728($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5928); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B13Cu;
            return;
        }
    }
    ctx->pc = 0x277FA8u;
    // 0x277fa8: 0x59b4cc2a  .word       0x59B4CC2A                   # blezl       $t5, . + 4 + (-0x33D6 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x277FA8u;
    {
        const bool branch_taken_0x277fa8 = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x277fa8) {
            ctx->pc = 0x26B054u;
            return;
        }
    }
    ctx->pc = 0x277FB0u;
label_277fb0:
    // 0x277fb0: 0xe89b6a00  swc2        $27, 0x6A00($a0)
    ctx->pc = 0x277fb0u;
    // Unhandled opcode: 0x3A
    // 0x277fb4: 0xf8926a00  sqc2        $vf18, 0x6A00($a0)
    ctx->pc = 0x277fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27136), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x277fb8: 0xf8926a00  sqc2        $vf18, 0x6A00($a0)
    ctx->pc = 0x277fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27136), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x277fbc: 0xf8926a00  sqc2        $vf18, 0x6A00($a0)
    ctx->pc = 0x277fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27136), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x277fc0: 0xa8da3e54  swl         $k0, 0x3E54($a2)
    ctx->pc = 0x277fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15956); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 26); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x277fc4: 0xc8bd5b2e  lwc2        $29, 0x5B2E($a1)
    ctx->pc = 0x277fc4u;
    // Unhandled opcode: 0x32
    // 0x277fc8: 0xc8b25830  lwc2        $18, 0x5830($a1)
    ctx->pc = 0x277fc8u;
    // Unhandled opcode: 0x32
    // 0x277fcc: 0xf5b2254b  sdc1        $f18, 0x254B($t5)
    ctx->pc = 0x277fccu;
    // Unhandled opcode: 0x3D
    // 0x277fd0: 0xf8986a00  sqc2        $vf24, 0x6A00($a0)
    ctx->pc = 0x277fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27136), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x277fd4: 0xf8926a00  sqc2        $vf18, 0x6A00($a0)
    ctx->pc = 0x277fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27136), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x277fd8: 0xf8926a00  sqc2        $vf18, 0x6A00($a0)
    ctx->pc = 0x277fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27136), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x277fdc: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x277fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x277fe0: 0x24a57fc0  addiu       $a1, $a1, 0x7FC0
    ctx->pc = 0x277fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32704));
    // 0x277fe4: 0xfbbf4aa0  sqc2        $vf31, 0x4AA0($sp)
    ctx->pc = 0x277fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 19104), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x277fe8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x277FE8u;
    SET_GPR_U32(ctx, 31, 0x277FF0u);
    ctx->pc = 0x277FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277FE8u;
            // 0x277fec: 0xdc926b06  ld          $s2, 0x6B06($a0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 4), 27398)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FF0u; }
        if (ctx->pc != 0x277FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FF0u; }
        if (ctx->pc != 0x277FF0u) { return; }
    }
    ctx->pc = 0x277FF0u;
label_277ff0:
    // 0x277ff0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x277FF0u;
    SET_GPR_U32(ctx, 31, 0x277FF8u);
    ctx->pc = 0x277FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277FF0u;
            // 0x277ff4: 0xfbbf4aa0  sqc2        $vf31, 0x4AA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 19104), _mm_castps_si128(ctx->vu0_vf[31]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FF8u; }
        if (ctx->pc != 0x277FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277FF8u; }
        if (ctx->pc != 0x277FF8u) { return; }
    }
    ctx->pc = 0x277FF8u;
label_277ff8:
    // 0x277ff8: 0xf8bfea40  sqc2        $vf31, -0x15C0($a1)
    ctx->pc = 0x277ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4294961728), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x277ffc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x277FFCu;
    {
        const bool branch_taken_0x277ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ffc) {
            ctx->pc = 0x27802Cu;
            goto label_27802c;
        }
    }
    ctx->pc = 0x278004u;
    // 0x278004: 0xc196c0f  jal         func_65B03C
    ctx->pc = 0x278004u;
    SET_GPR_U32(ctx, 31, 0x27800Cu);
    ctx->pc = 0x278008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278004u;
            // 0x278008: 0xdfff8297  ld          $ra, -0x7D69($ra) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 31), 4294935191)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x65B03Cu;
    {
        auto targetFn = runtime->lookupFunction(0x65B03Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27800Cu; }
        if (ctx->pc != 0x27800Cu) { return; }
    }
    ctx->pc = 0x27800Cu;
label_27800c:
    // 0x27800c: 0xa3987c79  sb          $t8, 0x7C79($gp)
    ctx->pc = 0x27800cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 31865), (uint8_t)GPR_U32(ctx, 24));
    // 0x278010: 0x87c436d3  lh          $a0, 0x36D3($fp)
    ctx->pc = 0x278010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 14035)));
    // 0x278014: 0xd13020  add         $a2, $a2, $s1
    ctx->pc = 0x278014u;
    {     int32_t rs_val = GPR_S32(ctx, 6);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x278018: 0xfeb661aa  sd          $s6, 0x61AA($s5)
    ctx->pc = 0x278018u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 25002), GPR_U64(ctx, 22));
    // 0x27801c: 0x59b66cc4  .word       0x59B66CC4                   # blezl       $t5, . + 4 + (0x6CC4 << 2) # 00160000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27801Cu;
    {
        const bool branch_taken_0x27801c = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x27801c) {
            ctx->pc = 0x278020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27801Cu;
            // 0x278020: 0x98081729  lwr         $t0, 0x1729($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 5929); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x293330u;
            return;
        }
    }
    ctx->pc = 0x278024u;
    // 0x278024: 0x59b66c88  .word       0x59B66C88                   # blezl       $t5, . + 4 + (0x6C88 << 2) # 00160000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278024u;
    {
        const bool branch_taken_0x278024 = (GPR_S32(ctx, 13) <= 0);
        if (branch_taken_0x278024) {
            ctx->pc = 0x293248u;
            return;
        }
    }
    ctx->pc = 0x27802Cu;
label_27802c:
    // 0x27802c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27802cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278030: 0x2442801c  addiu       $v0, $v0, -0x7FE4
    ctx->pc = 0x278030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934556));
    // 0x278034: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x278034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x278038: 0x24847ffc  addiu       $a0, $a0, 0x7FFC
    ctx->pc = 0x278038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32764));
    // 0x27803c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27803cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278040: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x278040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278044: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278044u;
    SET_GPR_U32(ctx, 31, 0x27804Cu);
    ctx->pc = 0x278048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278044u;
            // 0x278048: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27804Cu; }
        if (ctx->pc != 0x27804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27804Cu; }
        if (ctx->pc != 0x27804Cu) { return; }
    }
    ctx->pc = 0x27804Cu;
label_27804c:
    // 0x27804c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278050: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x278050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278058: 0xc09de88  jal         func_277A20
    ctx->pc = 0x278058u;
    SET_GPR_U32(ctx, 31, 0x278060u);
    ctx->pc = 0x27805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278058u;
            // 0x27805c: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x277A20u;
    if (runtime->hasFunction(0x277A20u)) {
        auto targetFn = runtime->lookupFunction(0x277A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278060u; }
        if (ctx->pc != 0x278060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00277A20_0x277a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278060u; }
        if (ctx->pc != 0x278060u) { return; }
    }
    ctx->pc = 0x278060u;
label_278060:
    // 0x278060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278064: 0x48200f9  bltzl       $a0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x278064u;
    {
        const bool branch_taken_0x278064 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x278064) {
            ctx->pc = 0x278068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x278064u;
            // 0x278068: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27844Cu;
            goto label_27844c;
        }
    }
    ctx->pc = 0x27806Cu;
    // 0x27806c: 0x108000f6  beqz        $a0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x27806Cu;
    {
        const bool branch_taken_0x27806c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x278070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27806Cu;
            // 0x278070: 0x2402ff96  addiu       $v0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27806c) {
            ctx->pc = 0x278448u;
            goto label_278448;
        }
    }
    ctx->pc = 0x278074u;
    // 0x278074: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x278074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x278078: 0x546000f4  bnel        $v1, $zero, . + 4 + (0xF4 << 2)
    ctx->pc = 0x278078u;
    {
        const bool branch_taken_0x278078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x278078) {
            ctx->pc = 0x27807Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x278078u;
            // 0x27807c: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27844Cu;
            goto label_27844c;
        }
    }
    ctx->pc = 0x278080u;
    // 0x278080: 0x2a48821  addu        $s1, $s5, $a0
    ctx->pc = 0x278080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x278084: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x278084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x278088: 0x246380d0  addiu       $v1, $v1, -0x7F30
    ctx->pc = 0x278088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934736));
    // 0x27808c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278090: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278090u;
    {
        const bool branch_taken_0x278090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278090) {
            ctx->pc = 0x2780B0u;
            goto label_2780b0;
        }
    }
    ctx->pc = 0x278098u;
    // 0x278098: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27809c: 0x248480e4  addiu       $a0, $a0, -0x7F1C
    ctx->pc = 0x27809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934756));
    // 0x2780a0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2780a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2780a4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2780a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2780a8: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2780A8u;
    SET_GPR_U32(ctx, 31, 0x2780B0u);
    ctx->pc = 0x2780ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2780A8u;
            // 0x2780ac: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780B0u; }
        if (ctx->pc != 0x2780B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780B0u; }
        if (ctx->pc != 0x2780B0u) { return; }
    }
    ctx->pc = 0x2780B0u;
label_2780b0:
    // 0x2780b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2780B0u;
    {
        const bool branch_taken_0x2780b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2780b0) {
            ctx->pc = 0x2780E4u;
            goto label_2780e4;
        }
    }
    ctx->pc = 0x2780B8u;
    // 0x2780b8: 0x1836020  add         $t4, $t4, $v1
    ctx->pc = 0x2780b8u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x2780bc: 0x25ed2618  addiu       $t5, $t7, 0x2618
    ctx->pc = 0x2780bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 9752));
    // 0x2780c0: 0xa075f539  sb          $s5, -0xAC7($v1)
    ctx->pc = 0x2780c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964537), (uint8_t)GPR_U32(ctx, 21));
    // 0x2780c4: 0x8faad10d  lw          $t2, -0x2EF3($sp)
    ctx->pc = 0x2780c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294955277)));
    // 0x2780c8: 0x8e4a8635  lw          $t2, -0x79CB($s2)
    ctx->pc = 0x2780c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936117)));
    // 0x2780cc: 0xc09bc2f  jal         func_26F0BC
    ctx->pc = 0x2780CCu;
    SET_GPR_U32(ctx, 31, 0x2780D4u);
    ctx->pc = 0x26F0BCu;
    if (runtime->hasFunction(0x26F0BCu)) {
        auto targetFn = runtime->lookupFunction(0x26F0BCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780D4u; }
        if (ctx->pc != 0x2780D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026F0BC_0x26f0bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2780D4u; }
        if (ctx->pc != 0x2780D4u) { return; }
    }
    ctx->pc = 0x2780D4u;
label_2780d4:
    // 0x2780d4: 0x79694a71  lq          $t1, 0x4A71($t3)
    ctx->pc = 0x2780d4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 11), 19057)));
    // 0x2780d8: 0x98081776  lwr         $t0, 0x1776($zero)
    ctx->pc = 0x2780d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6006); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2780dc: 0x79694a3d  lq          $t1, 0x4A3D($t3)
    ctx->pc = 0x2780dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 11), 19005)));
    // 0x2780e0: 0x0  nop
    ctx->pc = 0x2780e0u;
    // NOP
label_2780e4:
    // 0x2780e4: 0xe00a8957  sc          $t2, -0x76A9($zero)
    ctx->pc = 0x2780e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294936919); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 10)); SET_GPR_S32(ctx, 10, 1); } else { SET_GPR_S32(ctx, 10, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2780e8: 0xe04a8977  sc          $t2, -0x7689($v0)
    ctx->pc = 0x2780e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294936951); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 10)); SET_GPR_S32(ctx, 10, 1); } else { SET_GPR_S32(ctx, 10, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2780ec: 0xe04a8977  sc          $t2, -0x7689($v0)
    ctx->pc = 0x2780ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294936951); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 10)); SET_GPR_S32(ctx, 10, 1); } else { SET_GPR_S32(ctx, 10, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2780f0: 0xe04a8977  sc          $t2, -0x7689($v0)
    ctx->pc = 0x2780f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294936951); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 10)); SET_GPR_S32(ctx, 10, 1); } else { SET_GPR_S32(ctx, 10, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2780f4: 0x5997387a  .word       0x5997387A                   # blezl       $t4, . + 4 + (0x387A << 2) # 00170000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2780F4u;
    {
        const bool branch_taken_0x2780f4 = (GPR_S32(ctx, 12) <= 0);
        if (branch_taken_0x2780f4) {
            ctx->pc = 0x2780F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2780F4u;
            // 0x2780f8: 0x50f35ce2  beql        $a3, $s3, . + 4 + (0x5CE2 << 2) (Delay Slot)
        // Likely branch instruction at 0x2780F8 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x2862E0u;
            return;
        }
    }
    ctx->pc = 0x2780FCu;
    // 0x2780fc: 0x79df3446  lq          $ra, 0x3446($t6)
    ctx->pc = 0x2780fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 14), 13382)));
    // 0x278100: 0x48ca68a6  .word       0x48CA68A6                   # ctc2.ni     $t2, $vi13 # 000000A6 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x278100u;
    ctx->vu0_vpu_stat3 = GPR_U32(ctx, 10);
    // 0x278104: 0xe04a8977  sc          $t2, -0x7689($v0)
    ctx->pc = 0x278104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294936951); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 10)); SET_GPR_S32(ctx, 10, 1); } else { SET_GPR_S32(ctx, 10, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x278108: 0xe04a8977  sc          $t2, -0x7689($v0)
    ctx->pc = 0x278108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294936951); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 10)); SET_GPR_S32(ctx, 10, 1); } else { SET_GPR_S32(ctx, 10, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27810c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27810cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x278110: 0x24a580f4  addiu       $a1, $a1, -0x7F0C
    ctx->pc = 0x278110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934772));
    // 0x278114: 0x604805c3  daddi       $t0, $v0, 0x5C3
    ctx->pc = 0x278114u;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)1475; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x278118: 0xc04a966  jal         func_12A598
    ctx->pc = 0x278118u;
    SET_GPR_U32(ctx, 31, 0x278120u);
    ctx->pc = 0x27811Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278118u;
            // 0x27811c: 0xf8ce9977  sqc2        $vf14, -0x6689($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 4294941047), _mm_castps_si128(ctx->vu0_vf[14]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278120u; }
        if (ctx->pc != 0x278120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278120u; }
        if (ctx->pc != 0x278120u) { return; }
    }
    ctx->pc = 0x278120u;
label_278120:
    // 0x278120: 0x604805c3  daddi       $t0, $v0, 0x5C3
    ctx->pc = 0x278120u;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)1475; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
    // 0x278124: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x278124u;
    SET_GPR_U32(ctx, 31, 0x27812Cu);
    ctx->pc = 0x278128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278124u;
            // 0x278128: 0xa04805c1  sb          $t0, 0x5C1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1473), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27812Cu; }
        if (ctx->pc != 0x27812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27812Cu; }
        if (ctx->pc != 0x27812Cu) { return; }
    }
    ctx->pc = 0x27812Cu;
label_27812c:
    // 0x27812c: 0xe04b89c1  sc          $t3, -0x763F($v0)
    ctx->pc = 0x27812cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294937025); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 11)); SET_GPR_S32(ctx, 11, 1); } else { SET_GPR_S32(ctx, 11, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x278130: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x278130u;
    {
        const bool branch_taken_0x278130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278130) {
            ctx->pc = 0x278160u;
            goto label_278160;
        }
    }
    ctx->pc = 0x278138u;
    // 0x278138: 0xa0c20221  sb          $v0, 0x221($a2)
    ctx->pc = 0x278138u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 545), (uint8_t)GPR_U32(ctx, 2));
    // 0x27813c: 0xdd5ecc87  ld          $fp, -0x3379($t2)
    ctx->pc = 0x27813cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 10), 4294954119)));
    // 0x278140: 0xa318c659  sb          $t8, -0x39A7($t8)
    ctx->pc = 0x278140u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 4294952537), (uint8_t)GPR_U32(ctx, 24));
    // 0x278144: 0x8d8d71cd  lw          $t5, 0x71CD($t4)
    ctx->pc = 0x278144u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 29133)));
    // 0x278148: 0x8587076b  lh          $a3, 0x76B($t4)
    ctx->pc = 0x278148u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 1899)));
    // 0x27814c: 0x26547890  addiu       $s4, $s2, 0x7890
    ctx->pc = 0x27814cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 30864));
    // 0x278150: 0x717a4969  .word       0x717A4969                   # INVALID     $t3, $k0, 0x4969 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x278150u;
    // Unhandled MMI3 instruction: function 0x5
    // 0x278154: 0x98081777  lwr         $t0, 0x1777($zero)
    ctx->pc = 0x278154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6007); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x278158: 0x717a4925  .word       0x717A4925                   # INVALID     $t3, $k0, 0x4925 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x278158u;
    // Unhandled MMI instruction: function 0x25
    // 0x27815c: 0x0  nop
    ctx->pc = 0x27815cu;
    // NOP
label_278160:
    // 0x278160: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x278160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278164: 0x24428150  addiu       $v0, $v0, -0x7EB0
    ctx->pc = 0x278164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934864));
    // 0x278168: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27816c: 0x24848130  addiu       $a0, $a0, -0x7ED0
    ctx->pc = 0x27816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934832));
    // 0x278170: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x278170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278174: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278178: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278178u;
    SET_GPR_U32(ctx, 31, 0x278180u);
    ctx->pc = 0x27817Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278178u;
            // 0x27817c: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278180u; }
        if (ctx->pc != 0x278180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278180u; }
        if (ctx->pc != 0x278180u) { return; }
    }
    ctx->pc = 0x278180u;
label_278180:
    // 0x278180: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278180u;
    {
        const bool branch_taken_0x278180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278180u;
            // 0x278184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278180) {
            ctx->pc = 0x278198u;
            goto label_278198;
        }
    }
    ctx->pc = 0x278188u;
label_278188:
    // 0x278188: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x278188u;
    {
        const bool branch_taken_0x278188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x278188) {
            ctx->pc = 0x27818Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x278188u;
            // 0x27818c: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x278198u;
            goto label_278198;
        }
    }
    ctx->pc = 0x278190u;
    // 0x278190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278194: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x278194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_278198:
    // 0x278198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27819c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27819cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781a0: 0xc09de88  jal         func_277A20
    ctx->pc = 0x2781A0u;
    SET_GPR_U32(ctx, 31, 0x2781A8u);
    ctx->pc = 0x2781A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2781A0u;
            // 0x2781a4: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x277A20u;
    if (runtime->hasFunction(0x277A20u)) {
        auto targetFn = runtime->lookupFunction(0x277A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781A8u; }
        if (ctx->pc != 0x2781A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00277A20_0x277a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781A8u; }
        if (ctx->pc != 0x2781A8u) { return; }
    }
    ctx->pc = 0x2781A8u;
label_2781a8:
    // 0x2781a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2781a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781ac: 0x48000a6  bltz        $a0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2781ACu;
    {
        const bool branch_taken_0x2781ac = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2781B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781ACu;
            // 0x2781b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781ac) {
            ctx->pc = 0x278448u;
            goto label_278448;
        }
    }
    ctx->pc = 0x2781B4u;
    // 0x2781b4: 0x1490fff4  bne         $a0, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2781B4u;
    {
        const bool branch_taken_0x2781b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x2781B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781B4u;
            // 0x2781b8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781b4) {
            ctx->pc = 0x278188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278188;
        }
    }
    ctx->pc = 0x2781BCu;
    // 0x2781bc: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x2781bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2781c0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2781c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2781c4: 0x24a59fb0  addiu       $a1, $a1, -0x6050
    ctx->pc = 0x2781c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942640));
    // 0x2781c8: 0xc09df26  jal         func_277C98
    ctx->pc = 0x2781C8u;
    SET_GPR_U32(ctx, 31, 0x2781D0u);
    ctx->pc = 0x2781CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2781C8u;
            // 0x2781cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x277C98u;
    if (runtime->hasFunction(0x277C98u)) {
        auto targetFn = runtime->lookupFunction(0x277C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781D0u; }
        if (ctx->pc != 0x2781D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00277C98_0x277c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781D0u; }
        if (ctx->pc != 0x2781D0u) { return; }
    }
    ctx->pc = 0x2781D0u;
label_2781d0:
    // 0x2781d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2781d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2781d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781d8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2781d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2781dc: 0xc04ae38  jal         func_12B8E0
    ctx->pc = 0x2781DCu;
    SET_GPR_U32(ctx, 31, 0x2781E4u);
    ctx->pc = 0x2781E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2781DCu;
            // 0x2781e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B8E0u;
    if (runtime->hasFunction(0x12B8E0u)) {
        auto targetFn = runtime->lookupFunction(0x12B8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781E4u; }
        if (ctx->pc != 0x2781E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B8E0_0x12b8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781E4u; }
        if (ctx->pc != 0x2781E4u) { return; }
    }
    ctx->pc = 0x2781E4u;
label_2781e4:
    // 0x2781e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2781e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2781e8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2781e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2781ec: 0x2402ff96  addiu       $v0, $zero, -0x6A
    ctx->pc = 0x2781ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x2781f0: 0x34038033  ori         $v1, $zero, 0x8033
    ctx->pc = 0x2781f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32819);
    // 0x2781f4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2781f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2781f8: 0x14600093  bnez        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x2781F8u;
    {
        const bool branch_taken_0x2781f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2781FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781F8u;
            // 0x2781fc: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781f8) {
            ctx->pc = 0x278448u;
            goto label_278448;
        }
    }
    ctx->pc = 0x278200u;
    // 0x278200: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x278200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278204: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x278204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x278208: 0x24638250  addiu       $v1, $v1, -0x7DB0
    ctx->pc = 0x278208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935120));
    // 0x27820c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278210: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278210u;
    {
        const bool branch_taken_0x278210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278210) {
            ctx->pc = 0x278230u;
            goto label_278230;
        }
    }
    ctx->pc = 0x278218u;
    // 0x278218: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27821c: 0x24848264  addiu       $a0, $a0, -0x7D9C
    ctx->pc = 0x27821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935140));
    // 0x278220: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x278220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x278224: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x278224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x278228: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278228u;
    SET_GPR_U32(ctx, 31, 0x278230u);
    ctx->pc = 0x27822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278228u;
            // 0x27822c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278230u; }
        if (ctx->pc != 0x278230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278230u; }
        if (ctx->pc != 0x278230u) { return; }
    }
    ctx->pc = 0x278230u;
label_278230:
    // 0x278230: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x278230u;
    {
        const bool branch_taken_0x278230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278230) {
            ctx->pc = 0x278264u;
            goto label_278264;
        }
    }
    ctx->pc = 0x278238u;
    // 0x278238: 0xdff7c557  ld          $s7, -0x3AA9($ra)
    ctx->pc = 0x278238u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 31), 4294952279)));
    // 0x27823c: 0xa1a853c9  sb          $t0, 0x53C9($t5)
    ctx->pc = 0x27823cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 21449), (uint8_t)GPR_U32(ctx, 8));
    // 0x278240: 0xffcaeab2  sd          $t2, -0x154E($fp)
    ctx->pc = 0x278240u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294961842), GPR_U64(ctx, 10));
    // 0x278244: 0xa2673909  sb          $a3, 0x3909($s3)
    ctx->pc = 0x278244u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 14601), (uint8_t)GPR_U32(ctx, 7));
    // 0x278248: 0xc6200cf  jal         func_188033C
    ctx->pc = 0x278248u;
    SET_GPR_U32(ctx, 31, 0x278250u);
    ctx->pc = 0x27824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278248u;
            // 0x27824c: 0xa24f5a19  sb          $t7, 0x5A19($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 23065), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188033Cu;
    {
        auto targetFn = runtime->lookupFunction(0x188033Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278250u; }
        if (ctx->pc != 0x278250u) { return; }
    }
    ctx->pc = 0x278250u;
label_278250:
    // 0x278250: 0x0  nop
    ctx->pc = 0x278250u;
    // NOP
    // 0x278254: 0xd1199063  lld         $t9, -0x6F9D($t0)
    ctx->pc = 0x278254u;
    // Unhandled opcode: 0x34
    // 0x278258: 0x980817ce  lwr         $t0, 0x17CE($zero)
    ctx->pc = 0x278258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6094); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x27825c: 0xd119903b  lld         $t9, -0x6FC5($t0)
    ctx->pc = 0x27825cu;
    // Unhandled opcode: 0x34
    // 0x278260: 0x0  nop
    ctx->pc = 0x278260u;
    // NOP
label_278264:
    // 0x278264: 0xda513bbc  lqc2        $vf17, 0x3BBC($s2)
    ctx->pc = 0x278264u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 15292)));
    // 0x278268: 0xca513fbc  lwc2        $17, 0x3FBC($s2)
    ctx->pc = 0x278268u;
    // Unhandled opcode: 0x32
    // 0x27826c: 0xca513fbc  lwc2        $17, 0x3FBC($s2)
    ctx->pc = 0x27826cu;
    // Unhandled opcode: 0x32
    // 0x278270: 0xca513fbc  lwc2        $17, 0x3FBC($s2)
    ctx->pc = 0x278270u;
    // Unhandled opcode: 0x32
    // 0x278274: 0xca5132b6  lwc2        $17, 0x32B6($s2)
    ctx->pc = 0x278274u;
    // Unhandled opcode: 0x32
    // 0x278278: 0xca513fbc  lwc2        $17, 0x3FBC($s2)
    ctx->pc = 0x278278u;
    // Unhandled opcode: 0x32
    // 0x27827c: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x27827cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x278280: 0x26108274  addiu       $s0, $s0, -0x7D8C
    ctx->pc = 0x278280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935156));
    // 0x278284: 0xc9f1129c  lwc2        $17, 0x129C($t7)
    ctx->pc = 0x278284u;
    // Unhandled opcode: 0x32
    // 0x278288: 0xc8511294  lwc2        $17, 0x1294($v0)
    ctx->pc = 0x278288u;
    // Unhandled opcode: 0x32
    // 0x27828c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x27828Cu;
    SET_GPR_U32(ctx, 31, 0x278294u);
    ctx->pc = 0x278290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27828Cu;
            // 0x278290: 0xee573fbd  .word       0xEE573FBD                   # INVALID     $s2, $s7, 0x3FBD # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x3B
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278294u; }
        if (ctx->pc != 0x278294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278294u; }
        if (ctx->pc != 0x278294u) { return; }
    }
    ctx->pc = 0x278294u;
label_278294:
    // 0x278294: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x278294u;
    SET_GPR_U32(ctx, 31, 0x27829Cu);
    ctx->pc = 0x278298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278294u;
            // 0x278298: 0xc851129c  lwc2        $17, 0x129C($v0) (Delay Slot)
        // Unhandled opcode: 0x32
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27829Cu; }
        if (ctx->pc != 0x27829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27829Cu; }
        if (ctx->pc != 0x27829Cu) { return; }
    }
    ctx->pc = 0x27829Cu;
label_27829c:
    // 0x27829c: 0xc8511294  lwc2        $17, 0x1294($v0)
    ctx->pc = 0x27829cu;
    // Unhandled opcode: 0x32
    // 0x2782a0: 0xc9f1129c  lwc2        $17, 0x129C($t7)
    ctx->pc = 0x2782a0u;
    // Unhandled opcode: 0x32
    // 0x2782a4: 0xc04a88c  jal         func_12A230
    ctx->pc = 0x2782A4u;
    SET_GPR_U32(ctx, 31, 0x2782ACu);
    ctx->pc = 0x2782A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782A4u;
            // 0x2782a8: 0xca11128c  lwc2        $17, 0x128C($s0) (Delay Slot)
        // Unhandled opcode: 0x32
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A230u;
    if (runtime->hasFunction(0x12A230u)) {
        auto targetFn = runtime->lookupFunction(0x12A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782ACu; }
        if (ctx->pc != 0x2782ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A230_0x12a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782ACu; }
        if (ctx->pc != 0x2782ACu) { return; }
    }
    ctx->pc = 0x2782ACu;
label_2782ac:
    // 0x2782ac: 0xc9f1129c  lwc2        $17, 0x129C($t7)
    ctx->pc = 0x2782acu;
    // Unhandled opcode: 0x32
    // 0x2782b0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2782B0u;
    SET_GPR_U32(ctx, 31, 0x2782B8u);
    ctx->pc = 0x2782B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782B0u;
            // 0x2782b4: 0xc9f1122c  lwc2        $17, 0x122C($t7) (Delay Slot)
        // Unhandled opcode: 0x32
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782B8u; }
        if (ctx->pc != 0x2782B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782B8u; }
        if (ctx->pc != 0x2782B8u) { return; }
    }
    ctx->pc = 0x2782B8u;
label_2782b8:
    // 0x2782b8: 0xca11123c  lwc2        $17, 0x123C($s0)
    ctx->pc = 0x2782b8u;
    // Unhandled opcode: 0x32
    // 0x2782bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2782BCu;
    {
        const bool branch_taken_0x2782bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2782bc) {
            ctx->pc = 0x2782ECu;
            goto label_2782ec;
        }
    }
    ctx->pc = 0x2782C4u;
    // 0x2782c4: 0xfd09851a  sd          $t1, -0x7AE6($t0)
    ctx->pc = 0x2782c4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294935834), GPR_U64(ctx, 9));
    // 0x2782c8: 0x87d5aa63  lh          $s5, -0x559D($fp)
    ctx->pc = 0x2782c8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294945379)));
    // 0x2782cc: 0x256cbab8  addiu       $t4, $t3, -0x4548
    ctx->pc = 0x2782ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294949560));
    // 0x2782d0: 0x1bf7820  add         $t7, $t5, $ra
    ctx->pc = 0x2782d0u;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x2782d4: 0x8e6d891d  lw          $t5, -0x76E3($s3)
    ctx->pc = 0x2782d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936861)));
    // 0x2782d8: 0xc27c324  jal         func_9F0C90
    ctx->pc = 0x2782D8u;
    SET_GPR_U32(ctx, 31, 0x2782E0u);
    ctx->pc = 0x2782DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2782D8u;
            // 0x2782dc: 0xd1136099  lld         $s3, 0x6099($t0) (Delay Slot)
        // Unhandled opcode: 0x34
        ctx->in_delay_slot = false;
    ctx->pc = 0x9F0C90u;
    {
        auto targetFn = runtime->lookupFunction(0x9F0C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2782E0u; }
        if (ctx->pc != 0x2782E0u) { return; }
    }
    ctx->pc = 0x2782E0u;
label_2782e0:
    // 0x2782e0: 0x980817cf  lwr         $t0, 0x17CF($zero)
    ctx->pc = 0x2782e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 6095); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2782e4: 0xd11360c1  lld         $s3, 0x60C1($t0)
    ctx->pc = 0x2782e4u;
    // Unhandled opcode: 0x34
    // 0x2782e8: 0x0  nop
    ctx->pc = 0x2782e8u;
    // NOP
label_2782ec:
    // 0x2782ec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x2782ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x2782f0: 0x244282dc  addiu       $v0, $v0, -0x7D24
    ctx->pc = 0x2782f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935260));
    // 0x2782f4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x2782f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x2782f8: 0x248482bc  addiu       $a0, $a0, -0x7D44
    ctx->pc = 0x2782f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935228));
    // 0x2782fc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2782fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278300: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278304: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278304u;
    SET_GPR_U32(ctx, 31, 0x27830Cu);
    ctx->pc = 0x278308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278304u;
            // 0x278308: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27830Cu; }
        if (ctx->pc != 0x27830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27830Cu; }
        if (ctx->pc != 0x27830Cu) { return; }
    }
    ctx->pc = 0x27830Cu;
label_27830c:
    // 0x27830c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27830Cu;
    {
        const bool branch_taken_0x27830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27830Cu;
            // 0x278310: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27830c) {
            ctx->pc = 0x278328u;
            goto label_278328;
        }
    }
    ctx->pc = 0x278314u;
    // 0x278314: 0x0  nop
    ctx->pc = 0x278314u;
    // NOP
label_278318:
    // 0x278318: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x278318u;
    {
        const bool branch_taken_0x278318 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x278318) {
            ctx->pc = 0x27831Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x278318u;
            // 0x27831c: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x278328u;
            goto label_278328;
        }
    }
    ctx->pc = 0x278320u;
    // 0x278320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278324: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x278324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_278328:
    // 0x278328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27832c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27832cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278330: 0xc09de88  jal         func_277A20
    ctx->pc = 0x278330u;
    SET_GPR_U32(ctx, 31, 0x278338u);
    ctx->pc = 0x278334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278330u;
            // 0x278334: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x277A20u;
    if (runtime->hasFunction(0x277A20u)) {
        auto targetFn = runtime->lookupFunction(0x277A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278338u; }
        if (ctx->pc != 0x278338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00277A20_0x277a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278338u; }
        if (ctx->pc != 0x278338u) { return; }
    }
    ctx->pc = 0x278338u;
label_278338:
    // 0x278338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27833c: 0x4800042  bltz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x27833Cu;
    {
        const bool branch_taken_0x27833c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x278340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27833Cu;
            // 0x278340: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27833c) {
            ctx->pc = 0x278448u;
            goto label_278448;
        }
    }
    ctx->pc = 0x278344u;
    // 0x278344: 0x1490fff4  bne         $a0, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x278344u;
    {
        const bool branch_taken_0x278344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x278348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278344u;
            // 0x278348: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278344) {
            ctx->pc = 0x278318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278318;
        }
    }
    ctx->pc = 0x27834Cu;
    // 0x27834c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x27834cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x278350: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x278350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278354: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x278358: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x278358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x27835c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27835cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x278360: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x278360u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x278364: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x278364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x278368: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x278368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27836c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x278370: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278374: 0x0  nop
    ctx->pc = 0x278374u;
    // NOP
label_278378:
    // 0x278378: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x278378u;
    SET_GPR_U32(ctx, 31, 0x278380u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278380u; }
        if (ctx->pc != 0x278380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278380u; }
        if (ctx->pc != 0x278380u) { return; }
    }
    ctx->pc = 0x278380u;
label_278380:
    // 0x278380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278384: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x278384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x278388: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x278388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x27838c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27838cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x278390: 0x0  nop
    ctx->pc = 0x278390u;
    // NOP
    // 0x278394: 0x0  nop
    ctx->pc = 0x278394u;
    // NOP
    // 0x278398: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x278398u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x27839c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27839cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2783a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2783a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2783a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2783a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2783a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2783a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2783ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2783ACu;
    {
        const bool branch_taken_0x2783ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2783B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783ACu;
            // 0x2783b0: 0x2e030100  sltiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783ac) {
            ctx->pc = 0x2783C4u;
            goto label_2783c4;
        }
    }
    ctx->pc = 0x2783B4u;
    // 0x2783b4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2783b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2783b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2783b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2783bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2783bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2783c0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x2783c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_2783c4:
    // 0x2783c4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2783C4u;
    {
        const bool branch_taken_0x2783c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2783C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2783C4u;
            // 0x2783c8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783c4) {
            ctx->pc = 0x278378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_278378;
        }
    }
    ctx->pc = 0x2783CCu;
    // 0x2783cc: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2783ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2783d0: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2783d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2783d4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2783d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2783d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2783d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783dc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2783dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2783e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2783e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2783e4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x2783e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x2783e8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2783e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2783ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2783ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2783f0:
    // 0x2783f0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2783F0u;
    SET_GPR_U32(ctx, 31, 0x2783F8u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783F8u; }
        if (ctx->pc != 0x2783F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2783F8u; }
        if (ctx->pc != 0x2783F8u) { return; }
    }
    ctx->pc = 0x2783F8u;
label_2783f8:
    // 0x2783f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2783f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2783fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2783fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x278400: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x278400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x278404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x278404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x278408: 0x0  nop
    ctx->pc = 0x278408u;
    // NOP
    // 0x27840c: 0x0  nop
    ctx->pc = 0x27840cu;
    // NOP
    // 0x278410: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x278410u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x278414: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x278414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x278418: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x278418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27841c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27841cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x278420: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x278420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x278424: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x278424u;
    {
        const bool branch_taken_0x278424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278424u;
            // 0x278428: 0x2e030004  sltiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278424) {
            ctx->pc = 0x27843Cu;
            goto label_27843c;
        }
    }
    ctx->pc = 0x27842Cu;
    // 0x27842c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27842cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x278430: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x278430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x278434: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x278434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x278438: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x278438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_27843c:
    // 0x27843c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27843Cu;
    {
        const bool branch_taken_0x27843c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x278440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27843Cu;
            // 0x278440: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27843c) {
            ctx->pc = 0x2783F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2783f0;
        }
    }
    ctx->pc = 0x278444u;
    // 0x278444: 0x2351023  subu        $v0, $s1, $s5
    ctx->pc = 0x278444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_278448:
    // 0x278448: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x278448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_27844c:
    // 0x27844c: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x27844cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x278450: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x278450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x278454: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x278454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x278458: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x278458u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27845c: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x27845cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x278460: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x278460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x278464: 0xc7b60158  lwc1        $f22, 0x158($sp)
    ctx->pc = 0x278464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x278468: 0xc7b50150  lwc1        $f21, 0x150($sp)
    ctx->pc = 0x278468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27846c: 0xc7b40148  lwc1        $f20, 0x148($sp)
    ctx->pc = 0x27846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x278470: 0x3e00008  jr          $ra
    ctx->pc = 0x278470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278470u;
            // 0x278474: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278478u;
    ctx->pc = 0x278478u;
}
