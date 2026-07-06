#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E44F0
// Address: 0x2e44f0 - 0x2e46b8
void sub_002E44F0_0x2e44f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E44F0_0x2e44f0");
#endif

    switch (ctx->pc) {
        case 0x2e4548u: goto label_2e4548;
        case 0x2e456cu: goto label_2e456c;
        case 0x2e4598u: goto label_2e4598;
        case 0x2e459cu: goto label_2e459c;
        case 0x2e45b4u: goto label_2e45b4;
        case 0x2e45b8u: goto label_2e45b8;
        case 0x2e45c0u: goto label_2e45c0;
        case 0x2e45f0u: goto label_2e45f0;
        case 0x2e45f4u: goto label_2e45f4;
        case 0x2e4608u: goto label_2e4608;
        case 0x2e460cu: goto label_2e460c;
        case 0x2e4614u: goto label_2e4614;
        case 0x2e4618u: goto label_2e4618;
        case 0x2e4638u: goto label_2e4638;
        case 0x2e4644u: goto label_2e4644;
        case 0x2e468cu: goto label_2e468c;
        case 0x2e4690u: goto label_2e4690;
        default: break;
    }

    ctx->pc = 0x2e44f0u;

    // 0x2e44f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e44f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e44f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e44f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e44f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e44f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e44fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2e4500: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2e4500u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e4504: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e4504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e4508: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e4508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e450c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e4510: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x2e4510u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e4514: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2e4514u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e4518: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2e4518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e451c: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e451cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e4520: 0x24634568  addiu       $v1, $v1, 0x4568
    ctx->pc = 0x2e4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17768));
    // 0x2e4524: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4528: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4528u;
    {
        const bool branch_taken_0x2e4528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4528) {
            ctx->pc = 0x2E4548u;
            goto label_2e4548;
        }
    }
    ctx->pc = 0x2E4530u;
    // 0x2e4530: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e4530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e4534: 0x2484457c  addiu       $a0, $a0, 0x457C
    ctx->pc = 0x2e4534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17788));
    // 0x2e4538: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e4538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e453c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e453cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e4540: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E4540u;
    SET_GPR_U32(ctx, 31, 0x2E4548u);
    ctx->pc = 0x2E4544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4540u;
            // 0x2e4544: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4548u; }
        if (ctx->pc != 0x2E4548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4548u; }
        if (ctx->pc != 0x2E4548u) { return; }
    }
    ctx->pc = 0x2E4548u;
label_2e4548:
    // 0x2e4548: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E4548u;
    {
        const bool branch_taken_0x2e4548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4548) {
            ctx->pc = 0x2E457Cu;
            goto label_2e457c;
        }
    }
    ctx->pc = 0x2E4550u;
    // 0x2e4550: 0x2471020  add         $v0, $s2, $a3
    ctx->pc = 0x2e4550u;
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2e4554: 0x225a020  add         $s4, $s1, $a1
    ctx->pc = 0x2e4554u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x2e4558: 0x1af8020  add         $s0, $t5, $t7
    ctx->pc = 0x2e4558u;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x2e455c: 0xdf276bf7  ld          $a3, 0x6BF7($t9)
    ctx->pc = 0x2e455cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 25), 27639)));
    // 0x2e4560: 0x15e0820  add         $at, $t2, $fp
    ctx->pc = 0x2e4560u;
    {     int32_t rs_val = GPR_S32(ctx, 10);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x2e4564: 0xc794492  jal         func_1E51248
    ctx->pc = 0x2E4564u;
    SET_GPR_U32(ctx, 31, 0x2E456Cu);
    ctx->pc = 0x1E51248u;
    {
        auto targetFn = runtime->lookupFunction(0x1E51248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E456Cu; }
        if (ctx->pc != 0x2E456Cu) { return; }
    }
    ctx->pc = 0x2E456Cu;
label_2e456c:
    // 0x2e456c: 0x3ee95435  .word       0x3EE95435                   # lui         $t1, 0x5435 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e456cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21557 << 16));
    // 0x2e4570: 0xcb1ca6b6  lwc2        $28, -0x594A($t8)
    ctx->pc = 0x2e4570u;
    // Unhandled opcode: 0x32
    // 0x2e4574: 0x3ee954f5  .word       0x3EE954F5                   # lui         $t1, 0x54F5 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4574u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21749 << 16));
    // 0x2e4578: 0x0  nop
    ctx->pc = 0x2e4578u;
    // NOP
label_2e457c:
    // 0x2e457c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2e457cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2e4580: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e4580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e4584: 0x2484e300  addiu       $a0, $a0, -0x1D00
    ctx->pc = 0x2e4584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959872));
    // 0x2e4588: 0x2450e2f8  addiu       $s0, $v0, -0x1D08
    ctx->pc = 0x2e4588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959864));
    // 0x2e458c: 0x6fece8b7  ldr         $t4, -0x1749($ra)
    ctx->pc = 0x2e458cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294961335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2e4590: 0x4cf8e8b7  .word       0x4CF8E8B7                   # INVALID     $a3, $t8, -0x1749 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4590u;
    // Unhandled opcode: 0x13
    // 0x2e4594: 0xc0b8126  jal         func_2E0498
label_2e4598:
    if (ctx->pc == 0x2E4598u) {
        ctx->pc = 0x2E4598u;
            // 0x2e4598: 0x89f80d33  lwl         $t8, 0xD33($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 3379); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 24) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 24, (int32_t)merged); }
        ctx->pc = 0x2E459Cu;
        goto label_2e459c;
    }
    ctx->pc = 0x2E4594u;
    SET_GPR_U32(ctx, 31, 0x2E459Cu);
    ctx->pc = 0x2E4598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4594u;
            // 0x2e4598: 0x89f80d33  lwl         $t8, 0xD33($t7) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 15), 3379); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 24) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 24, (int32_t)merged); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0498u;
    if (runtime->hasFunction(0x2E0498u)) {
        auto targetFn = runtime->lookupFunction(0x2E0498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E459Cu; }
        if (ctx->pc != 0x2E459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0498_0x2e0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E459Cu; }
        if (ctx->pc != 0x2E459Cu) { return; }
    }
    ctx->pc = 0x2E459Cu;
label_2e459c:
    // 0x2e459c: 0x89f0ec17  lwl         $s0, -0x13E9($t7)
    ctx->pc = 0x2e459cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294962199); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x2e45a0: 0x4dfce8b7  .word       0x4DFCE8B7                   # INVALID     $t7, $gp, -0x1749 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e45a0u;
    // Unhandled opcode: 0x13
    // 0x2e45a4: 0x4ef8e8b7  .word       0x4EF8E8B7                   # INVALID     $s7, $t8, -0x1749 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e45a4u;
    // Unhandled opcode: 0x13
    // 0x2e45a8: 0x6cece8b7  ldr         $t4, -0x1749($a3)
    ctx->pc = 0x2e45a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294961335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2e45ac: 0xfe8e8b7  jal         func_FA3A2DC
    ctx->pc = 0x2E45ACu;
    SET_GPR_U32(ctx, 31, 0x2E45B4u);
    ctx->pc = 0x2E45B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45ACu;
            // 0x2e45b0: 0xc0b8248  jal         func_2E0920 (Delay Slot)
        // JAL 0x2E0920 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0xFA3A2DCu;
    {
        auto targetFn = runtime->lookupFunction(0xFA3A2DCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45B4u; }
        if (ctx->pc != 0x2E45B4u) { return; }
    }
    ctx->pc = 0x2E45B4u;
label_2e45b4:
    // 0x2e45b4: 0x89f9ed93  lwl         $t9, -0x126D($t7)
    ctx->pc = 0x2e45b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294962579); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 25) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 25, (int32_t)merged); }
label_2e45b8:
    // 0x2e45b8: 0x9f0ad12  j           func_7C2B448
    ctx->pc = 0x2E45B8u;
    ctx->pc = 0x2E45BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45B8u;
            // 0x2e45bc: 0x1af8ac57  .word       0x1AF8AC57                   # blez        $s7, . + 4 + (-0x53A9 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E45BC - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7C2B448u;
    {
        auto targetFn = runtime->lookupFunction(0x7C2B448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E45C0u;
label_2e45c0:
    // 0x2e45c0: 0x8038d2f0  lb          $t8, -0x2D10($at)
    ctx->pc = 0x2e45c0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294955760)));
    // 0x2e45c4: 0x961cd2f1  lhu         $gp, -0x2D0F($s0)
    ctx->pc = 0x2e45c4u;
    SET_GPR_U32(ctx, 28, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294955761)));
    // 0x2e45c8: 0x9fe8cd1f  lwu         $t0, -0x32E1($ra)
    ctx->pc = 0x2e45c8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 31), 4294954271)));
    // 0x2e45cc: 0x7bece8b7  lq          $t4, -0x1749($ra)
    ctx->pc = 0x2e45ccu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 31), 4294961335)));
    // 0x2e45d0: 0x8198dd10  lb          $t8, -0x22F0($t4)
    ctx->pc = 0x2e45d0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294958352)));
    // 0x2e45d4: 0x9ce8cd1f  lwu         $t0, -0x32E1($a3)
    ctx->pc = 0x2e45d4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 4294954271)));
    // 0x2e45d8: 0x19f8e8b7  .word       0x19F8E8B7                   # blez        $t7, . + 4 + (-0x1749 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E45D8u;
    {
        const bool branch_taken_0x2e45d8 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x2E45DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45D8u;
            // 0x2e45dc: 0x8018cd10  lb          $t8, -0x32F0($zero) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294954256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45d8) {
            ctx->pc = 0x2DE8B8u;
            return;
        }
    }
    ctx->pc = 0x2E45E0u;
    // 0x2e45e0: 0x9de8cd1f  lwu         $t0, -0x32E1($t7)
    ctx->pc = 0x2e45e0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 15), 4294954271)));
    // 0x2e45e4: 0x99facd10  lwr         $k0, -0x32F0($t7)
    ctx->pc = 0x2e45e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294954256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 26) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 26) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 26, merged64); }
    // 0x2e45e8: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E45E8u;
    SET_GPR_U32(ctx, 31, 0x2E45F0u);
    ctx->pc = 0x2E45ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45E8u;
            // 0x2e45ec: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
        // J 0x7E3B45C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45F0u; }
        if (ctx->pc != 0x2E45F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E45F0u; }
        if (ctx->pc != 0x2E45F0u) { return; }
    }
    ctx->pc = 0x2E45F0u;
label_2e45f0:
    // 0x2e45f0: 0x89e8ad1f  lwl         $t0, -0x52E1($t7)
    ctx->pc = 0x2e45f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294946079); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_2e45f4:
    // 0x2e45f4: 0xc9e8e91f  lwc2        $8, -0x16E1($t7)
    ctx->pc = 0x2e45f4u;
    // Unhandled opcode: 0x32
    // 0x2e45f8: 0x4df2e937  .word       0x4DF2E937                   # INVALID     $t7, $s2, -0x16C9 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e45f8u;
    // Unhandled opcode: 0x13
    // 0x2e45fc: 0xc9faed33  lwc2        $26, -0x12CD($t7)
    ctx->pc = 0x2e45fcu;
    // Unhandled opcode: 0x32
    // 0x2e4600: 0x9f8ed17  j           func_7E3B45C
    ctx->pc = 0x2E4600u;
    ctx->pc = 0x2E4604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4600u;
            // 0x2e4604: 0x9f8ed17  j           func_7E3B45C (Delay Slot)
        // J 0x7E3B45C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7E3B45Cu;
    {
        auto targetFn = runtime->lookupFunction(0x7E3B45Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E4608u;
label_2e4608:
    // 0x2e4608: 0xc9fa2d7f  lwc2        $26, 0x2D7F($t7)
    ctx->pc = 0x2e4608u;
    // Unhandled opcode: 0x32
label_2e460c:
    // 0x2e460c: 0xc9fa4d5f  lwc2        $26, 0x4D5F($t7)
    ctx->pc = 0x2e460cu;
    // Unhandled opcode: 0x32
    // 0x2e4610: 0xddf8ebdf  ld          $t8, -0x1421($t7)
    ctx->pc = 0x2e4610u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 15), 4294962143)));
label_2e4614:
    // 0x2e4614: 0xc9f8e19f  lwc2        $24, -0x1E61($t7)
    ctx->pc = 0x2e4614u;
    // Unhandled opcode: 0x32
label_2e4618:
    // 0x2e4618: 0x88f8ad1f  lwl         $t8, -0x52E1($a3)
    ctx->pc = 0x2e4618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294946079); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 24) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 24, (int32_t)merged); }
    // 0x2e461c: 0xa9f8edbf  swl         $t8, -0x1241($t7)
    ctx->pc = 0x2e461cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294962623); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 24); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4620: 0xc9f88c12  lwc2        $24, -0x73EE($t7)
    ctx->pc = 0x2e4620u;
    // Unhandled opcode: 0x32
    // 0x2e4624: 0xc9fa6d3f  lwc2        $26, 0x6D3F($t7)
    ctx->pc = 0x2e4624u;
    // Unhandled opcode: 0x32
    // 0x2e4628: 0xc9f8e19f  lwc2        $24, -0x1E61($t7)
    ctx->pc = 0x2e4628u;
    // Unhandled opcode: 0x32
    // 0x2e462c: 0x88f8ad1f  lwl         $t8, -0x52E1($a3)
    ctx->pc = 0x2e462cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294946079); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 24) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 24, (int32_t)merged); }
    // 0x2e4630: 0xbf2c9b7  j           func_FCB26DC
    ctx->pc = 0x2E4630u;
    ctx->pc = 0x2E4634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4630u;
            // 0x2e4634: 0x9614f095  lhu         $s4, -0xF6B($s0) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294963349)));
        ctx->in_delay_slot = false;
    ctx->pc = 0xFCB26DCu;
    {
        auto targetFn = runtime->lookupFunction(0xFCB26DCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E4638u;
label_2e4638:
    // 0x2e4638: 0x9e8ad03  j           func_7A2B40C
    ctx->pc = 0x2E4638u;
    ctx->pc = 0x2E463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4638u;
            // 0x2e463c: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2E463C - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x7A2B40Cu;
    {
        auto targetFn = runtime->lookupFunction(0x7A2B40Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2E4640u;
    // 0x2e4640: 0x0  nop
    ctx->pc = 0x2e4640u;
    // NOP
label_2e4644:
    // 0x2e4644: 0xddccd3ff  ld          $t4, -0x2C01($t6)
    ctx->pc = 0x2e4644u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 14), 4294956031)));
    // 0x2e4648: 0x85dde433  lh          $sp, -0x1BCD($t6)
    ctx->pc = 0x2e4648u;
    SET_GPR_S32(ctx, 29, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294960179)));
    // 0x2e464c: 0x249e9a88  addiu       $fp, $a0, -0x6578
    ctx->pc = 0x2e464cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941320));
    // 0x2e4650: 0x8608cfb3  lh          $t0, -0x304D($s0)
    ctx->pc = 0x2e4650u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294954931)));
    // 0x2e4654: 0xdd8e7267  ld          $t6, 0x7267($t4)
    ctx->pc = 0x2e4654u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 12), 29287)));
    // 0x2e4658: 0x2d31020  add         $v0, $s6, $s3
    ctx->pc = 0x2e4658u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    // 0x2e465c: 0x3ee95534  .word       0x3EE95534                   # lui         $t1, 0x5534 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e465cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21812 << 16));
    // 0x2e4660: 0xcb1ca6b7  lwc2        $28, -0x5949($t8)
    ctx->pc = 0x2e4660u;
    // Unhandled opcode: 0x32
    // 0x2e4664: 0x3ee955f4  .word       0x3EE955F4                   # lui         $t1, 0x55F4 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4664u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)22004 << 16));
    // 0x2e4668: 0x0  nop
    ctx->pc = 0x2e4668u;
    // NOP
label_2e466c:
    // 0x2e466c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e466cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e4670: 0x2442465c  addiu       $v0, $v0, 0x465C
    ctx->pc = 0x2e4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18012));
    // 0x2e4674: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e4674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e4678: 0x2484463c  addiu       $a0, $a0, 0x463C
    ctx->pc = 0x2e4678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17980));
    // 0x2e467c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e467cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4680: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e4680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4684: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E4684u;
    SET_GPR_U32(ctx, 31, 0x2E468Cu);
    ctx->pc = 0x2E4688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4684u;
            // 0x2e4688: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E468Cu; }
        if (ctx->pc != 0x2E468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E468Cu; }
        if (ctx->pc != 0x2E468Cu) { return; }
    }
    ctx->pc = 0x2E468Cu;
label_2e468c:
    // 0x2e468c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e468cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e4690:
    // 0x2e4690: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e4690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4694: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e4694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e4698: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e4698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e469c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e469cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e46a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e46a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e46a4: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x2e46a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e46a8: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2e46a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e46ac: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2e46acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e46b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E46B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E46B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E46B0u;
            // 0x2e46b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E46B8u;
    ctx->pc = 0x2e46b8u;
}
