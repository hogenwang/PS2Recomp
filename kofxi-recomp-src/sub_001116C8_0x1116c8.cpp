#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001116C8
// Address: 0x1116c8 - 0x111af0
void sub_001116C8_0x1116c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001116C8_0x1116c8");
#endif

    switch (ctx->pc) {
        case 0x1116e4u: goto label_1116e4;
        case 0x1116ecu: goto label_1116ec;
        case 0x111700u: goto label_111700;
        case 0x11171cu: goto label_11171c;
        case 0x111738u: goto label_111738;
        case 0x1117d4u: goto label_1117d4;
        case 0x111828u: goto label_111828;
        case 0x111878u: goto label_111878;
        case 0x1118e0u: goto label_1118e0;
        case 0x11193cu: goto label_11193c;
        case 0x111a68u: goto label_111a68;
        case 0x111aa4u: goto label_111aa4;
        case 0x111adcu: goto label_111adc;
        default: break;
    }

    ctx->pc = 0x1116c8u;

    // 0x1116c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1116c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1116cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1116ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1116d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1116d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1116d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1116d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1116d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1116d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1116dc: 0xc044518  jal         func_111460
    ctx->pc = 0x1116DCu;
    SET_GPR_U32(ctx, 31, 0x1116E4u);
    ctx->pc = 0x1116E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1116DCu;
            // 0x1116e0: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111460u;
    if (runtime->hasFunction(0x111460u)) {
        auto targetFn = runtime->lookupFunction(0x111460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116E4u; }
        if (ctx->pc != 0x1116E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111460_0x111460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116E4u; }
        if (ctx->pc != 0x1116E4u) { return; }
    }
    ctx->pc = 0x1116E4u;
label_1116e4:
    // 0x1116e4: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1116E4u;
    SET_GPR_U32(ctx, 31, 0x1116ECu);
    ctx->pc = 0x1116E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1116E4u;
            // 0x1116e8: 0x8e248748  lw          $a0, -0x78B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116ECu; }
        if (ctx->pc != 0x1116ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1116ECu; }
        if (ctx->pc != 0x1116ECu) { return; }
    }
    ctx->pc = 0x1116ECu;
label_1116ec:
    // 0x1116ec: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x1116ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1116f0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1116F0u;
    {
        const bool branch_taken_0x1116f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1116F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1116F0u;
            // 0x1116f4: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116f0) {
            ctx->pc = 0x111708u;
            goto label_111708;
        }
    }
    ctx->pc = 0x1116F8u;
    // 0x1116f8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x1116F8u;
    SET_GPR_U32(ctx, 31, 0x111700u);
    ctx->pc = 0x1116FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1116F8u;
            // 0x1116fc: 0x8e248748  lw          $a0, -0x78B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111700u; }
        if (ctx->pc != 0x111700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111700u; }
        if (ctx->pc != 0x111700u) { return; }
    }
    ctx->pc = 0x111700u;
label_111700:
    // 0x111700: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x111700u;
    {
        const bool branch_taken_0x111700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111700u;
            // 0x111704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111700) {
            ctx->pc = 0x111720u;
            goto label_111720;
        }
    }
    ctx->pc = 0x111708u;
label_111708:
    // 0x111708: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x111708u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x11170c: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x11170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x111710: 0x8e248748  lw          $a0, -0x78B8($s1)
    ctx->pc = 0x111710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936392)));
    // 0x111714: 0xc043320  jal         func_10CC80
    ctx->pc = 0x111714u;
    SET_GPR_U32(ctx, 31, 0x11171Cu);
    ctx->pc = 0x111718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111714u;
            // 0x111718: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11171Cu; }
        if (ctx->pc != 0x11171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11171Cu; }
        if (ctx->pc != 0x11171Cu) { return; }
    }
    ctx->pc = 0x11171Cu;
label_11171c:
    // 0x11171c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11171cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111720:
    // 0x111720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x111720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111724: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11172c: 0x3e00008  jr          $ra
    ctx->pc = 0x11172Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11172Cu;
            // 0x111730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111734u;
    // 0x111734: 0x0  nop
    ctx->pc = 0x111734u;
    // NOP
label_111738:
    // 0x111738: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x111738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11173c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11173cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111740: 0x8c438740  lw          $v1, -0x78C0($v0)
    ctx->pc = 0x111740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936384)));
    // 0x111744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111748: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11174c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11174Cu;
    {
        const bool branch_taken_0x11174c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11174Cu;
            // 0x111750: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11174c) {
            ctx->pc = 0x111758u;
            goto label_111758;
        }
    }
    ctx->pc = 0x111754u;
    // 0x111754: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x111754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_111758:
    // 0x111758: 0x24030440  addiu       $v1, $zero, 0x440
    ctx->pc = 0x111758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x11175c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x111760: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x111760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x111764: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x111764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x111768: 0xac458738  sw          $a1, -0x78C8($v0)
    ctx->pc = 0x111768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936376), GPR_U32(ctx, 5));
    // 0x11176c: 0x24848f00  addiu       $a0, $a0, -0x7100
    ctx->pc = 0x11176cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938368));
    // 0x111770: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x111770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x111774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x111774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111778: 0x658025  or          $s0, $v1, $a1
    ctx->pc = 0x111778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x11177c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x11177cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x111780: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x111780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x111784: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x111784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111788: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x111788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11178c: 0x8a060007  lwl         $a2, 0x7($s0)
    ctx->pc = 0x11178cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x111790: 0x9a060004  lwr         $a2, 0x4($s0)
    ctx->pc = 0x111790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x111794: 0xaba60007  swl         $a2, 0x7($sp)
    ctx->pc = 0x111794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111798: 0xbba60004  swr         $a2, 0x4($sp)
    ctx->pc = 0x111798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11179c: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x11179cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1117a0: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x1117a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1117a4: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x1117a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1117a8: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x1117a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1117ac: 0x8a07000f  lwl         $a3, 0xF($s0)
    ctx->pc = 0x1117acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1117b0: 0x9a07000c  lwr         $a3, 0xC($s0)
    ctx->pc = 0x1117b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1117b4: 0xaba7000f  swl         $a3, 0xF($sp)
    ctx->pc = 0x1117b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1117b8: 0xbba7000c  swr         $a3, 0xC($sp)
    ctx->pc = 0x1117b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1117bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1117bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1117c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1117C0u;
    {
        const bool branch_taken_0x1117c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1117C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1117C0u;
            // 0x1117c4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c0) {
            ctx->pc = 0x1117D4u;
            goto label_1117d4;
        }
    }
    ctx->pc = 0x1117C8u;
    // 0x1117c8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1117c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1117cc: 0xc049c48  jal         func_127120
    ctx->pc = 0x1117CCu;
    SET_GPR_U32(ctx, 31, 0x1117D4u);
    ctx->pc = 0x1117D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1117CCu;
            // 0x1117d0: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1117D4u; }
        if (ctx->pc != 0x1117D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1117D4u; }
        if (ctx->pc != 0x1117D4u) { return; }
    }
    ctx->pc = 0x1117D4u;
label_1117d4:
    // 0x1117d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1117d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1117d8: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1117d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1117dc: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x1117dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1117e0: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1117E0u;
    {
        const bool branch_taken_0x1117e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1117E0u;
            // 0x1117e4: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117e0) {
            ctx->pc = 0x111A68u;
            goto label_111a68;
        }
    }
    ctx->pc = 0x1117E8u;
    // 0x1117e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1117e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1117ec: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x1117ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
    // 0x1117f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1117f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1117f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1117f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1117f8: 0x800008  jr          $a0
    ctx->pc = 0x1117F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111800u: goto label_111800;
            case 0x1118A8u: goto label_1118a8;
            case 0x111984u: goto label_111984;
            case 0x111A20u: goto label_111a20;
            case 0x111A68u: goto label_111a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111800u;
label_111800:
    // 0x111800: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x111800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x111804: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x111804u;
    {
        const bool branch_taken_0x111804 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x111808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111804u;
            // 0x111808: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111804) {
            ctx->pc = 0x111850u;
            goto label_111850;
        }
    }
    ctx->pc = 0x11180Cu;
    // 0x11180c: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x11180cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x111810: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x111810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x111814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111818: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x111818u;
    {
        const bool branch_taken_0x111818 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111818u;
            // 0x11181c: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111818) {
            ctx->pc = 0x111850u;
            goto label_111850;
        }
    }
    ctx->pc = 0x111820u;
    // 0x111820: 0x26090024  addiu       $t1, $s0, 0x24
    ctx->pc = 0x111820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x111824: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x111824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_111828:
    // 0x111828: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x111828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x11182c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11182cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111830: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x111830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x111834: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x111838: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x111838u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11183c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11183cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x111840: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x111840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x111844: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x111844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111848: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x111848u;
    {
        const bool branch_taken_0x111848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11184Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111848u;
            // 0x11184c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111848) {
            ctx->pc = 0x111828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111828;
        }
    }
    ctx->pc = 0x111850u;
label_111850:
    // 0x111850: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x111850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x111854: 0x18600084  blez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x111854u;
    {
        const bool branch_taken_0x111854 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x111858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111854u;
            // 0x111858: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111854) {
            ctx->pc = 0x111A68u;
            goto label_111a68;
        }
    }
    ctx->pc = 0x11185Cu;
    // 0x11185c: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x11185cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x111860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111864: 0x18600080  blez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x111864u;
    {
        const bool branch_taken_0x111864 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x111868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111864u;
            // 0x111868: 0x1025025  or          $t2, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111864) {
            ctx->pc = 0x111A68u;
            goto label_111a68;
        }
    }
    ctx->pc = 0x11186Cu;
    // 0x11186c: 0x24e90050  addiu       $t1, $a3, 0x50
    ctx->pc = 0x11186cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x111870: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x111870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x111874: 0x0  nop
    ctx->pc = 0x111874u;
    // NOP
label_111878:
    // 0x111878: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x111878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x11187c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11187cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111880: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x111880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x111884: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x111888: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x111888u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11188c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11188cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x111890: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x111890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x111894: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x111894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111898: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x111898u;
    {
        const bool branch_taken_0x111898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111898u;
            // 0x11189c: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111898) {
            ctx->pc = 0x111878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111878;
        }
    }
    ctx->pc = 0x1118A0u;
    // 0x1118a0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1118A0u;
    {
        const bool branch_taken_0x1118a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1118A0u;
            // 0x1118a4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118a0) {
            ctx->pc = 0x111A6Cu;
            goto label_111a6c;
        }
    }
    ctx->pc = 0x1118A8u;
label_1118a8:
    // 0x1118a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1118a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1118ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1118acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1118b0: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1118B0u;
    {
        const bool branch_taken_0x1118b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1118B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1118B0u;
            // 0x1118b4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118b0) {
            ctx->pc = 0x111A6Cu;
            goto label_111a6c;
        }
    }
    ctx->pc = 0x1118B8u;
    // 0x1118b8: 0x8a040017  lwl         $a0, 0x17($s0)
    ctx->pc = 0x1118b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1118bc: 0x9a040014  lwr         $a0, 0x14($s0)
    ctx->pc = 0x1118bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1118c0: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x1118c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1118c4: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x1118c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1118c8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1118c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1118cc: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1118ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1118d0: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x1118d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1118d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1118d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1118d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1118D8u;
    {
        const bool branch_taken_0x1118d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1118D8u;
            // 0x1118dc: 0x26020158  addiu       $v0, $s0, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118d8) {
            ctx->pc = 0x11193Cu;
            goto label_11193c;
        }
    }
    ctx->pc = 0x1118E0u;
label_1118e0:
    // 0x1118e0: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x1118e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1118e4: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x1118e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1118e8: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x1118e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1118ec: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x1118ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1118f0: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x1118f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1118f4: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x1118f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1118f8: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x1118f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1118fc: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x1118fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x111900: 0xb0c80007  sdl         $t0, 0x7($a2)
    ctx->pc = 0x111900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111904: 0xb4c80000  sdr         $t0, 0x0($a2)
    ctx->pc = 0x111904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111908: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x111908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11190c: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x11190cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111910: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x111910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111914: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x111914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111918: 0xb0c7001f  sdl         $a3, 0x1F($a2)
    ctx->pc = 0x111918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11191c: 0xb4c70018  sdr         $a3, 0x18($a2)
    ctx->pc = 0x11191cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111920: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x111920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x111924: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x111924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x111928: 0x0  nop
    ctx->pc = 0x111928u;
    // NOP
    // 0x11192c: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11192Cu;
    {
        const bool branch_taken_0x11192c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11192c) {
            ctx->pc = 0x1118E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1118e0;
        }
    }
    ctx->pc = 0x111934u;
    // 0x111934: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x111934u;
    {
        const bool branch_taken_0x111934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111934) {
            ctx->pc = 0x111970u;
            goto label_111970;
        }
    }
    ctx->pc = 0x11193Cu;
label_11193c:
    // 0x11193c: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x11193cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x111940: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x111940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x111944: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x111944u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x111948: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x111948u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11194c: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x11194cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x111950: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x111950u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x111954: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x111954u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x111958: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x111958u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x11195c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x111960: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x111960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x111964: 0x0  nop
    ctx->pc = 0x111964u;
    // NOP
    // 0x111968: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x111968u;
    {
        const bool branch_taken_0x111968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x111968) {
            ctx->pc = 0x11193Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11193c;
        }
    }
    ctx->pc = 0x111970u;
label_111970:
    // 0x111970: 0x88880003  lwl         $t0, 0x3($a0)
    ctx->pc = 0x111970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x111974: 0x98880000  lwr         $t0, 0x0($a0)
    ctx->pc = 0x111974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x111978: 0xa8c80003  swl         $t0, 0x3($a2)
    ctx->pc = 0x111978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11197c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11197Cu;
    {
        const bool branch_taken_0x11197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11197Cu;
            // 0x111980: 0xb8c80000  swr         $t0, 0x0($a2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11197c) {
            ctx->pc = 0x111A68u;
            goto label_111a68;
        }
    }
    ctx->pc = 0x111984u;
label_111984:
    // 0x111984: 0x8a060017  lwl         $a2, 0x17($s0)
    ctx->pc = 0x111984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x111988: 0x9a060014  lwr         $a2, 0x14($s0)
    ctx->pc = 0x111988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x11198c: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x11198cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111990: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x111990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111994: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111998: 0x6a03001f  ldl         $v1, 0x1F($s0)
    ctx->pc = 0x111998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11199c: 0x6e030018  ldr         $v1, 0x18($s0)
    ctx->pc = 0x11199cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1119a0: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x1119a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1119a4: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x1119a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1119a8: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x1119a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1119ac: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x1119acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1119b0: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x1119b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1119b4: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x1119b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1119b8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1119b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119bc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1119bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119c0: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x1119c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119c4: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x1119c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119c8: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x1119c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119cc: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x1119ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119d0: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x1119d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119d4: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x1119d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119d8: 0x6a03003f  ldl         $v1, 0x3F($s0)
    ctx->pc = 0x1119d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1119dc: 0x6e030038  ldr         $v1, 0x38($s0)
    ctx->pc = 0x1119dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1119e0: 0x6a040047  ldl         $a0, 0x47($s0)
    ctx->pc = 0x1119e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1119e4: 0x6e040040  ldr         $a0, 0x40($s0)
    ctx->pc = 0x1119e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1119e8: 0x6a05004f  ldl         $a1, 0x4F($s0)
    ctx->pc = 0x1119e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1119ec: 0x6e050048  ldr         $a1, 0x48($s0)
    ctx->pc = 0x1119ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1119f0: 0x6a060057  ldl         $a2, 0x57($s0)
    ctx->pc = 0x1119f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1119f4: 0x6e060050  ldr         $a2, 0x50($s0)
    ctx->pc = 0x1119f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1119f8: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x1119f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1119fc: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x1119fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111a00: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x111a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111a04: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x111a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111a08: 0xb0450037  sdl         $a1, 0x37($v0)
    ctx->pc = 0x111a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111a0c: 0xb4450030  sdr         $a1, 0x30($v0)
    ctx->pc = 0x111a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111a10: 0xb046003f  sdl         $a2, 0x3F($v0)
    ctx->pc = 0x111a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111a14: 0xb4460038  sdr         $a2, 0x38($v0)
    ctx->pc = 0x111a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x111a18: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x111A18u;
    {
        const bool branch_taken_0x111a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A18u;
            // 0x111a1c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a18) {
            ctx->pc = 0x111A6Cu;
            goto label_111a6c;
        }
    }
    ctx->pc = 0x111A20u;
label_111a20:
    // 0x111a20: 0x8a070017  lwl         $a3, 0x17($s0)
    ctx->pc = 0x111a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x111a24: 0x9a070014  lwr         $a3, 0x14($s0)
    ctx->pc = 0x111a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x111a28: 0xaba70013  swl         $a3, 0x13($sp)
    ctx->pc = 0x111a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111a2c: 0xbba70010  swr         $a3, 0x10($sp)
    ctx->pc = 0x111a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111a30: 0x8a04001b  lwl         $a0, 0x1B($s0)
    ctx->pc = 0x111a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x111a34: 0x9a040018  lwr         $a0, 0x18($s0)
    ctx->pc = 0x111a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x111a38: 0xaba40017  swl         $a0, 0x17($sp)
    ctx->pc = 0x111a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111a3c: 0xbba40014  swr         $a0, 0x14($sp)
    ctx->pc = 0x111a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111a40: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x111a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x111a44: 0x2cc20401  sltiu       $v0, $a2, 0x401
    ctx->pc = 0x111a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x111a48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111A48u;
    {
        const bool branch_taken_0x111a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A48u;
            // 0x111a4c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a48) {
            ctx->pc = 0x111A60u;
            goto label_111a60;
        }
    }
    ctx->pc = 0x111A50u;
    // 0x111a50: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x111a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x111a54: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x111a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x111a58: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x111a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x111a5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_111a60:
    // 0x111a60: 0xc049c48  jal         func_127120
    ctx->pc = 0x111A60u;
    SET_GPR_U32(ctx, 31, 0x111A68u);
    ctx->pc = 0x111A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111A60u;
            // 0x111a64: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A68u; }
        if (ctx->pc != 0x111A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111A68u; }
        if (ctx->pc != 0x111A68u) { return; }
    }
    ctx->pc = 0x111A68u;
label_111a68:
    // 0x111a68: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x111a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_111a6c:
    // 0x111a6c: 0x4810019  bgez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x111A6Cu;
    {
        const bool branch_taken_0x111a6c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x111A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A6Cu;
            // 0x111a70: 0x3c070036  lui         $a3, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a6c) {
            ctx->pc = 0x111AD4u;
            goto label_111ad4;
        }
    }
    ctx->pc = 0x111A74u;
    // 0x111a74: 0x41023  negu        $v0, $a0
    ctx->pc = 0x111a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x111a78: 0x8ce386b8  lw          $v1, -0x7948($a3)
    ctx->pc = 0x111a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936248)));
    // 0x111a7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111a80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x111a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x111a84: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111A84u;
    {
        const bool branch_taken_0x111a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x111A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A84u;
            // 0x111a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a84) {
            ctx->pc = 0x111AA0u;
            goto label_111aa0;
        }
    }
    ctx->pc = 0x111A8Cu;
    // 0x111a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x111a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111a90: 0xace286b8  sw          $v0, -0x7948($a3)
    ctx->pc = 0x111a90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294936248), GPR_U32(ctx, 2));
    // 0x111a94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x111A94u;
    {
        const bool branch_taken_0x111a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111A94u;
            // 0x111a98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a94) {
            ctx->pc = 0x111AE0u;
            goto label_111ae0;
        }
    }
    ctx->pc = 0x111A9Cu;
    // 0x111a9c: 0x0  nop
    ctx->pc = 0x111a9cu;
    // NOP
label_111aa0:
    // 0x111aa0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_111aa4:
    // 0x111aa4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x111aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x111aa8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x111AA8u;
    {
        const bool branch_taken_0x111aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111AA8u;
            // 0x111aac: 0x24e286b8  addiu       $v0, $a3, -0x7948 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111aa8) {
            ctx->pc = 0x111ADCu;
            goto label_111adc;
        }
    }
    ctx->pc = 0x111AB0u;
    // 0x111ab0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x111ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x111ab4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111ab8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111abc: 0x1485fff9  bne         $a0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x111ABCu;
    {
        const bool branch_taken_0x111abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x111AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111ABCu;
            // 0x111ac0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111abc) {
            ctx->pc = 0x111AA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111aa4;
        }
    }
    ctx->pc = 0x111AC4u;
    // 0x111ac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x111ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111ac8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x111ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x111acc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111ACCu;
    {
        const bool branch_taken_0x111acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111ACCu;
            // 0x111ad0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111acc) {
            ctx->pc = 0x111AE0u;
            goto label_111ae0;
        }
    }
    ctx->pc = 0x111AD4u;
label_111ad4:
    // 0x111ad4: 0xc043324  jal         func_10CC90
    ctx->pc = 0x111AD4u;
    SET_GPR_U32(ctx, 31, 0x111ADCu);
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111ADCu; }
        if (ctx->pc != 0x111ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111ADCu; }
        if (ctx->pc != 0x111ADCu) { return; }
    }
    ctx->pc = 0x111ADCu;
label_111adc:
    // 0x111adc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x111adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111ae0:
    // 0x111ae0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x111ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x111AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111AE4u;
            // 0x111ae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111AECu;
    // 0x111aec: 0x0  nop
    ctx->pc = 0x111aecu;
    // NOP
    ctx->pc = 0x111af0u;
}
