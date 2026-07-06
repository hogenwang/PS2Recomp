#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00253008
// Address: 0x253008 - 0x253308
void sub_00253008_0x253008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253008_0x253008");
#endif

    switch (ctx->pc) {
        case 0x253028u: goto label_253028;
        case 0x253088u: goto label_253088;
        case 0x2530a4u: goto label_2530a4;
        case 0x2530b4u: goto label_2530b4;
        case 0x2530c4u: goto label_2530c4;
        case 0x25313cu: goto label_25313c;
        case 0x253154u: goto label_253154;
        case 0x253174u: goto label_253174;
        case 0x25317cu: goto label_25317c;
        case 0x253190u: goto label_253190;
        case 0x2531a4u: goto label_2531a4;
        case 0x2531b8u: goto label_2531b8;
        case 0x2531c8u: goto label_2531c8;
        case 0x2531d8u: goto label_2531d8;
        case 0x25321cu: goto label_25321c;
        case 0x25324cu: goto label_25324c;
        case 0x25325cu: goto label_25325c;
        case 0x25326cu: goto label_25326c;
        case 0x25328cu: goto label_25328c;
        case 0x253294u: goto label_253294;
        case 0x2532a8u: goto label_2532a8;
        case 0x2532bcu: goto label_2532bc;
        case 0x2532d0u: goto label_2532d0;
        case 0x2532d8u: goto label_2532d8;
        default: break;
    }

    ctx->pc = 0x253008u;

label_253008:
    // 0x253008: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x253008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25300c: 0x244701d0  addiu       $a3, $v0, 0x1D0
    ctx->pc = 0x25300cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x253010: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x253010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x253014: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x253014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x253018: 0xa883004b  swl         $v1, 0x4B($a0)
    ctx->pc = 0x253018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25301c: 0x3e00008  jr          $ra
    ctx->pc = 0x25301Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25301Cu;
            // 0x253020: 0xb8830048  swr         $v1, 0x48($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253024u;
    // 0x253024: 0x0  nop
    ctx->pc = 0x253024u;
    // NOP
label_253028:
    // 0x253028: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x253028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25302c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253030: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x253030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x253034: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x253034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x253038: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x253038u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25303c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25303cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x253040: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x253040u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253044: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x253044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x253048: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x253048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25304c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x253050: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x253050u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253054: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x253054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x253058: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x253058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25305c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x25305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x253060: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x253060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253064: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x253064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x253068: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253068u;
    {
        const bool branch_taken_0x253068 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x25306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253068u;
            // 0x25306c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253068) {
            ctx->pc = 0x253090u;
            goto label_253090;
        }
    }
    ctx->pc = 0x253070u;
    // 0x253070: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x253070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x253074: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x253074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x253078: 0x2c52824  and         $a1, $s6, $a1
    ctx->pc = 0x253078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x25307c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x25307cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253080: 0xc0925fc  jal         func_2497F0
    ctx->pc = 0x253080u;
    SET_GPR_U32(ctx, 31, 0x253088u);
    ctx->pc = 0x253084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253080u;
            // 0x253084: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2497F0u;
    if (runtime->hasFunction(0x2497F0u)) {
        auto targetFn = runtime->lookupFunction(0x2497F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253088u; }
        if (ctx->pc != 0x253088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002497F0_0x2497f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253088u; }
        if (ctx->pc != 0x253088u) { return; }
    }
    ctx->pc = 0x253088u;
label_253088:
    // 0x253088: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x253088u;
    {
        const bool branch_taken_0x253088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25308Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253088u;
            // 0x25308c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253088) {
            ctx->pc = 0x2532E0u;
            goto label_2532e0;
        }
    }
    ctx->pc = 0x253090u;
label_253090:
    // 0x253090: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x253094: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253094u;
    {
        const bool branch_taken_0x253094 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x253094) {
            ctx->pc = 0x2530BCu;
            goto label_2530bc;
        }
    }
    ctx->pc = 0x25309Cu;
    // 0x25309c: 0xc092892  jal         func_24A248
    ctx->pc = 0x25309Cu;
    SET_GPR_U32(ctx, 31, 0x2530A4u);
    ctx->pc = 0x2530A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25309Cu;
            // 0x2530a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A248u;
    if (runtime->hasFunction(0x24A248u)) {
        auto targetFn = runtime->lookupFunction(0x24A248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2530A4u; }
        if (ctx->pc != 0x2530A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A248_0x24a248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2530A4u; }
        if (ctx->pc != 0x2530A4u) { return; }
    }
    ctx->pc = 0x2530A4u;
label_2530a4:
    // 0x2530a4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2530a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2530a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2530a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530ac: 0xc0930c0  jal         func_24C300
    ctx->pc = 0x2530ACu;
    SET_GPR_U32(ctx, 31, 0x2530B4u);
    ctx->pc = 0x2530B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2530ACu;
            // 0x2530b0: 0x248411e8  addiu       $a0, $a0, 0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C300u;
    if (runtime->hasFunction(0x24C300u)) {
        auto targetFn = runtime->lookupFunction(0x24C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2530B4u; }
        if (ctx->pc != 0x2530B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C300_0x24c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2530B4u; }
        if (ctx->pc != 0x2530B4u) { return; }
    }
    ctx->pc = 0x2530B4u;
label_2530b4:
    // 0x2530b4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2530B4u;
    {
        const bool branch_taken_0x2530b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530B4u;
            // 0x2530b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530b4) {
            ctx->pc = 0x2532DCu;
            goto label_2532dc;
        }
    }
    ctx->pc = 0x2530BCu;
label_2530bc:
    // 0x2530bc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2530BCu;
    SET_GPR_U32(ctx, 31, 0x2530C4u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2530C4u; }
        if (ctx->pc != 0x2530C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2530C4u; }
        if (ctx->pc != 0x2530C4u) { return; }
    }
    ctx->pc = 0x2530C4u;
label_2530c4:
    // 0x2530c4: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x2530c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2530c8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2530C8u;
    {
        const bool branch_taken_0x2530c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2530CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530C8u;
            // 0x2530cc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530c8) {
            ctx->pc = 0x2530E0u;
            goto label_2530e0;
        }
    }
    ctx->pc = 0x2530D0u;
    // 0x2530d0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2530D0u;
    {
        const bool branch_taken_0x2530d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530D0u;
            // 0x2530d4: 0x2e620012  sltiu       $v0, $s3, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530d0) {
            ctx->pc = 0x2530E4u;
            goto label_2530e4;
        }
    }
    ctx->pc = 0x2530D8u;
    // 0x2530d8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2530D8u;
    {
        const bool branch_taken_0x2530d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530D8u;
            // 0x2530dc: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530d8) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x2530E0u;
label_2530e0:
    // 0x2530e0: 0x2e620012  sltiu       $v0, $s3, 0x12
    ctx->pc = 0x2530e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_2530e4:
    // 0x2530e4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2530E4u;
    {
        const bool branch_taken_0x2530e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530E4u;
            // 0x2530e8: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530e4) {
            ctx->pc = 0x2532C4u;
            goto label_2532c4;
        }
    }
    ctx->pc = 0x2530ECu;
    // 0x2530ec: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2530ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2530f0: 0x24426e60  addiu       $v0, $v0, 0x6E60
    ctx->pc = 0x2530f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28256));
    // 0x2530f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2530f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2530f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2530f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2530fc: 0x800008  jr          $a0
    ctx->pc = 0x2530FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253104u: goto label_253104;
            case 0x25316Cu: goto label_25316c;
            case 0x253174u: goto label_253174;
            case 0x253184u: goto label_253184;
            case 0x253198u: goto label_253198;
            case 0x2531C0u: goto label_2531c0;
            case 0x2531D0u: goto label_2531d0;
            case 0x2531E0u: goto label_2531e0;
            case 0x253264u: goto label_253264;
            case 0x253274u: goto label_253274;
            case 0x25327Cu: goto label_25327c;
            case 0x25329Cu: goto label_25329c;
            case 0x2532B0u: goto label_2532b0;
            case 0x2532C4u: goto label_2532c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253104u;
label_253104:
    // 0x253104: 0x16000072  bnez        $s0, . + 4 + (0x72 << 2)
    ctx->pc = 0x253104u;
    {
        const bool branch_taken_0x253104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x253108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253104u;
            // 0x253108: 0x2414007f  addiu       $s4, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253104) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x25310Cu;
    // 0x25310c: 0xde420088  ld          $v0, 0x88($s2)
    ctx->pc = 0x25310cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x253110: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x253110u;
    {
        const bool branch_taken_0x253110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253110u;
            // 0x253114: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253110) {
            ctx->pc = 0x253128u;
            goto label_253128;
        }
    }
    ctx->pc = 0x253118u;
    // 0x253118: 0xde420050  ld          $v0, 0x50($s2)
    ctx->pc = 0x253118u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x25311c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25311Cu;
    {
        const bool branch_taken_0x25311c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25311Cu;
            // 0x253120: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25311c) {
            ctx->pc = 0x253148u;
            goto label_253148;
        }
    }
    ctx->pc = 0x253124u;
    // 0x253124: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x253124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_253128:
    // 0x253128: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x253128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25312c: 0xdc4511d8  ld          $a1, 0x11D8($v0)
    ctx->pc = 0x25312cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4568)));
    // 0x253130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253134: 0xc08c25a  jal         func_230968
    ctx->pc = 0x253134u;
    SET_GPR_U32(ctx, 31, 0x25313Cu);
    ctx->pc = 0x253138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253134u;
            // 0x253138: 0xdc6611e0  ld          $a2, 0x11E0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 4576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230968u;
    if (runtime->hasFunction(0x230968u)) {
        auto targetFn = runtime->lookupFunction(0x230968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25313Cu; }
        if (ctx->pc != 0x25313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230968_0x230968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25313Cu; }
        if (ctx->pc != 0x25313Cu) { return; }
    }
    ctx->pc = 0x25313Cu;
label_25313c:
    // 0x25313c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25313cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253140: 0x16800063  bnez        $s4, . + 4 + (0x63 << 2)
    ctx->pc = 0x253140u;
    {
        const bool branch_taken_0x253140 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x253144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253140u;
            // 0x253144: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253140) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x253148u;
label_253148:
    // 0x253148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25314c: 0xc092e56  jal         func_24B958
    ctx->pc = 0x25314Cu;
    SET_GPR_U32(ctx, 31, 0x253154u);
    ctx->pc = 0x253150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25314Cu;
            // 0x253150: 0x24a511e8  addiu       $a1, $a1, 0x11E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B958u;
    if (runtime->hasFunction(0x24B958u)) {
        auto targetFn = runtime->lookupFunction(0x24B958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253154u; }
        if (ctx->pc != 0x253154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B958_0x24b958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253154u; }
        if (ctx->pc != 0x253154u) { return; }
    }
    ctx->pc = 0x253154u;
label_253154:
    // 0x253154: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x253154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253158: 0x1680005d  bnez        $s4, . + 4 + (0x5D << 2)
    ctx->pc = 0x253158u;
    {
        const bool branch_taken_0x253158 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x253158) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x253160u;
    // 0x253160: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x253160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x253164: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x253164u;
    {
        const bool branch_taken_0x253164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253164u;
            // 0x253168: 0xa2150041  sb          $s5, 0x41($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253164) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x25316Cu;
label_25316c:
    // 0x25316c: 0xc08c13c  jal         func_2304F0
    ctx->pc = 0x25316Cu;
    SET_GPR_U32(ctx, 31, 0x253174u);
    ctx->pc = 0x253170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25316Cu;
            // 0x253170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2304F0u;
    if (runtime->hasFunction(0x2304F0u)) {
        auto targetFn = runtime->lookupFunction(0x2304F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253174u; }
        if (ctx->pc != 0x253174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002304F0_0x2304f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253174u; }
        if (ctx->pc != 0x253174u) { return; }
    }
    ctx->pc = 0x253174u;
label_253174:
    // 0x253174: 0xc092fda  jal         func_24BF68
    ctx->pc = 0x253174u;
    SET_GPR_U32(ctx, 31, 0x25317Cu);
    ctx->pc = 0x253178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253174u;
            // 0x253178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BF68u;
    if (runtime->hasFunction(0x24BF68u)) {
        auto targetFn = runtime->lookupFunction(0x24BF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25317Cu; }
        if (ctx->pc != 0x25317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024BF68_0x24bf68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25317Cu; }
        if (ctx->pc != 0x25317Cu) { return; }
    }
    ctx->pc = 0x25317Cu;
label_25317c:
    // 0x25317c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x25317Cu;
    {
        const bool branch_taken_0x25317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25317c) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x253184u;
label_253184:
    // 0x253184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253188: 0xc094bc0  jal         func_252F00
    ctx->pc = 0x253188u;
    SET_GPR_U32(ctx, 31, 0x253190u);
    ctx->pc = 0x25318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253188u;
            // 0x25318c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F00u;
    if (runtime->hasFunction(0x252F00u)) {
        auto targetFn = runtime->lookupFunction(0x252F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253190u; }
        if (ctx->pc != 0x253190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00252F00_0x252f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253190u; }
        if (ctx->pc != 0x253190u) { return; }
    }
    ctx->pc = 0x253190u;
label_253190:
    // 0x253190: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x253190u;
    {
        const bool branch_taken_0x253190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253190u;
            // 0x253194: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253190) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x253198u;
label_253198:
    // 0x253198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25319c: 0xc094bea  jal         func_252FA8
    ctx->pc = 0x25319Cu;
    SET_GPR_U32(ctx, 31, 0x2531A4u);
    ctx->pc = 0x2531A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25319Cu;
            // 0x2531a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252FA8u;
    if (runtime->hasFunction(0x252FA8u)) {
        auto targetFn = runtime->lookupFunction(0x252FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531A4u; }
        if (ctx->pc != 0x2531A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00252FA8_0x252fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531A4u; }
        if (ctx->pc != 0x2531A4u) { return; }
    }
    ctx->pc = 0x2531A4u;
label_2531a4:
    // 0x2531a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2531a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531a8: 0x16800049  bnez        $s4, . + 4 + (0x49 << 2)
    ctx->pc = 0x2531A8u;
    {
        const bool branch_taken_0x2531a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2531a8) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x2531B0u;
    // 0x2531b0: 0xc08c0ee  jal         func_2303B8
    ctx->pc = 0x2531B0u;
    SET_GPR_U32(ctx, 31, 0x2531B8u);
    ctx->pc = 0x2531B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2531B0u;
            // 0x2531b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2303B8u;
    if (runtime->hasFunction(0x2303B8u)) {
        auto targetFn = runtime->lookupFunction(0x2303B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531B8u; }
        if (ctx->pc != 0x2531B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002303B8_0x2303b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531B8u; }
        if (ctx->pc != 0x2531B8u) { return; }
    }
    ctx->pc = 0x2531B8u;
label_2531b8:
    // 0x2531b8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2531B8u;
    {
        const bool branch_taken_0x2531b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2531b8) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x2531C0u;
label_2531c0:
    // 0x2531c0: 0xc08c13c  jal         func_2304F0
    ctx->pc = 0x2531C0u;
    SET_GPR_U32(ctx, 31, 0x2531C8u);
    ctx->pc = 0x2531C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2531C0u;
            // 0x2531c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2304F0u;
    if (runtime->hasFunction(0x2304F0u)) {
        auto targetFn = runtime->lookupFunction(0x2304F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531C8u; }
        if (ctx->pc != 0x2531C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002304F0_0x2304f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531C8u; }
        if (ctx->pc != 0x2531C8u) { return; }
    }
    ctx->pc = 0x2531C8u;
label_2531c8:
    // 0x2531c8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2531C8u;
    {
        const bool branch_taken_0x2531c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2531c8) {
            ctx->pc = 0x253254u;
            goto label_253254;
        }
    }
    ctx->pc = 0x2531D0u;
label_2531d0:
    // 0x2531d0: 0xc08c1f6  jal         func_2307D8
    ctx->pc = 0x2531D0u;
    SET_GPR_U32(ctx, 31, 0x2531D8u);
    ctx->pc = 0x2531D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2531D0u;
            // 0x2531d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2307D8u;
    if (runtime->hasFunction(0x2307D8u)) {
        auto targetFn = runtime->lookupFunction(0x2307D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531D8u; }
        if (ctx->pc != 0x2531D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002307D8_0x2307d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531D8u; }
        if (ctx->pc != 0x2531D8u) { return; }
    }
    ctx->pc = 0x2531D8u;
label_2531d8:
    // 0x2531d8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2531D8u;
    {
        const bool branch_taken_0x2531d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2531d8) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x2531E0u;
label_2531e0:
    // 0x2531e0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2531E0u;
    {
        const bool branch_taken_0x2531e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2531e0) {
            ctx->pc = 0x2531FCu;
            goto label_2531fc;
        }
    }
    ctx->pc = 0x2531E8u;
    // 0x2531e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2531e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2531ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2531ECu;
    {
        const bool branch_taken_0x2531ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2531ECu;
            // 0x2531f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531ec) {
            ctx->pc = 0x2531FCu;
            goto label_2531fc;
        }
    }
    ctx->pc = 0x2531F4u;
    // 0x2531f4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2531F4u;
    {
        const bool branch_taken_0x2531f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2531F4u;
            // 0x2531f8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531f4) {
            ctx->pc = 0x253284u;
            goto label_253284;
        }
    }
    ctx->pc = 0x2531FCu;
label_2531fc:
    // 0x2531fc: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2531FCu;
    {
        const bool branch_taken_0x2531fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x253200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2531FCu;
            // 0x253200: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2531fc) {
            ctx->pc = 0x253230u;
            goto label_253230;
        }
    }
    ctx->pc = 0x253204u;
    // 0x253204: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x253204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x253208: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x253208u;
    {
        const bool branch_taken_0x253208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253208u;
            // 0x25320c: 0x2414007f  addiu       $s4, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253208) {
            ctx->pc = 0x25328Cu;
            goto label_25328c;
        }
    }
    ctx->pc = 0x253210u;
    // 0x253210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253214: 0xc094bea  jal         func_252FA8
    ctx->pc = 0x253214u;
    SET_GPR_U32(ctx, 31, 0x25321Cu);
    ctx->pc = 0x253218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253214u;
            // 0x253218: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252FA8u;
    if (runtime->hasFunction(0x252FA8u)) {
        auto targetFn = runtime->lookupFunction(0x252FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25321Cu; }
        if (ctx->pc != 0x25321Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00252FA8_0x252fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25321Cu; }
        if (ctx->pc != 0x25321Cu) { return; }
    }
    ctx->pc = 0x25321Cu;
label_25321c:
    // 0x25321c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25321cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253220: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x253220u;
    {
        const bool branch_taken_0x253220 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x253224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253220u;
            // 0x253224: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253220) {
            ctx->pc = 0x253244u;
            goto label_253244;
        }
    }
    ctx->pc = 0x253228u;
    // 0x253228: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x253228u;
    {
        const bool branch_taken_0x253228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253228) {
            ctx->pc = 0x25328Cu;
            goto label_25328c;
        }
    }
    ctx->pc = 0x253230u;
label_253230:
    // 0x253230: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x253230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x253234: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x253234u;
    {
        const bool branch_taken_0x253234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253234u;
            // 0x253238: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253234) {
            ctx->pc = 0x253244u;
            goto label_253244;
        }
    }
    ctx->pc = 0x25323Cu;
    // 0x25323c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25323Cu;
    {
        const bool branch_taken_0x25323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25323Cu;
            // 0x253240: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25323c) {
            ctx->pc = 0x25328Cu;
            goto label_25328c;
        }
    }
    ctx->pc = 0x253244u;
label_253244:
    // 0x253244: 0xc094ade  jal         func_252B78
    ctx->pc = 0x253244u;
    SET_GPR_U32(ctx, 31, 0x25324Cu);
    ctx->pc = 0x253248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253244u;
            // 0x253248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252B78u;
    if (runtime->hasFunction(0x252B78u)) {
        auto targetFn = runtime->lookupFunction(0x252B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25324Cu; }
        if (ctx->pc != 0x25324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00252B78_0x252b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25324Cu; }
        if (ctx->pc != 0x25324Cu) { return; }
    }
    ctx->pc = 0x25324Cu;
label_25324c:
    // 0x25324c: 0x12a00020  beqz        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x25324Cu;
    {
        const bool branch_taken_0x25324c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x253250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25324Cu;
            // 0x253250: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25324c) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x253254u;
label_253254:
    // 0x253254: 0xc094c02  jal         func_253008
    ctx->pc = 0x253254u;
    SET_GPR_U32(ctx, 31, 0x25325Cu);
    ctx->pc = 0x253258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253254u;
            // 0x253258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253008u;
    goto label_253008;
    ctx->pc = 0x25325Cu;
label_25325c:
    // 0x25325c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25325Cu;
    {
        const bool branch_taken_0x25325c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25325c) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x253264u;
label_253264:
    // 0x253264: 0xc08c698  jal         func_231A60
    ctx->pc = 0x253264u;
    SET_GPR_U32(ctx, 31, 0x25326Cu);
    ctx->pc = 0x253268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253264u;
            // 0x253268: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25326Cu; }
        if (ctx->pc != 0x25326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25326Cu; }
        if (ctx->pc != 0x25326Cu) { return; }
    }
    ctx->pc = 0x25326Cu;
label_25326c:
    // 0x25326c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x25326Cu;
    {
        const bool branch_taken_0x25326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25326Cu;
            // 0x253270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25326c) {
            ctx->pc = 0x2532DCu;
            goto label_2532dc;
        }
    }
    ctx->pc = 0x253274u;
label_253274:
    // 0x253274: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x253274u;
    {
        const bool branch_taken_0x253274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253274u;
            // 0x253278: 0x2414005f  addiu       $s4, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253274) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x25327Cu;
label_25327c:
    // 0x25327c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253280: 0x2414005f  addiu       $s4, $zero, 0x5F
    ctx->pc = 0x253280u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_253284:
    // 0x253284: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x253284u;
    SET_GPR_U32(ctx, 31, 0x25328Cu);
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25328Cu; }
        if (ctx->pc != 0x25328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25328Cu; }
        if (ctx->pc != 0x25328Cu) { return; }
    }
    ctx->pc = 0x25328Cu;
label_25328c:
    // 0x25328c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x25328Cu;
    SET_GPR_U32(ctx, 31, 0x253294u);
    ctx->pc = 0x253290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25328Cu;
            // 0x253290: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253294u; }
        if (ctx->pc != 0x253294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253294u; }
        if (ctx->pc != 0x253294u) { return; }
    }
    ctx->pc = 0x253294u;
label_253294:
    // 0x253294: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x253294u;
    {
        const bool branch_taken_0x253294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253294) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x25329Cu;
label_25329c:
    // 0x25329c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532a0: 0xc09300c  jal         func_24C030
    ctx->pc = 0x2532A0u;
    SET_GPR_U32(ctx, 31, 0x2532A8u);
    ctx->pc = 0x2532A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2532A0u;
            // 0x2532a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C030u;
    if (runtime->hasFunction(0x24C030u)) {
        auto targetFn = runtime->lookupFunction(0x24C030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532A8u; }
        if (ctx->pc != 0x2532A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C030_0x24c030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532A8u; }
        if (ctx->pc != 0x2532A8u) { return; }
    }
    ctx->pc = 0x2532A8u;
label_2532a8:
    // 0x2532a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2532A8u;
    {
        const bool branch_taken_0x2532a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2532a8) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x2532B0u;
label_2532b0:
    // 0x2532b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2532b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532b4: 0xc093028  jal         func_24C0A0
    ctx->pc = 0x2532B4u;
    SET_GPR_U32(ctx, 31, 0x2532BCu);
    ctx->pc = 0x2532B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2532B4u;
            // 0x2532b8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C0A0u;
    if (runtime->hasFunction(0x24C0A0u)) {
        auto targetFn = runtime->lookupFunction(0x24C0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532BCu; }
        if (ctx->pc != 0x2532BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C0A0_0x24c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532BCu; }
        if (ctx->pc != 0x2532BCu) { return; }
    }
    ctx->pc = 0x2532BCu;
label_2532bc:
    // 0x2532bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2532BCu;
    {
        const bool branch_taken_0x2532bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2532bc) {
            ctx->pc = 0x2532D0u;
            goto label_2532d0;
        }
    }
    ctx->pc = 0x2532C4u;
label_2532c4:
    // 0x2532c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2532c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2532c8: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x2532C8u;
    SET_GPR_U32(ctx, 31, 0x2532D0u);
    ctx->pc = 0x2532CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2532C8u;
            // 0x2532cc: 0x24846e50  addiu       $a0, $a0, 0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532D0u; }
        if (ctx->pc != 0x2532D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532D0u; }
        if (ctx->pc != 0x2532D0u) { return; }
    }
    ctx->pc = 0x2532D0u;
label_2532d0:
    // 0x2532d0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2532D0u;
    SET_GPR_U32(ctx, 31, 0x2532D8u);
    ctx->pc = 0x2532D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2532D0u;
            // 0x2532d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532D8u; }
        if (ctx->pc != 0x2532D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532D8u; }
        if (ctx->pc != 0x2532D8u) { return; }
    }
    ctx->pc = 0x2532D8u;
label_2532d8:
    // 0x2532d8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2532d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2532dc:
    // 0x2532dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2532dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2532e0:
    // 0x2532e0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2532e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2532e4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2532e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2532e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2532e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2532ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2532ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2532f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2532f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2532f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2532f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2532f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2532f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2532fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2532fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253300: 0x3e00008  jr          $ra
    ctx->pc = 0x253300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253300u;
            // 0x253304: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253308u;
    ctx->pc = 0x253308u;
}
