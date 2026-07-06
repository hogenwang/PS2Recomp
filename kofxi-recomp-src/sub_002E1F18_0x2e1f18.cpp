#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E1F18
// Address: 0x2e1f18 - 0x2e2068
void sub_002E1F18_0x2e1f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1F18_0x2e1f18");
#endif

    switch (ctx->pc) {
        case 0x2e1f5cu: goto label_2e1f5c;
        case 0x2e1fd8u: goto label_2e1fd8;
        case 0x2e1ff4u: goto label_2e1ff4;
        case 0x2e200cu: goto label_2e200c;
        case 0x2e204cu: goto label_2e204c;
        default: break;
    }

    ctx->pc = 0x2e1f18u;

    // 0x2e1f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e1f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e1f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e1f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e1f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e1f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e1f2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e1f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e1f30: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e1f34: 0x24631f7c  addiu       $v1, $v1, 0x1F7C
    ctx->pc = 0x2e1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8060));
    // 0x2e1f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1f3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1F3Cu;
    {
        const bool branch_taken_0x2e1f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f3c) {
            ctx->pc = 0x2E1F5Cu;
            goto label_2e1f5c;
        }
    }
    ctx->pc = 0x2E1F44u;
    // 0x2e1f44: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e1f48: 0x24841f90  addiu       $a0, $a0, 0x1F90
    ctx->pc = 0x2e1f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8080));
    // 0x2e1f4c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e1f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e1f50: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e1f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e1f54: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E1F54u;
    SET_GPR_U32(ctx, 31, 0x2E1F5Cu);
    ctx->pc = 0x2E1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F54u;
            // 0x2e1f58: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F5Cu; }
        if (ctx->pc != 0x2E1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F5Cu; }
        if (ctx->pc != 0x2E1F5Cu) { return; }
    }
    ctx->pc = 0x2E1F5Cu;
label_2e1f5c:
    // 0x2e1f5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E1F5Cu;
    {
        const bool branch_taken_0x2e1f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f5c) {
            ctx->pc = 0x2E1F90u;
            goto label_2e1f90;
        }
    }
    ctx->pc = 0x2E1F64u;
    // 0x2e1f64: 0x2367820  add         $t7, $s1, $s6
    ctx->pc = 0x2e1f64u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x2e1f68: 0x85d8319b  lh          $t8, 0x319B($t6)
    ctx->pc = 0x2e1f68u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 12699)));
    // 0x2e1f6c: 0x256569e0  addiu       $a1, $t3, 0x69E0
    ctx->pc = 0x2e1f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 27104));
    // 0x2e1f70: 0xfee85302  sd          $t0, 0x5302($s7)
    ctx->pc = 0x2e1f70u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 21250), GPR_U64(ctx, 8));
    // 0x2e1f74: 0x854dbb13  lh          $t5, -0x44ED($t2)
    ctx->pc = 0x2e1f74u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294949651)));
    // 0x2e1f78: 0x1cc1020  add         $v0, $t6, $t4
    ctx->pc = 0x2e1f78u;
    {     int32_t rs_val = GPR_S32(ctx, 14);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2e1f7c: 0x0  nop
    ctx->pc = 0x2e1f7cu;
    // NOP
    // 0x2e1f80: 0x715d90f1  .word       0x715D90F1                   # INVALID     $t2, $sp, -0x6F0F # 00000000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x2e1f80u;
    // Unhandled PMTHL instruction: function 0x3
    // 0x2e1f84: 0xca15f322  lwc2        $21, -0xCDE($s0)
    ctx->pc = 0x2e1f84u;
    // Unhandled opcode: 0x32
    // 0x2e1f88: 0x715d909d  .word       0x715D909D                   # INVALID     $t2, $sp, -0x6F63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e1f88u;
    // Unhandled MMI instruction: function 0x1D
    // 0x2e1f8c: 0x0  nop
    ctx->pc = 0x2e1f8cu;
    // NOP
label_2e1f90:
    // 0x2e1f90: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e1f94: 0x2446e158  addiu       $a2, $v0, -0x1EA8
    ctx->pc = 0x2e1f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959448));
    // 0x2e1f98: 0x71031a35  .word       0x71031A35                   # INVALID     $t0, $v1, 0x1A35 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e1f98u;
    // Unhandled MMI instruction: function 0x35
    // 0x2e1f9c: 0xf1030e23  scd         $v1, 0xE23($t0)
    ctx->pc = 0x2e1f9cu;
    // Unhandled opcode: 0x3C
    // 0x2e1fa0: 0x73836633  .word       0x73836633                   # INVALID     $gp, $v1, 0x6633 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e1fa0u;
    // Unhandled MMI instruction: function 0x33
    // 0x2e1fa4: 0x73821e33  .word       0x73821E33                   # INVALID     $gp, $v0, 0x1E33 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e1fa4u;
    // Unhandled MMI instruction: function 0x33
    // 0x2e1fa8: 0xb08b2e23  sdl         $t3, 0x2E23($a0)
    ctx->pc = 0x2e1fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1fac: 0x63914e23  daddi       $s1, $gp, 0x4E23
    ctx->pc = 0x2e1facu;
    { int64_t src = (int64_t)GPR_S64(ctx, 28); int64_t imm = (int64_t)(int32_t)20003; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, res); }
    // 0x2e1fb0: 0xe0154e72  sc          $s5, 0x4E72($zero)
    ctx->pc = 0x2e1fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 20082); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e1fb4: 0xf16931de  scd         $t1, 0x31DE($t3)
    ctx->pc = 0x2e1fb4u;
    // Unhandled opcode: 0x3C
    // 0x2e1fb8: 0xb0934e23  sdl         $s3, 0x4E23($a0)
    ctx->pc = 0x2e1fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20003); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1fbc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e1fc0: 0x71021e35  .word       0x71021E35                   # INVALID     $t0, $v0, 0x1E35 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e1fc0u;
    // Unhandled MMI instruction: function 0x35
    // 0x2e1fc4: 0x2451e150  addiu       $s1, $v0, -0x1EB0
    ctx->pc = 0x2e1fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959440));
    // 0x2e1fc8: 0x71021635  .word       0x71021635                   # INVALID     $t0, $v0, 0x1635 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e1fc8u;
    // Unhandled MMI instruction: function 0x35
    // 0x2e1fcc: 0x61021a35  daddi       $v0, $t0, 0x1A35
    ctx->pc = 0x2e1fccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 8); int64_t imm = (int64_t)(int32_t)6709; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x2e1fd0: 0xc0b8126  jal         func_2E0498
    ctx->pc = 0x2E1FD0u;
    SET_GPR_U32(ctx, 31, 0x2E1FD8u);
    ctx->pc = 0x2E1FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1FD0u;
            // 0x2e1fd4: 0xf2910e20  scd         $s1, 0xE20($s4) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0498u;
    if (runtime->hasFunction(0x2E0498u)) {
        auto targetFn = runtime->lookupFunction(0x2E0498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1FD8u; }
        if (ctx->pc != 0x2E1FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0498_0x2e0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1FD8u; }
        if (ctx->pc != 0x2E1FD8u) { return; }
    }
    ctx->pc = 0x2E1FD8u;
label_2e1fd8:
    // 0x2e1fd8: 0xf1012e27  scd         $at, 0x2E27($t0)
    ctx->pc = 0x2e1fd8u;
    // Unhandled opcode: 0x3C
    // 0x2e1fdc: 0x787111dc  lq          $s1, 0x11DC($v1)
    ctx->pc = 0x2e1fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 3), 4572)));
    // 0x2e1fe0: 0xf3100e66  scd         $s0, 0xE66($t8)
    ctx->pc = 0x2e1fe0u;
    // Unhandled opcode: 0x3C
    // 0x2e1fe4: 0x61021a35  daddi       $v0, $t0, 0x1A35
    ctx->pc = 0x2e1fe4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 8); int64_t imm = (int64_t)(int32_t)6709; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x2e1fe8: 0x72910e22  .word       0x72910E22                   # INVALID     $s4, $s1, 0xE22 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e1fe8u;
    // Unhandled MMI instruction: function 0x22
    // 0x2e1fec: 0xc0b8126  jal         func_2E0498
    ctx->pc = 0x2E1FECu;
    SET_GPR_U32(ctx, 31, 0x2E1FF4u);
    ctx->pc = 0x2E1FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1FECu;
            // 0x2e1ff0: 0x71035635  .word       0x71035635                   # INVALID     $t0, $v1, 0x5635 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        // Unhandled MMI instruction: function 0x35
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0498u;
    if (runtime->hasFunction(0x2E0498u)) {
        auto targetFn = runtime->lookupFunction(0x2E0498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1FF4u; }
        if (ctx->pc != 0x2E1FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0498_0x2e0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1FF4u; }
        if (ctx->pc != 0x2E1FF4u) { return; }
    }
    ctx->pc = 0x2E1FF4u;
label_2e1ff4:
    // 0x2e1ff4: 0xf0172e23  scd         $s7, 0x2E23($zero)
    ctx->pc = 0x2e1ff4u;
    // Unhandled opcode: 0x3C
    // 0x2e1ff8: 0xf0430626  scd         $v1, 0x626($v0)
    ctx->pc = 0x2e1ff8u;
    // Unhandled opcode: 0x3C
    // 0x2e1ffc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E1FFCu;
    {
        const bool branch_taken_0x2e1ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ffc) {
            ctx->pc = 0x2E202Cu;
            goto label_2e202c;
        }
    }
    ctx->pc = 0x2E2004u;
    // 0x2e2004: 0xc8a2593  jal         func_228964C
    ctx->pc = 0x2E2004u;
    SET_GPR_U32(ctx, 31, 0x2E200Cu);
    ctx->pc = 0x2E2008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2004u;
            // 0x2e2008: 0xff02b54a  sd          $v0, -0x4AB6($t8) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 24), 4294948170), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228964Cu;
    {
        auto targetFn = runtime->lookupFunction(0x228964Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E200Cu; }
        if (ctx->pc != 0x2E200Cu) { return; }
    }
    ctx->pc = 0x2E200Cu;
label_2e200c:
    // 0x2e200c: 0xde272017  ld          $a3, 0x2017($s1)
    ctx->pc = 0x2e200cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8215)));
    // 0x2e2010: 0x24feb3c8  addiu       $fp, $a3, -0x4C38
    ctx->pc = 0x2e2010u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947784));
    // 0x2e2014: 0xa393a821  sb          $s3, -0x57DF($gp)
    ctx->pc = 0x2e2014u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294944801), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e2018: 0xa38b2489  sb          $t3, 0x2489($gp)
    ctx->pc = 0x2e2018u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 9353), (uint8_t)GPR_U32(ctx, 11));
    // 0x2e201c: 0x71f09d51  .word       0x71F09D51                   # mthi1       $t7 # 00109D40 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e201cu;
    ctx->hi1 = GPR_U64(ctx, 15);
    // 0x2e2020: 0xca15f323  lwc2        $21, -0xCDD($s0)
    ctx->pc = 0x2e2020u;
    // Unhandled opcode: 0x32
    // 0x2e2024: 0x71f09d3d  .word       0x71F09D3D                   # INVALID     $t7, $s0, -0x62C3 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e2024u;
    // Unhandled MMI instruction: function 0x3D
    // 0x2e2028: 0x0  nop
    ctx->pc = 0x2e2028u;
    // NOP
label_2e202c:
    // 0x2e202c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e2030: 0x2442201c  addiu       $v0, $v0, 0x201C
    ctx->pc = 0x2e2030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8220));
    // 0x2e2034: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e2034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e2038: 0x24841ffc  addiu       $a0, $a0, 0x1FFC
    ctx->pc = 0x2e2038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8188));
    // 0x2e203c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e203cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e2040: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e2040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e2044: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E2044u;
    SET_GPR_U32(ctx, 31, 0x2E204Cu);
    ctx->pc = 0x2E2048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2044u;
            // 0x2e2048: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E204Cu; }
        if (ctx->pc != 0x2E204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E204Cu; }
        if (ctx->pc != 0x2E204Cu) { return; }
    }
    ctx->pc = 0x2E204Cu;
label_2e204c:
    // 0x2e204c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2e204cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e2054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2058: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e2058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e205c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e205cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e2060: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2060u;
            // 0x2e2064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2068u;
    ctx->pc = 0x2e2068u;
}
