#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002993B0
// Address: 0x2993b0 - 0x299578
void sub_002993B0_0x2993b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002993B0_0x2993b0");
#endif

    switch (ctx->pc) {
        case 0x29945cu: goto label_29945c;
        case 0x299480u: goto label_299480;
        case 0x299490u: goto label_299490;
        case 0x2994a0u: goto label_2994a0;
        case 0x29952cu: goto label_29952c;
        case 0x299558u: goto label_299558;
        default: break;
    }

    ctx->pc = 0x2993b0u;

    // 0x2993b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2993b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2993b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2993b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2993b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2993b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2993bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2993bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2993c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2993c4: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x2993c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2993c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2993c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2993cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2993ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2993d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2993d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2993d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993d8: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2993D8u;
    {
        const bool branch_taken_0x2993d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2993DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2993D8u;
            // 0x2993dc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993d8) {
            ctx->pc = 0x299558u;
            goto label_299558;
        }
    }
    ctx->pc = 0x2993E0u;
    // 0x2993e0: 0x9e420010  lwu         $v0, 0x10($s2)
    ctx->pc = 0x2993e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2993e4: 0x1118f8  dsll        $v1, $s1, 3
    ctx->pc = 0x2993e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << 3);
    // 0x2993e8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2993e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2993ec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2993ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2993f0: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x2993f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2993f4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x2993f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2993f8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2993f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2993fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2993FCu;
    {
        const bool branch_taken_0x2993fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2993FCu;
            // 0x299400: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993fc) {
            ctx->pc = 0x299410u;
            goto label_299410;
        }
    }
    ctx->pc = 0x299404u;
    // 0x299404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x299404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x299408: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x299408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x29940c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x29940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_299410:
    // 0x299410: 0x1118f8  dsll        $v1, $s1, 3
    ctx->pc = 0x299410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << 3);
    // 0x299414: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x299414u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x299418: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x299418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29941c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x29941cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x299420: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x299420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x299424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x299424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299428: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x299428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x29942c: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x29942Cu;
    {
        const bool branch_taken_0x29942c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x299430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29942Cu;
            // 0x299430: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29942c) {
            ctx->pc = 0x299530u;
            goto label_299530;
        }
    }
    ctx->pc = 0x299434u;
    // 0x299434: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x299434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299438: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x299438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x29943c: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x29943cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x299440: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299440u;
    {
        const bool branch_taken_0x299440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299440u;
            // 0x299444: 0x2852021  addu        $a0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299440) {
            ctx->pc = 0x29946Cu;
            goto label_29946c;
        }
    }
    ctx->pc = 0x299448u;
    // 0x299448: 0x11803c  dsll32      $s0, $s1, 0
    ctx->pc = 0x299448u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) << (32 + 0));
    // 0x29944c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29944cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x299450: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x299450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299454: 0xc049c48  jal         func_127120
    ctx->pc = 0x299454u;
    SET_GPR_U32(ctx, 31, 0x29945Cu);
    ctx->pc = 0x299458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299454u;
            // 0x299458: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29945Cu; }
        if (ctx->pc != 0x29945Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29945Cu; }
        if (ctx->pc != 0x29945Cu) { return; }
    }
    ctx->pc = 0x29945Cu;
label_29945c:
    // 0x29945c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x29945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x299460: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x299460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x299464: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x299464u;
    {
        const bool branch_taken_0x299464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299464u;
            // 0x299468: 0xae430058  sw          $v1, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299464) {
            ctx->pc = 0x299558u;
            goto label_299558;
        }
    }
    ctx->pc = 0x29946Cu;
label_29946c:
    // 0x29946c: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x29946cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x299470: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x299470u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x299474: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x299474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299478: 0xc049c48  jal         func_127120
    ctx->pc = 0x299478u;
    SET_GPR_U32(ctx, 31, 0x299480u);
    ctx->pc = 0x29947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299478u;
            // 0x29947c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299480u; }
        if (ctx->pc != 0x299480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299480u; }
        if (ctx->pc != 0x299480u) { return; }
    }
    ctx->pc = 0x299480u;
label_299480:
    // 0x299480: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x299480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x299484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x299484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299488: 0xc0a655e  jal         func_299578
    ctx->pc = 0x299488u;
    SET_GPR_U32(ctx, 31, 0x299490u);
    ctx->pc = 0x29948Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299488u;
            // 0x29948c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299578u;
    if (runtime->hasFunction(0x299578u)) {
        auto targetFn = runtime->lookupFunction(0x299578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299490u; }
        if (ctx->pc != 0x299490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299578_0x299578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299490u; }
        if (ctx->pc != 0x299490u) { return; }
    }
    ctx->pc = 0x299490u;
label_299490:
    // 0x299490: 0x230882f  dsubu       $s1, $s1, $s0
    ctx->pc = 0x299490u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x299494: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x299494u;
    {
        const bool branch_taken_0x299494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299494u;
            // 0x299498: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299494) {
            ctx->pc = 0x299530u;
            goto label_299530;
        }
    }
    ctx->pc = 0x29949Cu;
    // 0x29949c: 0x0  nop
    ctx->pc = 0x29949cu;
    // NOP
label_2994a0:
    // 0x2994a0: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x2994a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2994a4: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x2994a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2994a8: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x2994a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2994ac: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x2994acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2994b0: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x2994b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2994b4: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x2994b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2994b8: 0x6a65001f  ldl         $a1, 0x1F($s3)
    ctx->pc = 0x2994b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2994bc: 0x6e650018  ldr         $a1, 0x18($s3)
    ctx->pc = 0x2994bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2994c0: 0xb2820007  sdl         $v0, 0x7($s4)
    ctx->pc = 0x2994c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994c4: 0xb6820000  sdr         $v0, 0x0($s4)
    ctx->pc = 0x2994c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994c8: 0xb283000f  sdl         $v1, 0xF($s4)
    ctx->pc = 0x2994c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994cc: 0xb6830008  sdr         $v1, 0x8($s4)
    ctx->pc = 0x2994ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994d0: 0xb2840017  sdl         $a0, 0x17($s4)
    ctx->pc = 0x2994d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994d4: 0xb6840010  sdr         $a0, 0x10($s4)
    ctx->pc = 0x2994d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994d8: 0xb285001f  sdl         $a1, 0x1F($s4)
    ctx->pc = 0x2994d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994dc: 0xb6850018  sdr         $a1, 0x18($s4)
    ctx->pc = 0x2994dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994e0: 0x6a620027  ldl         $v0, 0x27($s3)
    ctx->pc = 0x2994e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2994e4: 0x6e620020  ldr         $v0, 0x20($s3)
    ctx->pc = 0x2994e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2994e8: 0x6a63002f  ldl         $v1, 0x2F($s3)
    ctx->pc = 0x2994e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2994ec: 0x6e630028  ldr         $v1, 0x28($s3)
    ctx->pc = 0x2994ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2994f0: 0x6a640037  ldl         $a0, 0x37($s3)
    ctx->pc = 0x2994f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2994f4: 0x6e640030  ldr         $a0, 0x30($s3)
    ctx->pc = 0x2994f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2994f8: 0x6a65003f  ldl         $a1, 0x3F($s3)
    ctx->pc = 0x2994f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2994fc: 0x6e650038  ldr         $a1, 0x38($s3)
    ctx->pc = 0x2994fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x299500: 0xb2820027  sdl         $v0, 0x27($s4)
    ctx->pc = 0x299500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299504: 0xb6820020  sdr         $v0, 0x20($s4)
    ctx->pc = 0x299504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299508: 0xb283002f  sdl         $v1, 0x2F($s4)
    ctx->pc = 0x299508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29950c: 0xb6830028  sdr         $v1, 0x28($s4)
    ctx->pc = 0x29950cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299510: 0xb2840037  sdl         $a0, 0x37($s4)
    ctx->pc = 0x299510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299514: 0xb6840030  sdr         $a0, 0x30($s4)
    ctx->pc = 0x299514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299518: 0xb285003f  sdl         $a1, 0x3F($s4)
    ctx->pc = 0x299518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29951c: 0xb6850038  sdr         $a1, 0x38($s4)
    ctx->pc = 0x29951cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x299520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299524: 0xc0a655e  jal         func_299578
    ctx->pc = 0x299524u;
    SET_GPR_U32(ctx, 31, 0x29952Cu);
    ctx->pc = 0x299528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299524u;
            // 0x299528: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299578u;
    if (runtime->hasFunction(0x299578u)) {
        auto targetFn = runtime->lookupFunction(0x299578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29952Cu; }
        if (ctx->pc != 0x29952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00299578_0x299578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29952Cu; }
        if (ctx->pc != 0x29952Cu) { return; }
    }
    ctx->pc = 0x29952Cu;
label_29952c:
    // 0x29952c: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x29952cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_299530:
    // 0x299530: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x299530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x299534: 0x5040ffda  beql        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x299534u;
    {
        const bool branch_taken_0x299534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299534) {
            ctx->pc = 0x299538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x299534u;
            // 0x299538: 0x6631ffc0  daddiu      $s1, $s1, -0x40 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294967232);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2994A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2994a0;
        }
    }
    ctx->pc = 0x29953Cu;
    // 0x29953c: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x29953cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x299540: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x299540u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x299544: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x299544u;
    {
        const bool branch_taken_0x299544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x299548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299544u;
            // 0x299548: 0xae460058  sw          $a2, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299544) {
            ctx->pc = 0x299558u;
            goto label_299558;
        }
    }
    ctx->pc = 0x29954Cu;
    // 0x29954c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299550: 0xc049c48  jal         func_127120
    ctx->pc = 0x299550u;
    SET_GPR_U32(ctx, 31, 0x299558u);
    ctx->pc = 0x299554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299550u;
            // 0x299554: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299558u; }
        if (ctx->pc != 0x299558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299558u; }
        if (ctx->pc != 0x299558u) { return; }
    }
    ctx->pc = 0x299558u;
label_299558:
    // 0x299558: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x299558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29955c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29955cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299560: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x299560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299564: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x299564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299568: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x299568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29956c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29956cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299570: 0x3e00008  jr          $ra
    ctx->pc = 0x299570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299570u;
            // 0x299574: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299578u;
    ctx->pc = 0x299578u;
}
