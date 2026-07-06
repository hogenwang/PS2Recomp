#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DE208
// Address: 0x2de208 - 0x2de510
void sub_002DE208_0x2de208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE208_0x2de208");
#endif

    switch (ctx->pc) {
        case 0x2de268u: goto label_2de268;
        case 0x2de2c4u: goto label_2de2c4;
        case 0x2de300u: goto label_2de300;
        case 0x2de360u: goto label_2de360;
        case 0x2de37cu: goto label_2de37c;
        case 0x2de3c8u: goto label_2de3c8;
        case 0x2de3d0u: goto label_2de3d0;
        case 0x2de440u: goto label_2de440;
        case 0x2de444u: goto label_2de444;
        case 0x2de46cu: goto label_2de46c;
        case 0x2de4a8u: goto label_2de4a8;
        case 0x2de4dcu: goto label_2de4dc;
        default: break;
    }

    ctx->pc = 0x2de208u;

    // 0x2de208: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2de208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2de20c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2de20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2de210: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2de210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de214: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2de214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2de218: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de21c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2de21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2de220: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2de220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2de224: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2de224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2de228: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2de228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2de22c: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x2de22cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2de230: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2de230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2de234: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2de234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2de238: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x2de238u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de23c: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2de23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2de240: 0x2463e288  addiu       $v1, $v1, -0x1D78
    ctx->pc = 0x2de240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959752));
    // 0x2de244: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2de244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de248: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE248u;
    {
        const bool branch_taken_0x2de248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de248) {
            ctx->pc = 0x2DE268u;
            goto label_2de268;
        }
    }
    ctx->pc = 0x2DE250u;
    // 0x2de250: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2de250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2de254: 0x2484e29c  addiu       $a0, $a0, -0x1D64
    ctx->pc = 0x2de254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959772));
    // 0x2de258: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2de258u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2de25c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2de25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2de260: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DE260u;
    SET_GPR_U32(ctx, 31, 0x2DE268u);
    ctx->pc = 0x2DE264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE260u;
            // 0x2de264: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE268u; }
        if (ctx->pc != 0x2DE268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE268u; }
        if (ctx->pc != 0x2DE268u) { return; }
    }
    ctx->pc = 0x2DE268u;
label_2de268:
    // 0x2de268: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DE268u;
    {
        const bool branch_taken_0x2de268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de268) {
            ctx->pc = 0x2DE29Cu;
            goto label_2de29c;
        }
    }
    ctx->pc = 0x2DE270u;
    // 0x2de270: 0x195c820  add         $t9, $t4, $s5
    ctx->pc = 0x2de270u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x2de274: 0x8f98c6fd  lw          $t8, -0x3903($gp)
    ctx->pc = 0x2de274u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952701)));
    // 0x2de278: 0xa1f1f1e9  sb          $s1, -0xE17($t7)
    ctx->pc = 0x2de278u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294963689), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de27c: 0xa2fdfd31  sb          $sp, -0x2CF($s7)
    ctx->pc = 0x2de27cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4294966577), (uint8_t)GPR_U32(ctx, 29));
    // 0x2de280: 0x2797dee0  addiu       $s7, $gp, -0x2120
    ctx->pc = 0x2de280u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 28), 4294958816));
    // 0x2de284: 0x276d0da0  addiu       $t5, $k1, 0xDA0
    ctx->pc = 0x2de284u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 27), 3488));
    // 0x2de288: 0x0  nop
    ctx->pc = 0x2de288u;
    // NOP
    // 0x2de28c: 0x74242b18  .word       0x74242B18                   # INVALID     $at, $a0, 0x2B18 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de28cu;
    // Unhandled opcode: 0x1D
    // 0x2de290: 0xc713174e  lwc1        $f19, 0x174E($t8)
    ctx->pc = 0x2de290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 5966)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2de294: 0x74242ae8  .word       0x74242AE8                   # INVALID     $at, $a0, 0x2AE8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de294u;
    // Unhandled opcode: 0x1D
    // 0x2de298: 0x0  nop
    ctx->pc = 0x2de298u;
    // NOP
label_2de29c:
    // 0x2de29c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2de29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2de2a0: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2de2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2de2a4: 0x20b9c9d0  addi        $t9, $a1, -0x3630
    ctx->pc = 0x2de2a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294953424, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x2de2a8: 0xe2a9c9d8  sc          $t1, -0x3628($s5)
    ctx->pc = 0x2de2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294953432); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de2ac: 0x2275d594  addi        $s5, $s3, -0x2A6C
    ctx->pc = 0x2de2acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 19), (int32_t)4294956436, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
    // 0x2de2b0: 0xe0a9c534  sc          $t1, -0x3ACC($a1)
    ctx->pc = 0x2de2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294952244); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de2b4: 0x3cfa2234  .word       0x3CFA2234                   # lui         $k0, 0x2234 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de2b4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)8756 << 16));
    // 0x2de2b8: 0xa0214560  sb          $at, 0x4560($at)
    ctx->pc = 0x2de2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17760), (uint8_t)GPR_U32(ctx, 1));
    // 0x2de2bc: 0xc0b8bb8  jal         func_2E2EE0
    ctx->pc = 0x2DE2BCu;
    SET_GPR_U32(ctx, 31, 0x2DE2C4u);
    ctx->pc = 0x2DE2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE2BCu;
            // 0x2de2c0: 0x2235d0d4  addi        $s5, $s1, -0x2F2C (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)4294955220, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2EE0u;
    if (runtime->hasFunction(0x2E2EE0u)) {
        auto targetFn = runtime->lookupFunction(0x2E2EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2C4u; }
        if (ctx->pc != 0x2DE2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2EE0_0x2e2ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE2C4u; }
        if (ctx->pc != 0x2DE2C4u) { return; }
    }
    ctx->pc = 0x2DE2C4u;
label_2de2c4:
    // 0x2de2c4: 0xa1b9cdc8  sb          $t9, -0x3238($t5)
    ctx->pc = 0x2de2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294954440), (uint8_t)GPR_U32(ctx, 25));
    // 0x2de2c8: 0x38fa2060  xori        $k0, $a3, 0x2060
    ctx->pc = 0x2de2c8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)8288);
    // 0x2de2cc: 0xe225c8d6  sc          $a1, -0x372A($s1)
    ctx->pc = 0x2de2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294953174); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 5)); SET_GPR_S32(ctx, 5, 1); } else { SET_GPR_S32(ctx, 5, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de2d0: 0x6129d628  daddi       $t1, $t1, -0x29D8
    ctx->pc = 0x2de2d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)4294956584; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x2de2d4: 0x2b9cddc  .word       0x02B9CDDC                   # dmult       $s5, $t9 # 0000CDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2de2d4u;
    // Unhandled SPECIAL instruction: 0x1C
    // 0x2de2d8: 0xe1b9c5c0  sc          $t9, -0x3A40($t5)
    ctx->pc = 0x2de2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294952384); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 25)); SET_GPR_S32(ctx, 25, 1); } else { SET_GPR_S32(ctx, 25, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de2dc: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de2e0: 0x38fa2060  xori        $k0, $a3, 0x2060
    ctx->pc = 0x2de2e0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)8288);
    // 0x2de2e4: 0xe0a9c578  sc          $t1, -0x3A88($a1)
    ctx->pc = 0x2de2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294952312); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de2e8: 0x2275d594  addi        $s5, $s3, -0x2A6C
    ctx->pc = 0x2de2e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 19), (int32_t)4294956436, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
    // 0x2de2ec: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de2f0: 0xe2b9c5a4  sc          $t9, -0x3A5C($s5)
    ctx->pc = 0x2de2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294952356); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 25)); SET_GPR_S32(ctx, 25, 1); } else { SET_GPR_S32(ctx, 25, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de2f4: 0x20b9cdd0  addi        $t9, $a1, -0x3230
    ctx->pc = 0x2de2f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294954448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x2de2f8: 0xc0b7104  jal         func_2DC410
    ctx->pc = 0x2DE2F8u;
    SET_GPR_U32(ctx, 31, 0x2DE300u);
    ctx->pc = 0x2DE2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE2F8u;
            // 0x2de2fc: 0xa2254560  sb          $a1, 0x4560($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17760), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DC410u;
    if (runtime->hasFunction(0x2DC410u)) {
        auto targetFn = runtime->lookupFunction(0x2DC410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE300u; }
        if (ctx->pc != 0x2DE300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC410_0x2dc410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE300u; }
        if (ctx->pc != 0x2DE300u) { return; }
    }
    ctx->pc = 0x2DE300u;
label_2de300:
    // 0x2de300: 0xa1b9c1c0  sb          $t9, -0x3E40($t5)
    ctx->pc = 0x2de300u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294951360), (uint8_t)GPR_U32(ctx, 25));
    // 0x2de304: 0xa0a96560  sb          $t1, 0x6560($a1)
    ctx->pc = 0x2de304u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25952), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de308: 0x38fa206c  xori        $k0, $a3, 0x206C
    ctx->pc = 0x2de308u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)8300);
    // 0x2de30c: 0xe0a9c550  sc          $t1, -0x3AB0($a1)
    ctx->pc = 0x2de30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294952272); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de310: 0x2275d594  addi        $s5, $s3, -0x2A6C
    ctx->pc = 0x2de310u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 19), (int32_t)4294956436, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
    // 0x2de314: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de314u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de318: 0xa0219150  sb          $at, -0x6EB0($at)
    ctx->pc = 0x2de318u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938960), (uint8_t)GPR_U32(ctx, 1));
    // 0x2de31c: 0xa0a15150  sb          $at, 0x5150($a1)
    ctx->pc = 0x2de31cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20816), (uint8_t)GPR_U32(ctx, 1));
    // 0x2de320: 0xe1a9c9d6  sc          $t1, -0x362A($t5)
    ctx->pc = 0x2de320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294953430); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de324: 0x2239d1d0  addi        $t9, $s1, -0x2E30
    ctx->pc = 0x2de324u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)4294955472, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x2de328: 0x239cd54  .word       0x0239CD54                   # dsllv       $t9, $t9, $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2de328u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x2de32c: 0xfdba263c  sd          $k0, 0x263C($t5)
    ctx->pc = 0x2de32cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 9788), GPR_U64(ctx, 26));
    // 0x2de330: 0x22a9c9d6  addi        $t1, $s5, -0x362A
    ctx->pc = 0x2de330u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294953430, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2de334: 0xa2250560  sb          $a1, 0x560($s1)
    ctx->pc = 0x2de334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1376), (uint8_t)GPR_U32(ctx, 5));
    // 0x2de338: 0xa0a96560  sb          $t1, 0x6560($a1)
    ctx->pc = 0x2de338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25952), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de33c: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de33cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de340: 0xa3a99150  sb          $t1, -0x6EB0($sp)
    ctx->pc = 0x2de340u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294938960), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de344: 0xa0a15150  sb          $at, 0x5150($a1)
    ctx->pc = 0x2de344u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20816), (uint8_t)GPR_U32(ctx, 1));
    // 0x2de348: 0xe1a9c9d6  sc          $t1, -0x362A($t5)
    ctx->pc = 0x2de348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294953430); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de34c: 0x2239d1d0  addi        $t9, $s1, -0x2E30
    ctx->pc = 0x2de34cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)4294955472, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x2de350: 0x239cdc0  .word       0x0239CDC0                   # sll         $t9, $t9, 23 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2de350u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 23));
    // 0x2de354: 0xfdba263c  sd          $k0, 0x263C($t5)
    ctx->pc = 0x2de354u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 9788), GPR_U64(ctx, 26));
    // 0x2de358: 0x22a9c9d6  addi        $t1, $s5, -0x362A
    ctx->pc = 0x2de358u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294953430, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2de35c: 0xe225c8d6  sc          $a1, -0x372A($s1)
    ctx->pc = 0x2de35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294953174); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 5)); SET_GPR_S32(ctx, 5, 1); } else { SET_GPR_S32(ctx, 5, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_2de360:
    // 0x2de360: 0x20b9cdd0  addi        $t9, $a1, -0x3230
    ctx->pc = 0x2de360u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)4294954448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x2de364: 0xe139cdfc  sc          $t9, -0x3204($t1)
    ctx->pc = 0x2de364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294954492); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 25)); SET_GPR_S32(ctx, 25, 1); } else { SET_GPR_S32(ctx, 25, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de368: 0x2275d594  addi        $s5, $s3, -0x2A6C
    ctx->pc = 0x2de368u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 19), (int32_t)4294956436, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
    // 0x2de36c: 0xa0214560  sb          $at, 0x4560($at)
    ctx->pc = 0x2de36cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17760), (uint8_t)GPR_U32(ctx, 1));
    // 0x2de370: 0xa0a16560  sb          $at, 0x6560($a1)
    ctx->pc = 0x2de370u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 25952), (uint8_t)GPR_U32(ctx, 1));
    // 0x2de374: 0xc0b8bfa  jal         func_2E2FE8
    ctx->pc = 0x2DE374u;
    SET_GPR_U32(ctx, 31, 0x2DE37Cu);
    ctx->pc = 0x2DE378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE374u;
            // 0x2de378: 0xa2a10560  sb          $at, 0x560($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1376), (uint8_t)GPR_U32(ctx, 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2FE8u;
    if (runtime->hasFunction(0x2E2FE8u)) {
        auto targetFn = runtime->lookupFunction(0x2E2FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE37Cu; }
        if (ctx->pc != 0x2DE37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2FE8_0x2e2fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE37Cu; }
        if (ctx->pc != 0x2DE37Cu) { return; }
    }
    ctx->pc = 0x2DE37Cu;
label_2de37c:
    // 0x2de37c: 0xa1b9c9c0  sb          $t9, -0x3640($t5)
    ctx->pc = 0x2de37cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294953408), (uint8_t)GPR_U32(ctx, 25));
    // 0x2de380: 0xa0abe560  sb          $t3, -0x1AA0($a1)
    ctx->pc = 0x2de380u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294960480), (uint8_t)GPR_U32(ctx, 11));
    // 0x2de384: 0xe0a9c5d8  sc          $t1, -0x3A28($a1)
    ctx->pc = 0x2de384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294952408); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 9)); SET_GPR_S32(ctx, 9, 1); } else { SET_GPR_S32(ctx, 9, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2de388: 0x38fa2060  xori        $k0, $a3, 0x2060
    ctx->pc = 0x2de388u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)8288);
    // 0x2de38c: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de38cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de390: 0xa0abe560  sb          $t3, -0x1AA0($a1)
    ctx->pc = 0x2de390u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294960480), (uint8_t)GPR_U32(ctx, 11));
    // 0x2de394: 0x58b8e228  .word       0x58B8E228                   # blezl       $a1, . + 4 + (-0x1DD8 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DE394u;
    {
        const bool branch_taken_0x2de394 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2de394) {
            ctx->pc = 0x2DE398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE394u;
            // 0x2de398: 0x7c3a2228  sq          $k0, 0x2228($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 8744), GPR_VEC(ctx, 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6C38u;
            return;
        }
    }
    ctx->pc = 0x2DE39Cu;
    // 0x2de39c: 0xa2bb01d5  sb          $k1, 0x1D5($s5)
    ctx->pc = 0x2de39cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 469), (uint8_t)GPR_U32(ctx, 27));
    // 0x2de3a0: 0xa227a560  sb          $a3, -0x5AA0($s1)
    ctx->pc = 0x2de3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294944096), (uint8_t)GPR_U32(ctx, 7));
    // 0x2de3a4: 0x4cb8c3d4  .word       0x4CB8C3D4                   # INVALID     $a1, $t8, -0x3C2C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de3a4u;
    // Unhandled opcode: 0x13
    // 0x2de3a8: 0xa2bb61d5  sb          $k1, 0x61D5($s5)
    ctx->pc = 0x2de3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 25045), (uint8_t)GPR_U32(ctx, 27));
    // 0x2de3ac: 0xa0abc560  sb          $t3, -0x3AA0($a1)
    ctx->pc = 0x2de3acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952288), (uint8_t)GPR_U32(ctx, 11));
    // 0x2de3b0: 0x5cb8e1d4  .word       0x5CB8E1D4                   # bgtzl       $a1, . + 4 + (-0x1E2C << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DE3B0u;
    {
        const bool branch_taken_0x2de3b0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2de3b0) {
            ctx->pc = 0x2DE3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE3B0u;
            // 0x2de3b4: 0xa2bb41d5  sb          $k1, 0x41D5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 16853), (uint8_t)GPR_U32(ctx, 27));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6B04u;
            return;
        }
    }
    ctx->pc = 0x2DE3B8u;
    // 0x2de3b8: 0x40fbcdd4  .word       0x40FBCDD4                   # INVALID     $a3, $k1, -0x322C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2de3b8u;
    // Unhandled COP0 instruction format: 0x7
    // 0x2de3bc: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de3c0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DE3C0u;
    SET_GPR_U32(ctx, 31, 0x2DE3C8u);
    ctx->pc = 0x2DE3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE3C0u;
            // 0x2de3c4: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE3C8u; }
        if (ctx->pc != 0x2DE3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE3C8u; }
        if (ctx->pc != 0x2DE3C8u) { return; }
    }
    ctx->pc = 0x2DE3C8u;
label_2de3c8:
    // 0x2de3c8: 0xa2b9cdd5  sb          $t9, -0x322B($s5)
    ctx->pc = 0x2de3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294954453), (uint8_t)GPR_U32(ctx, 25));
    // 0x2de3cc: 0xa2b1c555  sb          $s1, -0x3AAB($s5)
    ctx->pc = 0x2de3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294952277), (uint8_t)GPR_U32(ctx, 17));
label_2de3d0:
    // 0x2de3d0: 0xa1614550  sb          $at, 0x4550($t3)
    ctx->pc = 0x2de3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 17744), (uint8_t)GPR_U32(ctx, 1));
    // 0x2de3d4: 0x20f1c5d0  addi        $s1, $a3, -0x3A30
    ctx->pc = 0x2de3d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294952400, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x2de3d8: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de3dc: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de3e0: 0xa0f1ddd9  sb          $s1, -0x2227($a3)
    ctx->pc = 0x2de3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294958553), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de3e4: 0xa0f1d1dd  sb          $s1, -0x2E23($a3)
    ctx->pc = 0x2de3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294955485), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de3e8: 0xa0b3450d  sb          $s3, 0x450D($a1)
    ctx->pc = 0x2de3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17677), (uint8_t)GPR_U32(ctx, 19));
    // 0x2de3ec: 0xa0b1c445  sb          $s1, -0x3BBB($a1)
    ctx->pc = 0x2de3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952005), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de3f0: 0xa0b9edd5  sb          $t9, -0x122B($a1)
    ctx->pc = 0x2de3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294962645), (uint8_t)GPR_U32(ctx, 25));
    // 0x2de3f4: 0xa0bdc5c1  sb          $sp, -0x3A3F($a1)
    ctx->pc = 0x2de3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952385), (uint8_t)GPR_U32(ctx, 29));
    // 0x2de3f8: 0xb1c9c0  .word       0x00B1C9C0                   # sll         $t9, $s1, 7 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2de3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x2de3fc: 0xa0f1d5d1  sb          $s1, -0x2A2F($a3)
    ctx->pc = 0x2de3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294956497), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de400: 0xa0b1c445  sb          $s1, -0x3BBB($a1)
    ctx->pc = 0x2de400u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952005), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de404: 0xa0b9edd5  sb          $t9, -0x122B($a1)
    ctx->pc = 0x2de404u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294962645), (uint8_t)GPR_U32(ctx, 25));
    // 0x2de408: 0xa1e98d40  sb          $t1, -0x72C0($t7)
    ctx->pc = 0x2de408u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294937920), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de40c: 0xfd3a2664  sd          $k0, 0x2664($t1)
    ctx->pc = 0x2de40cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 9828), GPR_U64(ctx, 26));
    // 0x2de410: 0x22a9cdd6  addi        $t1, $s5, -0x322A
    ctx->pc = 0x2de410u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294954454, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2de414: 0x58b8e228  .word       0x58B8E228                   # blezl       $a1, . + 4 + (-0x1DD8 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DE414u;
    {
        const bool branch_taken_0x2de414 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2de414) {
            ctx->pc = 0x2DE418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE414u;
            // 0x2de418: 0x7c3a2228  sq          $k0, 0x2228($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 8744), GPR_VEC(ctx, 26));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6CB8u;
            return;
        }
    }
    ctx->pc = 0x2DE41Cu;
    // 0x2de41c: 0xa2bb01d5  sb          $k1, 0x1D5($s5)
    ctx->pc = 0x2de41cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 469), (uint8_t)GPR_U32(ctx, 27));
    // 0x2de420: 0xa0abc560  sb          $t3, -0x3AA0($a1)
    ctx->pc = 0x2de420u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952288), (uint8_t)GPR_U32(ctx, 11));
    // 0x2de424: 0x4cb8c3d4  .word       0x4CB8C3D4                   # INVALID     $a1, $t8, -0x3C2C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de424u;
    // Unhandled opcode: 0x13
    // 0x2de428: 0xa2bb61d5  sb          $k1, 0x61D5($s5)
    ctx->pc = 0x2de428u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 25045), (uint8_t)GPR_U32(ctx, 27));
    // 0x2de42c: 0x40fbcdd4  .word       0x40FBCDD4                   # INVALID     $a3, $k1, -0x322C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2de42cu;
    // Unhandled COP0 instruction format: 0x7
    // 0x2de430: 0x5cb8e1d4  .word       0x5CB8E1D4                   # bgtzl       $a1, . + 4 + (-0x1E2C << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2DE430u;
    {
        const bool branch_taken_0x2de430 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2de430) {
            ctx->pc = 0x2DE434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE430u;
            // 0x2de434: 0xa2bb41d5  sb          $k1, 0x41D5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 16853), (uint8_t)GPR_U32(ctx, 27));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6B84u;
            return;
        }
    }
    ctx->pc = 0x2DE438u;
    // 0x2de438: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DE438u;
    SET_GPR_U32(ctx, 31, 0x2DE440u);
    ctx->pc = 0x2DE43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE438u;
            // 0x2de43c: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE440u; }
        if (ctx->pc != 0x2DE440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE440u; }
        if (ctx->pc != 0x2DE440u) { return; }
    }
    ctx->pc = 0x2DE440u;
label_2de440:
    // 0x2de440: 0xa2b9cdd5  sb          $t9, -0x322B($s5)
    ctx->pc = 0x2de440u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294954453), (uint8_t)GPR_U32(ctx, 25));
label_2de444:
    // 0x2de444: 0xa2b1c555  sb          $s1, -0x3AAB($s5)
    ctx->pc = 0x2de444u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294952277), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de448: 0xa2e14550  sb          $at, 0x4550($s7)
    ctx->pc = 0x2de448u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 17744), (uint8_t)GPR_U32(ctx, 1));
    // 0x2de44c: 0x20f1c5d0  addi        $s1, $a3, -0x3A30
    ctx->pc = 0x2de44cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294952400, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x2de450: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de450u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de454: 0xa0a9c5d4  sb          $t1, -0x3A2C($a1)
    ctx->pc = 0x2de454u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952404), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de458: 0xa0f1ddd9  sb          $s1, -0x2227($a3)
    ctx->pc = 0x2de458u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294958553), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de45c: 0xa0f1d1dd  sb          $s1, -0x2E23($a3)
    ctx->pc = 0x2de45cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294955485), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de460: 0xa0b3450d  sb          $s3, 0x450D($a1)
    ctx->pc = 0x2de460u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17677), (uint8_t)GPR_U32(ctx, 19));
    // 0x2de464: 0xa0b1c445  sb          $s1, -0x3BBB($a1)
    ctx->pc = 0x2de464u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952005), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de468: 0xa0b9edd5  sb          $t9, -0x122B($a1)
    ctx->pc = 0x2de468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294962645), (uint8_t)GPR_U32(ctx, 25));
label_2de46c:
    // 0x2de46c: 0xa0bdc5c1  sb          $sp, -0x3A3F($a1)
    ctx->pc = 0x2de46cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952385), (uint8_t)GPR_U32(ctx, 29));
    // 0x2de470: 0xb1c974  teq         $a1, $s1, 805
    ctx->pc = 0x2de470u;
    if (GPR_U64(ctx, 5) == GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
    // 0x2de474: 0xa0f1d5d1  sb          $s1, -0x2A2F($a3)
    ctx->pc = 0x2de474u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294956497), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de478: 0xa0b1c445  sb          $s1, -0x3BBB($a1)
    ctx->pc = 0x2de478u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294952005), (uint8_t)GPR_U32(ctx, 17));
    // 0x2de47c: 0xa0b9edd5  sb          $t9, -0x122B($a1)
    ctx->pc = 0x2de47cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294962645), (uint8_t)GPR_U32(ctx, 25));
    // 0x2de480: 0xa1e98d40  sb          $t1, -0x72C0($t7)
    ctx->pc = 0x2de480u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294937920), (uint8_t)GPR_U32(ctx, 9));
    // 0x2de484: 0xfd3a2664  sd          $k0, 0x2664($t1)
    ctx->pc = 0x2de484u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 9828), GPR_U64(ctx, 26));
    // 0x2de488: 0x22a9cdd6  addi        $t1, $s5, -0x322A
    ctx->pc = 0x2de488u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294954454, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x2de48c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DE48Cu;
    {
        const bool branch_taken_0x2de48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de48c) {
            ctx->pc = 0x2DE4BCu;
            goto label_2de4bc;
        }
    }
    ctx->pc = 0x2DE494u;
    // 0x2de494: 0x2d61020  add         $v0, $s6, $s6
    ctx->pc = 0x2de494u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2de498: 0x2f1a020  add         $s4, $s7, $s1
    ctx->pc = 0x2de498u;
    {     int32_t rs_val = GPR_S32(ctx, 23);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x2de49c: 0xd45020  add         $t2, $a2, $s4
    ctx->pc = 0x2de49cu;
    {     int32_t rs_val = GPR_S32(ctx, 6);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x2de4a0: 0xfec86c0a  sd          $t0, 0x6C0A($s6)
    ctx->pc = 0x2de4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 27658), GPR_U64(ctx, 8));
    // 0x2de4a4: 0xa074f4b1  sb          $s4, -0xB4F($v1)
    ctx->pc = 0x2de4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964401), (uint8_t)GPR_U32(ctx, 20));
label_2de4a8:
    // 0x2de4a8: 0x863ce303  lh          $gp, -0x1CFD($s1)
    ctx->pc = 0x2de4a8u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959875)));
    // 0x2de4ac: 0x781b2424  lq          $k1, 0x2424($zero)
    ctx->pc = 0x2de4acu;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 0), 9252)));
    // 0x2de4b0: 0xc713174f  lwc1        $f19, 0x174F($t8)
    ctx->pc = 0x2de4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 5967)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2de4b4: 0x781b25d4  lq          $k1, 0x25D4($zero)
    ctx->pc = 0x2de4b4u;
    SET_GPR_VEC(ctx, 27, READ128(ADD32(GPR_U32(ctx, 0), 9684)));
    // 0x2de4b8: 0x0  nop
    ctx->pc = 0x2de4b8u;
    // NOP
label_2de4bc:
    // 0x2de4bc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2de4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2de4c0: 0x2442e4ac  addiu       $v0, $v0, -0x1B54
    ctx->pc = 0x2de4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960300));
    // 0x2de4c4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2de4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2de4c8: 0x2484e48c  addiu       $a0, $a0, -0x1B74
    ctx->pc = 0x2de4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960268));
    // 0x2de4cc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2de4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de4d0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2de4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2de4d4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DE4D4u;
    SET_GPR_U32(ctx, 31, 0x2DE4DCu);
    ctx->pc = 0x2DE4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4D4u;
            // 0x2de4d8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4DCu; }
        if (ctx->pc != 0x2DE4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4DCu; }
        if (ctx->pc != 0x2DE4DCu) { return; }
    }
    ctx->pc = 0x2DE4DCu;
label_2de4dc:
    // 0x2de4dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2de4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4e0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2de4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de4e4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2de4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de4e8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2de4e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de4ec: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2de4ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2de4f0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2de4f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de4f4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2de4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2de4f8: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x2de4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2de4fc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2de4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2de500: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2de500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2de504: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE504u;
            // 0x2de508: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE50Cu;
    // 0x2de50c: 0x0  nop
    ctx->pc = 0x2de50cu;
    // NOP
    ctx->pc = 0x2de510u;
}
