#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002824E0
// Address: 0x2824e0 - 0x282578
void sub_002824E0_0x2824e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002824E0_0x2824e0");
#endif

    switch (ctx->pc) {
        case 0x2824f4u: goto label_2824f4;
        case 0x282514u: goto label_282514;
        case 0x282530u: goto label_282530;
        case 0x282560u: goto label_282560;
        default: break;
    }

    ctx->pc = 0x2824e0u;

    // 0x2824e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2824e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2824e4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2824e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2824e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2824e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2824ec: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2824ECu;
    SET_GPR_U32(ctx, 31, 0x2824F4u);
    ctx->pc = 0x2824F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2824ECu;
            // 0x2824f0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824F4u; }
        if (ctx->pc != 0x2824F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2824F4u; }
        if (ctx->pc != 0x2824F4u) { return; }
    }
    ctx->pc = 0x2824F4u;
label_2824f4:
    // 0x2824f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2824f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824f8: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2824F8u;
    {
        const bool branch_taken_0x2824f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2824f8) {
            ctx->pc = 0x2824FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2824F8u;
            // 0x2824fc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28250Cu;
            goto label_28250c;
        }
    }
    ctx->pc = 0x282500u;
    // 0x282500: 0x240200db  addiu       $v0, $zero, 0xDB
    ctx->pc = 0x282500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x282504: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x282504u;
    {
        const bool branch_taken_0x282504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282504u;
            // 0x282508: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282504) {
            ctx->pc = 0x282548u;
            goto label_282548;
        }
    }
    ctx->pc = 0x28250Cu;
label_28250c:
    // 0x28250c: 0xc0af004  jal         func_2BC010
    ctx->pc = 0x28250Cu;
    SET_GPR_U32(ctx, 31, 0x282514u);
    ctx->pc = 0x282510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28250Cu;
            // 0x282510: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (runtime->hasFunction(0x2BC010u)) {
        auto targetFn = runtime->lookupFunction(0x2BC010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282514u; }
        if (ctx->pc != 0x282514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC010_0x2bc010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282514u; }
        if (ctx->pc != 0x282514u) { return; }
    }
    ctx->pc = 0x282514u;
label_282514:
    // 0x282514: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x282514u;
    {
        const bool branch_taken_0x282514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282514u;
            // 0x282518: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282514) {
            ctx->pc = 0x282528u;
            goto label_282528;
        }
    }
    ctx->pc = 0x28251Cu;
    // 0x28251c: 0x240200de  addiu       $v0, $zero, 0xDE
    ctx->pc = 0x28251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x282520: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x282520u;
    {
        const bool branch_taken_0x282520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282520u;
            // 0x282524: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282520) {
            ctx->pc = 0x282548u;
            goto label_282548;
        }
    }
    ctx->pc = 0x282528u;
label_282528:
    // 0x282528: 0xc0a32b4  jal         func_28CAD0
    ctx->pc = 0x282528u;
    SET_GPR_U32(ctx, 31, 0x282530u);
    ctx->pc = 0x28CAD0u;
    if (runtime->hasFunction(0x28CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x28CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282530u; }
        if (ctx->pc != 0x282530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CAD0_0x28cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282530u; }
        if (ctx->pc != 0x282530u) { return; }
    }
    ctx->pc = 0x282530u;
label_282530:
    // 0x282530: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x282530u;
    {
        const bool branch_taken_0x282530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282530u;
            // 0x282534: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282530) {
            ctx->pc = 0x282560u;
            goto label_282560;
        }
    }
    ctx->pc = 0x282538u;
    // 0x282538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28253c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28253cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282540u;
    {
        const bool branch_taken_0x282540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282540u;
            // 0x282544: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282540) {
            ctx->pc = 0x282564u;
            goto label_282564;
        }
    }
    ctx->pc = 0x282548u;
label_282548:
    // 0x282548: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x282548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x28254c: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x28254cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x282550: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x282550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x282554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282558: 0xc0a5648  jal         func_295920
    ctx->pc = 0x282558u;
    SET_GPR_U32(ctx, 31, 0x282560u);
    ctx->pc = 0x28255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282558u;
            // 0x28255c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282560u; }
        if (ctx->pc != 0x282560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282560u; }
        if (ctx->pc != 0x282560u) { return; }
    }
    ctx->pc = 0x282560u;
label_282560:
    // 0x282560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282564:
    // 0x282564: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x282564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282568: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x282568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28256c: 0x3e00008  jr          $ra
    ctx->pc = 0x28256Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28256Cu;
            // 0x282570: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282574u;
    // 0x282574: 0x0  nop
    ctx->pc = 0x282574u;
    // NOP
    ctx->pc = 0x282578u;
}
