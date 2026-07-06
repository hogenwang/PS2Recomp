#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB588
// Address: 0x2db588 - 0x2db6a8
void sub_002DB588_0x2db588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB588_0x2db588");
#endif

    switch (ctx->pc) {
        case 0x2db5fcu: goto label_2db5fc;
        case 0x2db640u: goto label_2db640;
        case 0x2db654u: goto label_2db654;
        case 0x2db65cu: goto label_2db65c;
        case 0x2db694u: goto label_2db694;
        default: break;
    }

    ctx->pc = 0x2db588u;

    // 0x2db588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db58c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2db58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2db590: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2db590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2db594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db598: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2db598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2db59c: 0x2446f058  addiu       $a2, $v0, -0xFA8
    ctx->pc = 0x2db59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963288));
    // 0x2db5a0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2db5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2db5a4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2db5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2db5a8: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x2db5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2db5ac: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x2db5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2db5b0: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x2db5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2db5b4: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x2db5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2db5b8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2db5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db5bc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2db5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db5c0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2db5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db5c4: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2db5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db5c8: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2db5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db5cc: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2db5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db5d0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2db5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2db5d4: 0x2463b61c  addiu       $v1, $v1, -0x49E4
    ctx->pc = 0x2db5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948380));
    // 0x2db5d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2db5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db5dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB5DCu;
    {
        const bool branch_taken_0x2db5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db5dc) {
            ctx->pc = 0x2DB5FCu;
            goto label_2db5fc;
        }
    }
    ctx->pc = 0x2DB5E4u;
    // 0x2db5e4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db5e8: 0x2484b630  addiu       $a0, $a0, -0x49D0
    ctx->pc = 0x2db5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948400));
    // 0x2db5ec: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2db5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db5f0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2db5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2db5f4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB5F4u;
    SET_GPR_U32(ctx, 31, 0x2DB5FCu);
    ctx->pc = 0x2DB5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB5F4u;
            // 0x2db5f8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5FCu; }
        if (ctx->pc != 0x2DB5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5FCu; }
        if (ctx->pc != 0x2DB5FCu) { return; }
    }
    ctx->pc = 0x2DB5FCu;
label_2db5fc:
    // 0x2db5fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DB5FCu;
    {
        const bool branch_taken_0x2db5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5fc) {
            ctx->pc = 0x2DB630u;
            goto label_2db630;
        }
    }
    ctx->pc = 0x2DB604u;
    // 0x2db604: 0x4a2820  add         $a1, $v0, $t2
    ctx->pc = 0x2db604u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x2db608: 0x85aa86d3  lh          $t2, -0x792D($t5)
    ctx->pc = 0x2db608u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294936275)));
    // 0x2db60c: 0x2d87020  add         $t6, $s6, $t8
    ctx->pc = 0x2db60cu;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 24);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x2db610: 0x8eee8a9d  lw          $t6, -0x7563($s7)
    ctx->pc = 0x2db610u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937245)));
    // 0x2db614: 0xfd7b97d2  sd          $k1, -0x682E($t3)
    ctx->pc = 0x2db614u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 4294940626), GPR_U64(ctx, 27));
    // 0x2db618: 0xdd63675f  ld          $v1, 0x675F($t3)
    ctx->pc = 0x2db618u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 26463)));
    // 0x2db61c: 0x0  nop
    ctx->pc = 0x2db61cu;
    // NOP
    // 0x2db620: 0x8fb3bdbb  lw          $s3, -0x4245($sp)
    ctx->pc = 0x2db620u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294950331)));
    // 0x2db624: 0xc712ea32  lwc1        $f18, -0x15CE($t8)
    ctx->pc = 0x2db624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294961714)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db628: 0x8fb3bdaf  lw          $s3, -0x4251($sp)
    ctx->pc = 0x2db628u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294950319)));
    // 0x2db62c: 0x0  nop
    ctx->pc = 0x2db62cu;
    // NOP
label_2db630:
    // 0x2db630: 0x2d176d78  sltiu       $s7, $t0, 0x6D78
    ctx->pc = 0x2db630u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)28024) ? 1 : 0);
    // 0x2db634: 0xe812a9b8  swc2        $18, -0x5648($zero)
    ctx->pc = 0x2db634u;
    // Unhandled opcode: 0x3A
    // 0x2db638: 0xc0b6d1a  jal         func_2DB468
    ctx->pc = 0x2DB638u;
    SET_GPR_U32(ctx, 31, 0x2DB640u);
    ctx->pc = 0x2DB63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB638u;
            // 0x2db63c: 0xe912a98c  swc2        $18, -0x5674($t0) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB468u;
    if (runtime->hasFunction(0x2DB468u)) {
        auto targetFn = runtime->lookupFunction(0x2DB468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB640u; }
        if (ctx->pc != 0x2DB640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB468_0x2db468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB640u; }
        if (ctx->pc != 0x2DB640u) { return; }
    }
    ctx->pc = 0x2DB640u;
label_2db640:
    // 0x2db640: 0xfd12a9f0  sd          $s2, -0x5610($t0)
    ctx->pc = 0x2db640u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294945264), GPR_U64(ctx, 18));
    // 0x2db644: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB644u;
    {
        const bool branch_taken_0x2db644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db644) {
            ctx->pc = 0x2DB674u;
            goto label_2db674;
        }
    }
    ctx->pc = 0x2DB64Cu;
    // 0x2db64c: 0xcd1b36f  jal         func_346CDBC
    ctx->pc = 0x2DB64Cu;
    SET_GPR_U32(ctx, 31, 0x2DB654u);
    ctx->pc = 0x2DB650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB64Cu;
            // 0x2db650: 0xffd478ea  sd          $s4, 0x78EA($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 30954), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346CDBCu;
    {
        auto targetFn = runtime->lookupFunction(0x346CDBCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB654u; }
        if (ctx->pc != 0x2DB654u) { return; }
    }
    ctx->pc = 0x2DB654u;
label_2db654:
    // 0x2db654: 0xc08fe75  jal         func_23F9D4
    ctx->pc = 0x2DB654u;
    SET_GPR_U32(ctx, 31, 0x2DB65Cu);
    ctx->pc = 0x2DB658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB654u;
            // 0x2db658: 0x2671bf90  addiu       $s1, $s3, -0x4070 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F9D4u;
    if (runtime->hasFunction(0x23F9D4u)) {
        auto targetFn = runtime->lookupFunction(0x23F9D4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB65Cu; }
        if (ctx->pc != 0x2DB65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023F9D4_0x23f9d4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB65Cu; }
        if (ctx->pc != 0x2DB65Cu) { return; }
    }
    ctx->pc = 0x2DB65Cu;
label_2db65c:
    // 0x2db65c: 0xfcaa9f4a  sd          $t2, -0x60B6($a1)
    ctx->pc = 0x2db65cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294942538), GPR_U64(ctx, 10));
    // 0x2db660: 0xdd68e8df  ld          $t0, -0x1721($t3)
    ctx->pc = 0x2db660u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 11), 4294961375)));
    // 0x2db664: 0x8fbbbdb3  lw          $k1, -0x424D($sp)
    ctx->pc = 0x2db664u;
    SET_GPR_S32(ctx, 27, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294950323)));
    // 0x2db668: 0xc712ea33  lwc1        $f18, -0x15CD($t8)
    ctx->pc = 0x2db668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294961715)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2db66c: 0x8fbbbda7  lw          $k1, -0x4259($sp)
    ctx->pc = 0x2db66cu;
    SET_GPR_S32(ctx, 27, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294950311)));
    // 0x2db670: 0x0  nop
    ctx->pc = 0x2db670u;
    // NOP
label_2db674:
    // 0x2db674: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2db674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2db678: 0x2442b664  addiu       $v0, $v0, -0x499C
    ctx->pc = 0x2db678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948452));
    // 0x2db67c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2db67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2db680: 0x2484b644  addiu       $a0, $a0, -0x49BC
    ctx->pc = 0x2db680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948420));
    // 0x2db684: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2db684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db688: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2db688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db68c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DB68Cu;
    SET_GPR_U32(ctx, 31, 0x2DB694u);
    ctx->pc = 0x2DB690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB68Cu;
            // 0x2db690: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB694u; }
        if (ctx->pc != 0x2DB694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB694u; }
        if (ctx->pc != 0x2DB694u) { return; }
    }
    ctx->pc = 0x2DB694u;
label_2db694:
    // 0x2db694: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db698: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2db698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db69c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2db69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB6A0u;
            // 0x2db6a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB6A8u;
    ctx->pc = 0x2db6a8u;
}
