#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DADB0
// Address: 0x2dadb0 - 0x2daec8
void sub_002DADB0_0x2dadb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DADB0_0x2dadb0");
#endif

    switch (ctx->pc) {
        case 0x2dadf0u: goto label_2dadf0;
        case 0x2dae74u: goto label_2dae74;
        case 0x2daeb0u: goto label_2daeb0;
        default: break;
    }

    ctx->pc = 0x2dadb0u;

    // 0x2dadb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dadb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dadb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dadb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dadb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dadb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dadbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dadbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dadc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dadc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dadc4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dadc8: 0x2463ae10  addiu       $v1, $v1, -0x51F0
    ctx->pc = 0x2dadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946320));
    // 0x2dadcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dadccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dadd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DADD0u;
    {
        const bool branch_taken_0x2dadd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dadd0) {
            ctx->pc = 0x2DADF0u;
            goto label_2dadf0;
        }
    }
    ctx->pc = 0x2DADD8u;
    // 0x2dadd8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dadd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2daddc: 0x2484ae24  addiu       $a0, $a0, -0x51DC
    ctx->pc = 0x2daddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946340));
    // 0x2dade0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dade0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dade4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dade4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dade8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DADE8u;
    SET_GPR_U32(ctx, 31, 0x2DADF0u);
    ctx->pc = 0x2DADECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADE8u;
            // 0x2dadec: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADF0u; }
        if (ctx->pc != 0x2DADF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADF0u; }
        if (ctx->pc != 0x2DADF0u) { return; }
    }
    ctx->pc = 0x2DADF0u;
label_2dadf0:
    // 0x2dadf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DADF0u;
    {
        const bool branch_taken_0x2dadf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dadf0) {
            ctx->pc = 0x2DAE24u;
            goto label_2dae24;
        }
    }
    ctx->pc = 0x2DADF8u;
    // 0x2dadf8: 0x8ca24b75  lw          $v0, 0x4B75($a1)
    ctx->pc = 0x2dadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 19317)));
    // 0x2dadfc: 0x8fcbeb9d  lw          $t3, -0x1463($fp)
    ctx->pc = 0x2dadfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294962077)));
    // 0x2dae00: 0xdd8ab807  ld          $t2, -0x47F9($t4)
    ctx->pc = 0x2dae00u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 12), 4294948871)));
    // 0x2dae04: 0x23e8820  add         $s1, $s1, $fp
    ctx->pc = 0x2dae04u;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 30);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x2dae08: 0x12e4020  add         $t0, $t1, $t6
    ctx->pc = 0x2dae08u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x2dae0c: 0x27722b90  addiu       $s2, $k1, 0x2B90
    ctx->pc = 0x2dae0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 27), 11152));
    // 0x2dae10: 0x0  nop
    ctx->pc = 0x2dae10u;
    // NOP
    // 0x2dae14: 0xa98be58f  swl         $t3, -0x1A71($t4)
    ctx->pc = 0x2dae14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294960527); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dae18: 0xc712d9fe  lwc1        $f18, -0x2602($t8)
    ctx->pc = 0x2dae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957566)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dae1c: 0xa98be5b3  swl         $t3, -0x1A4D($t4)
    ctx->pc = 0x2dae1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294960563); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dae20: 0x0  nop
    ctx->pc = 0x2dae20u;
    // NOP
label_2dae24:
    // 0x2dae24: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dae28: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2dae28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2dae2c: 0xb4478fd2  sdr         $a3, -0x702E($v0)
    ctx->pc = 0x2dae2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294938578); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dae30: 0xb4578e94  sdr         $s7, -0x716C($v0)
    ctx->pc = 0x2dae30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294938260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dae34: 0xaba5d0f2  swl         $a1, -0x2F0E($sp)
    ctx->pc = 0x2dae34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294955250); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dae38: 0x3047ea56  andi        $a3, $v0, 0xEA56
    ctx->pc = 0x2dae38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)59990);
    // 0x2dae3c: 0xaba75012  swl         $a3, 0x5012($sp)
    ctx->pc = 0x2dae3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20498); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dae40: 0x77476bd6  .word       0x77476BD6                   # INVALID     $k0, $a3, 0x6BD6 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dae40u;
    // Unhandled opcode: 0x1D
    // 0x2dae44: 0xb4576fd2  sdr         $s7, 0x6FD2($v0)
    ctx->pc = 0x2dae44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28626); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dae48: 0xb457af73  sdr         $s7, -0x508D($v0)
    ctx->pc = 0x2dae48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294946675); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dae4c: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x2dae4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x2dae50: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x2dae50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x2dae54: 0xabaff0b4  swl         $t7, -0xF4C($sp)
    ctx->pc = 0x2dae54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294963380); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dae58: 0x344b4fe2  ori         $t3, $v0, 0x4FE2
    ctx->pc = 0x2dae58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20450);
    // 0x2dae5c: 0xb445cf72  sdr         $a1, -0x308E($v0)
    ctx->pc = 0x2dae5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294954866); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dae60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DAE60u;
    {
        const bool branch_taken_0x2dae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dae60) {
            ctx->pc = 0x2DAE90u;
            goto label_2dae90;
        }
    }
    ctx->pc = 0x2DAE68u;
    // 0x2dae68: 0xdcab2427  ld          $t3, 0x2427($a1)
    ctx->pc = 0x2dae68u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 5), 9255)));
    // 0x2dae6c: 0xc75a966  jal         func_1D6A598
    ctx->pc = 0x2DAE6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAE74u);
    ctx->pc = 0x2DAE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE6Cu;
            // 0x2dae70: 0xdf91110f  ld          $s1, 0x110F($gp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 28), 4367)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A598u;
    {
        auto targetFn = runtime->lookupFunction(0x1D6A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE74u; }
        if (ctx->pc != 0x2DAE74u) { return; }
    }
    ctx->pc = 0x2DAE74u;
label_2dae74:
    // 0x2dae74: 0x87b7acbb  lh          $s7, -0x5345($sp)
    ctx->pc = 0x2dae74u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4294945979)));
    // 0x2dae78: 0x2454c2b0  addiu       $s4, $v0, -0x3D50
    ctx->pc = 0x2dae78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
    // 0x2dae7c: 0x266c57b0  addiu       $t4, $s3, 0x57B0
    ctx->pc = 0x2dae7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 22448));
    // 0x2dae80: 0xa98be5f8  swl         $t3, -0x1A08($t4)
    ctx->pc = 0x2dae80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294960632); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dae84: 0xc712d9ff  lwc1        $f18, -0x2601($t8)
    ctx->pc = 0x2dae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294957567)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dae88: 0xa98be5c4  swl         $t3, -0x1A3C($t4)
    ctx->pc = 0x2dae88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294960580); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dae8c: 0x0  nop
    ctx->pc = 0x2dae8cu;
    // NOP
label_2dae90:
    // 0x2dae90: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dae94: 0x2442ae80  addiu       $v0, $v0, -0x5180
    ctx->pc = 0x2dae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x2dae98: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dae98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dae9c: 0x2484ae60  addiu       $a0, $a0, -0x51A0
    ctx->pc = 0x2dae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946400));
    // 0x2daea0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2daea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2daea4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2daea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2daea8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DAEA8u;
    SET_GPR_U32(ctx, 31, 0x2DAEB0u);
    ctx->pc = 0x2DAEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEA8u;
            // 0x2daeac: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEB0u; }
        if (ctx->pc != 0x2DAEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEB0u; }
        if (ctx->pc != 0x2DAEB0u) { return; }
    }
    ctx->pc = 0x2DAEB0u;
label_2daeb0:
    // 0x2daeb0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2daeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daeb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2daeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daeb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2daeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2daebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2daebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEC0u;
            // 0x2daec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DAEC8u;
    ctx->pc = 0x2daec8u;
}
