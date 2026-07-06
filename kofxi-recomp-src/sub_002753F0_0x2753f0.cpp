#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002753F0
// Address: 0x2753f0 - 0x275508
void sub_002753F0_0x2753f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002753F0_0x2753f0");
#endif

    switch (ctx->pc) {
        case 0x275434u: goto label_275434;
        case 0x275444u: goto label_275444;
        case 0x275454u: goto label_275454;
        case 0x275488u: goto label_275488;
        case 0x275498u: goto label_275498;
        case 0x2754b4u: goto label_2754b4;
        case 0x2754ecu: goto label_2754ec;
        default: break;
    }

    ctx->pc = 0x2753f0u;

    // 0x2753f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2753f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2753f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2753f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2753f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2753f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2753fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2753fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x275400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275408: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x275408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x27540c: 0x24635454  addiu       $v1, $v1, 0x5454
    ctx->pc = 0x27540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21588));
    // 0x275410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275414: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275414u;
    {
        const bool branch_taken_0x275414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275414) {
            ctx->pc = 0x275434u;
            goto label_275434;
        }
    }
    ctx->pc = 0x27541Cu;
    // 0x27541c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x27541cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x275420: 0x24845468  addiu       $a0, $a0, 0x5468
    ctx->pc = 0x275420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21608));
    // 0x275424: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x275424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x275428: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x275428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27542c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27542Cu;
    SET_GPR_U32(ctx, 31, 0x275434u);
    ctx->pc = 0x275430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27542Cu;
            // 0x275430: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275434u; }
        if (ctx->pc != 0x275434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275434u; }
        if (ctx->pc != 0x275434u) { return; }
    }
    ctx->pc = 0x275434u;
label_275434:
    // 0x275434: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275434u;
    {
        const bool branch_taken_0x275434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275434) {
            ctx->pc = 0x275468u;
            goto label_275468;
        }
    }
    ctx->pc = 0x27543Cu;
    // 0x27543c: 0xc139684  jal         func_4E5A10
    ctx->pc = 0x27543Cu;
    SET_GPR_U32(ctx, 31, 0x275444u);
    ctx->pc = 0x275440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27543Cu;
            // 0x275440: 0x3cf6020  add         $t4, $fp, $t7 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 30);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E5A10u;
    {
        auto targetFn = runtime->lookupFunction(0x4E5A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275444u; }
        if (ctx->pc != 0x275444u) { return; }
    }
    ctx->pc = 0x275444u;
label_275444:
    // 0x275444: 0xa154a901  sb          $s4, -0x56FF($t2)
    ctx->pc = 0x275444u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294945025), (uint8_t)GPR_U32(ctx, 20));
    // 0x275448: 0x1427020  add         $t6, $t2, $v0
    ctx->pc = 0x275448u;
    {     int32_t rs_val = GPR_S32(ctx, 10);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x27544c: 0xc90de25  jal         func_2437894
    ctx->pc = 0x27544Cu;
    SET_GPR_U32(ctx, 31, 0x275454u);
    ctx->pc = 0x275450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27544Cu;
            // 0x275450: 0x38b8020  add         $s0, $gp, $t3 (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 28);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2437894u;
    {
        auto targetFn = runtime->lookupFunction(0x2437894u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275454u; }
        if (ctx->pc != 0x275454u) { return; }
    }
    ctx->pc = 0x275454u;
label_275454:
    // 0x275454: 0x0  nop
    ctx->pc = 0x275454u;
    // NOP
    // 0x275458: 0xf06a3059  scd         $t2, 0x3059($v1)
    ctx->pc = 0x275458u;
    // Unhandled opcode: 0x3C
    // 0x27545c: 0x0  nop
    ctx->pc = 0x27545cu;
    // NOP
    // 0x275460: 0xf06a306d  scd         $t2, 0x306D($v1)
    ctx->pc = 0x275460u;
    // Unhandled opcode: 0x3C
    // 0x275464: 0x0  nop
    ctx->pc = 0x275464u;
    // NOP
label_275468:
    // 0x275468: 0x4c1a6855  .word       0x4C1A6855                   # INVALID     $zero, $k0, 0x6855 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275468u;
    // Unhandled opcode: 0x13
    // 0x27546c: 0x4c1a7425  .word       0x4C1A7425                   # INVALID     $zero, $k0, 0x7425 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27546cu;
    // Unhandled opcode: 0x13
    // 0x275470: 0x4c132015  .word       0x4C132015                   # INVALID     $zero, $s3, 0x2015 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275470u;
    // Unhandled opcode: 0x13
    // 0x275474: 0x4e4a6031  .word       0x4E4A6031                   # INVALID     $s2, $t2, 0x6031 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275474u;
    // Unhandled opcode: 0x13
    // 0x275478: 0x8e2260a1  lw          $v0, 0x60A1($s1)
    ctx->pc = 0x275478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24737)));
    // 0x27547c: 0x4e226015  .word       0x4E226015                   # INVALID     $s1, $v0, 0x6015 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27547cu;
    // Unhandled opcode: 0x13
    // 0x275480: 0xe2af891  jal         func_8ABE244
    ctx->pc = 0x275480u;
    SET_GPR_U32(ctx, 31, 0x275488u);
    ctx->pc = 0x275484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275480u;
            // 0x275484: 0xce20f891  pref        0x00, -0x76F($s1) (Delay Slot)
        // PREF instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x8ABE244u;
    {
        auto targetFn = runtime->lookupFunction(0x8ABE244u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275488u; }
        if (ctx->pc != 0x275488u) { return; }
    }
    ctx->pc = 0x275488u;
label_275488:
    // 0x275488: 0x4c636c15  .word       0x4C636C15                   # INVALID     $v1, $v1, 0x6C15 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275488u;
    // Unhandled opcode: 0x13
    // 0x27548c: 0x4eb17811  .word       0x4EB17811                   # INVALID     $s5, $s1, 0x7811 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27548cu;
    // Unhandled opcode: 0x13
    // 0x275490: 0xe2120bd  jal         func_88482F4
    ctx->pc = 0x275490u;
    SET_GPR_U32(ctx, 31, 0x275498u);
    ctx->pc = 0x275494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275490u;
            // 0x275494: 0xb27363fe  sdl         $s3, 0x63FE($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25598); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x88482F4u;
    {
        auto targetFn = runtime->lookupFunction(0x88482F4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275498u; }
        if (ctx->pc != 0x275498u) { return; }
    }
    ctx->pc = 0x275498u;
label_275498:
    // 0x275498: 0x4ca06c15  .word       0x4CA06C15                   # INVALID     $a1, $zero, 0x6C15 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x275498u;
    // Unhandled opcode: 0x13
    // 0x27549c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27549Cu;
    {
        const bool branch_taken_0x27549c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27549c) {
            ctx->pc = 0x2754CCu;
            goto label_2754cc;
        }
    }
    ctx->pc = 0x2754A4u;
    // 0x2754a4: 0xdc440467  ld          $a0, 0x467($v0)
    ctx->pc = 0x2754a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 1127)));
    // 0x2754a8: 0xfef6abb2  sd          $s6, -0x544E($s7)
    ctx->pc = 0x2754a8u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294945714), GPR_U64(ctx, 22));
    // 0x2754ac: 0xc37bee9  jal         func_DEFBA4
    ctx->pc = 0x2754ACu;
    SET_GPR_U32(ctx, 31, 0x2754B4u);
    ctx->pc = 0x2754B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2754ACu;
            // 0x2754b0: 0xffd3f352  sd          $s3, -0xCAE($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 4294964050), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0xDEFBA4u;
    {
        auto targetFn = runtime->lookupFunction(0xDEFBA4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754B4u; }
        if (ctx->pc != 0x2754B4u) { return; }
    }
    ctx->pc = 0x2754B4u;
label_2754b4:
    // 0x2754b4: 0x8ec85345  lw          $t0, 0x5345($s6)
    ctx->pc = 0x2754b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 21317)));
    // 0x2754b8: 0xa3423349  sb          $v0, 0x3349($k0)
    ctx->pc = 0x2754b8u;
    WRITE8(ADD32(GPR_U32(ctx, 26), 13129), (uint8_t)GPR_U32(ctx, 2));
    // 0x2754bc: 0xf9503a60  sqc2        $vf16, 0x3A60($t2)
    ctx->pc = 0x2754bcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 14944), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2754c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2754c0u;
    // Unhandled SPECIAL instruction: 0x1
    // 0x2754c4: 0xf9503a54  sqc2        $vf16, 0x3A54($t2)
    ctx->pc = 0x2754c4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 14932), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2754c8: 0x0  nop
    ctx->pc = 0x2754c8u;
    // NOP
label_2754cc:
    // 0x2754cc: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x2754ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x2754d0: 0x244254bc  addiu       $v0, $v0, 0x54BC
    ctx->pc = 0x2754d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21692));
    // 0x2754d4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2754d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x2754d8: 0x2484549c  addiu       $a0, $a0, 0x549C
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21660));
    // 0x2754dc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2754dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2754e0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2754e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2754e4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x2754E4u;
    SET_GPR_U32(ctx, 31, 0x2754ECu);
    ctx->pc = 0x2754E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2754E4u;
            // 0x2754e8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (runtime->hasFunction(0x29E050u)) {
        auto targetFn = runtime->lookupFunction(0x29E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754ECu; }
        if (ctx->pc != 0x2754ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E050_0x29e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754ECu; }
        if (ctx->pc != 0x2754ECu) { return; }
    }
    ctx->pc = 0x2754ECu;
label_2754ec:
    // 0x2754ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2754ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2754f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2754f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2754f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2754f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2754f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2754fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2754FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754FCu;
            // 0x275500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275504u;
    // 0x275504: 0x0  nop
    ctx->pc = 0x275504u;
    // NOP
    ctx->pc = 0x275508u;
}
