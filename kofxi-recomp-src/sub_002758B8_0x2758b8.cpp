#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002758B8
// Address: 0x2758b8 - 0x275a20
void sub_002758B8_0x2758b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002758B8_0x2758b8");
#endif

    switch (ctx->pc) {
        case 0x275900u: goto label_275900;
        case 0x27591cu: goto label_27591c;
        case 0x275920u: goto label_275920;
        case 0x275964u: goto label_275964;
        case 0x2759c8u: goto label_2759c8;
        case 0x2759ccu: goto label_2759cc;
        case 0x275a04u: goto label_275a04;
        default: break;
    }

    ctx->pc = 0x2758b8u;

    // 0x2758b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2758b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2758bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2758bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2758c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2758c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2758c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2758c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2758c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2758ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2758d0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2758d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2758d4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x2758d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x2758d8: 0x24635920  addiu       $v1, $v1, 0x5920
    ctx->pc = 0x2758d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22816));
    // 0x2758dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2758dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2758e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2758E0u;
    {
        const bool branch_taken_0x2758e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2758e0) {
            ctx->pc = 0x275900u;
            goto label_275900;
        }
    }
    ctx->pc = 0x2758E8u;
    // 0x2758e8: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2758e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2758ec: 0x24845934  addiu       $a0, $a0, 0x5934
    ctx->pc = 0x2758ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22836));
    // 0x2758f0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2758f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2758f4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2758f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2758f8: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2758F8u;
    SET_GPR_U32(ctx, 31, 0x275900u);
    ctx->pc = 0x2758FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2758F8u;
            // 0x2758fc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275900u; }
        if (ctx->pc != 0x275900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275900u; }
        if (ctx->pc != 0x275900u) { return; }
    }
    ctx->pc = 0x275900u;
label_275900:
    // 0x275900: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275900u;
    {
        const bool branch_taken_0x275900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275900) {
            ctx->pc = 0x275934u;
            goto label_275934;
        }
    }
    ctx->pc = 0x275908u;
    // 0x275908: 0xfc6cecc2  sd          $t4, -0x133E($v1)
    ctx->pc = 0x275908u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962370), GPR_U64(ctx, 12));
    // 0x27590c: 0x27d6ab58  addiu       $s6, $fp, -0x54A8
    ctx->pc = 0x27590cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945624));
    // 0x275910: 0xfcd5c3aa  sd          $s5, -0x3C56($a2)
    ctx->pc = 0x275910u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4294951850), GPR_U64(ctx, 21));
    // 0x275914: 0xce0e66f  jal         func_38399BC
    ctx->pc = 0x275914u;
    SET_GPR_U32(ctx, 31, 0x27591Cu);
    ctx->pc = 0x275918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275914u;
            // 0x275918: 0xc249180  jal         func_924600 (Delay Slot)
        // JAL 0x924600 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x38399BCu;
    {
        auto targetFn = runtime->lookupFunction(0x38399BCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27591Cu; }
        if (ctx->pc != 0x27591Cu) { return; }
    }
    ctx->pc = 0x27591Cu;
label_27591c:
    // 0x27591c: 0xfd4707f2  sd          $a3, 0x7F2($t2)
    ctx->pc = 0x27591cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 2034), GPR_U64(ctx, 7));
label_275920:
    // 0x275920: 0x0  nop
    ctx->pc = 0x275920u;
    // NOP
    // 0x275924: 0xaa2956e2  swl         $t1, 0x56E2($s1)
    ctx->pc = 0x275924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 22242); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275928: 0x971e2abc  lhu         $fp, 0x2ABC($t8)
    ctx->pc = 0x275928u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10940)));
    // 0x27592c: 0xaa295662  swl         $t1, 0x5662($s1)
    ctx->pc = 0x27592cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 22114); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x275930: 0x0  nop
    ctx->pc = 0x275930u;
    // NOP
label_275934:
    // 0x275934: 0xf7658a3c  sdc1        $f5, -0x75C4($k1)
    ctx->pc = 0x275934u;
    // Unhandled opcode: 0x3D
    // 0x275938: 0x120ac38  .word       0x0120AC38                   # dsll        $s5, $zero, 16 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275938u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 16);
    // 0x27593c: 0x7520af38  .word       0x7520AF38                   # INVALID     $t1, $zero, -0x50C8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27593cu;
    // Unhandled opcode: 0x1D
    // 0x275940: 0x35812838  ori         $at, $t4, 0x2838
    ctx->pc = 0x275940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)10296);
    // 0x275944: 0x6d812e38  ldr         $at, 0x2E38($t4)
    ctx->pc = 0x275944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 11832); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x275948: 0x7d450a2a  sq          $a1, 0xA2A($t2)
    ctx->pc = 0x275948u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 2602), GPR_VEC(ctx, 5));
    // 0x27594c: 0xe1852a3c  sc          $a1, 0x2A3C($t4)
    ctx->pc = 0x27594cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 10812); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 5)); SET_GPR_S32(ctx, 5, 1); } else { SET_GPR_S32(ctx, 5, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x275950: 0xe1658a3d  sc          $a1, -0x75C3($t3)
    ctx->pc = 0x275950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294937149); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 5)); SET_GPR_S32(ctx, 5, 1); } else { SET_GPR_S32(ctx, 5, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x275954: 0xfd3a55da  sd          $k0, 0x55DA($t1)
    ctx->pc = 0x275954u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 21978), GPR_U64(ctx, 26));
    // 0x275958: 0x65450a2c  daddiu      $a1, $t2, 0xA2C
    ctx->pc = 0x275958u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2604);
    // 0x27595c: 0xc09e562  jal         func_279588
    ctx->pc = 0x27595Cu;
    SET_GPR_U32(ctx, 31, 0x275964u);
    ctx->pc = 0x275960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27595Cu;
            // 0x275960: 0x81a50a29  lb          $a1, 0xA29($t5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 2601)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279588u;
    if (runtime->hasFunction(0x279588u)) {
        auto targetFn = runtime->lookupFunction(0x279588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275964u; }
        if (ctx->pc != 0x275964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279588_0x279588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275964u; }
        if (ctx->pc != 0x275964u) { return; }
    }
    ctx->pc = 0x275964u;
label_275964:
    // 0x275964: 0x7d20a938  sq          $zero, -0x56C8($t1)
    ctx->pc = 0x275964u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 4294945080), GPR_VEC(ctx, 0));
    // 0x275968: 0x79242a3a  lq          $a0, 0x2A3A($t1)
    ctx->pc = 0x275968u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 10810)));
    // 0x27596c: 0x81450a2d  lb          $a1, 0xA2D($t2)
    ctx->pc = 0x27596cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 2605)));
    // 0x275970: 0xf5651a3e  sdc1        $f5, 0x1A3E($t3)
    ctx->pc = 0x275970u;
    // Unhandled opcode: 0x3D
    // 0x275974: 0x7d406838  sq          $zero, 0x6838($t2)
    ctx->pc = 0x275974u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 26680), GPR_VEC(ctx, 0));
    // 0x275978: 0xfd24ca32  sd          $a0, -0x35CE($t1)
    ctx->pc = 0x275978u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294953522), GPR_U64(ctx, 4));
    // 0x27597c: 0xf777d5dc  sdc1        $f23, -0x2A24($k1)
    ctx->pc = 0x27597cu;
    // Unhandled opcode: 0x3D
    // 0x275980: 0xb1840a29  sdl         $a0, 0xA29($t4)
    ctx->pc = 0x275980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 2601); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275984: 0x120ad38  .word       0x0120AD38                   # dsll        $s5, $zero, 20 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x275984u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 20);
    // 0x275988: 0x7525ea3a  .word       0x7525EA3A                   # INVALID     $t1, $a1, -0x15C6 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275988u;
    // Unhandled opcode: 0x1D
    // 0x27598c: 0x7520ac38  .word       0x7520AC38                   # INVALID     $t1, $zero, -0x53C8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27598cu;
    // Unhandled opcode: 0x1D
    // 0x275990: 0x75240a3a  .word       0x75240A3A                   # INVALID     $t1, $a0, 0xA3A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275990u;
    // Unhandled opcode: 0x1D
    // 0x275994: 0xf777d5dc  sdc1        $f23, -0x2A24($k1)
    ctx->pc = 0x275994u;
    // Unhandled opcode: 0x3D
    // 0x275998: 0x61e12e38  daddi       $at, $t7, 0x2E38
    ctx->pc = 0x275998u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)11832; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x27599c: 0x7d450a2a  sq          $a1, 0xA2A($t2)
    ctx->pc = 0x27599cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 2602), GPR_VEC(ctx, 5));
    // 0x2759a0: 0xede52a3c  .word       0xEDE52A3C                   # INVALID     $t7, $a1, 0x2A3C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2759a0u;
    // Unhandled opcode: 0x3B
    // 0x2759a4: 0x65450a2c  daddiu      $a1, $t2, 0xA2C
    ctx->pc = 0x2759a4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2604);
    // 0x2759a8: 0xed658a3d  .word       0xED658A3D                   # INVALID     $t3, $a1, -0x75C3 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2759a8u;
    // Unhandled opcode: 0x3B
    // 0x2759ac: 0xfd3a55da  sd          $k0, 0x55DA($t1)
    ctx->pc = 0x2759acu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 21978), GPR_U64(ctx, 26));
    // 0x2759b0: 0x69e12838  ldl         $at, 0x2838($t7)
    ctx->pc = 0x2759b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 10296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x2759b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2759B4u;
    {
        const bool branch_taken_0x2759b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759b4) {
            ctx->pc = 0x2759E4u;
            goto label_2759e4;
        }
    }
    ctx->pc = 0x2759BCu;
    // 0x2759bc: 0xdffb97a7  ld          $k1, -0x6859($ra)
    ctx->pc = 0x2759bcu;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 31), 4294940583)));
    // 0x2759c0: 0xc5f5747  jal         func_17D5D1C
    ctx->pc = 0x2759C0u;
    SET_GPR_U32(ctx, 31, 0x2759C8u);
    ctx->pc = 0x2759C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2759C0u;
            // 0x2759c4: 0xccf4b5a  jal         func_33D2D68 (Delay Slot)
        // JAL 0x33D2D68 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D5D1Cu;
    {
        auto targetFn = runtime->lookupFunction(0x17D5D1Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2759C8u; }
        if (ctx->pc != 0x2759C8u) { return; }
    }
    ctx->pc = 0x2759C8u;
label_2759c8:
    // 0x2759c8: 0x8c4b3dad  lw          $t3, 0x3DAD($v0)
    ctx->pc = 0x2759c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15789)));
label_2759cc:
    // 0x2759cc: 0x244d5868  addiu       $t5, $v0, 0x5868
    ctx->pc = 0x2759ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
    // 0x2759d0: 0xf51020  add         $v0, $a3, $s5
    ctx->pc = 0x2759d0u;
    {     int32_t rs_val = GPR_S32(ctx, 7);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2759d4: 0xaa29562e  swl         $t1, 0x562E($s1)
    ctx->pc = 0x2759d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 22062); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2759d8: 0x971e2abd  lhu         $fp, 0x2ABD($t8)
    ctx->pc = 0x2759d8u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10941)));
    // 0x2759dc: 0xaa2956ae  swl         $t1, 0x56AE($s1)
    ctx->pc = 0x2759dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 22190); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2759e0: 0x0  nop
    ctx->pc = 0x2759e0u;
    // NOP
label_2759e4:
    // 0x2759e4: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2759e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2759e8: 0x244259d4  addiu       $v0, $v0, 0x59D4
    ctx->pc = 0x2759e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22996));
    // 0x2759ec: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2759ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2759f0: 0x248459b4  addiu       $a0, $a0, 0x59B4
    ctx->pc = 0x2759f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22964));
    // 0x2759f4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2759f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2759f8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2759f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2759fc: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2759FCu;
    SET_GPR_U32(ctx, 31, 0x275A04u);
    ctx->pc = 0x275A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2759FCu;
            // 0x275a00: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A04u; }
        if (ctx->pc != 0x275A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275A04u; }
        if (ctx->pc != 0x275A04u) { return; }
    }
    ctx->pc = 0x275A04u;
label_275a04:
    // 0x275a04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x275a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x275a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x275a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x275a10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x275a10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275a14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x275a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x275a18: 0x3e00008  jr          $ra
    ctx->pc = 0x275A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275A18u;
            // 0x275a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275A20u;
    ctx->pc = 0x275a20u;
}
