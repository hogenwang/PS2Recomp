#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003088A0
// Address: 0x3088a0 - 0x308980
void sub_003088A0_0x3088a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003088A0_0x3088a0");
#endif

    switch (ctx->pc) {
        case 0x3088c0u: goto label_3088c0;
        case 0x3088ccu: goto label_3088cc;
        case 0x3088e8u: goto label_3088e8;
        case 0x3088fcu: goto label_3088fc;
        case 0x308924u: goto label_308924;
        case 0x308934u: goto label_308934;
        case 0x30894cu: goto label_30894c;
        default: break;
    }

    ctx->pc = 0x3088a0u;

    // 0x3088a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3088a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3088a4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3088a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3088a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3088a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3088ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3088acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3088b0: 0x8c7047a8  lw          $s0, 0x47A8($v1)
    ctx->pc = 0x3088b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18344)));
    // 0x3088b4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3088B4u;
    {
        const bool branch_taken_0x3088b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3088b4) {
            ctx->pc = 0x308910u;
            goto label_308910;
        }
    }
    ctx->pc = 0x3088BCu;
    // 0x3088bc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3088bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3088c0:
    // 0x3088c0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3088c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3088c4: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x3088C4u;
    SET_GPR_U32(ctx, 31, 0x3088CCu);
    ctx->pc = 0x3088C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3088C4u;
            // 0x3088c8: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (runtime->hasFunction(0x3087C0u)) {
        auto targetFn = runtime->lookupFunction(0x3087C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088CCu; }
        if (ctx->pc != 0x3088CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003087C0_0x3087c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088CCu; }
        if (ctx->pc != 0x3088CCu) { return; }
    }
    ctx->pc = 0x3088CCu;
label_3088cc:
    // 0x3088cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3088ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3088d0: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x3088d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3088d4: 0x248447a0  addiu       $a0, $a0, 0x47A0
    ctx->pc = 0x3088d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    // 0x3088d8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x3088d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x3088dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3088dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3088e0: 0xc0c21f0  jal         func_3087C0
    ctx->pc = 0x3088E0u;
    SET_GPR_U32(ctx, 31, 0x3088E8u);
    ctx->pc = 0x3088E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3088E0u;
            // 0x3088e4: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3087C0u;
    if (runtime->hasFunction(0x3087C0u)) {
        auto targetFn = runtime->lookupFunction(0x3087C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088E8u; }
        if (ctx->pc != 0x3088E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003087C0_0x3087c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088E8u; }
        if (ctx->pc != 0x3088E8u) { return; }
    }
    ctx->pc = 0x3088E8u;
label_3088e8:
    // 0x3088e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3088e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3088ec: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x3088ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x3088f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3088f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3088f4: 0xc0c21f4  jal         func_3087D0
    ctx->pc = 0x3088F4u;
    SET_GPR_U32(ctx, 31, 0x3088FCu);
    ctx->pc = 0x3088F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3088F4u;
            // 0x3088f8: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3087D0u;
    if (runtime->hasFunction(0x3087D0u)) {
        auto targetFn = runtime->lookupFunction(0x3087D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088FCu; }
        if (ctx->pc != 0x3088FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003087D0_0x3087d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3088FCu; }
        if (ctx->pc != 0x3088FCu) { return; }
    }
    ctx->pc = 0x3088FCu;
label_3088fc:
    // 0x3088fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3088fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x308900: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x308900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x308904: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x308904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308908: 0x5600ffed  bnel        $s0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x308908u;
    {
        const bool branch_taken_0x308908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x308908) {
            ctx->pc = 0x30890Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308908u;
            // 0x30890c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3088C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3088c0;
        }
    }
    ctx->pc = 0x308910u;
label_308910:
    // 0x308910: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x308910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x308914: 0x8c6578a0  lw          $a1, 0x78A0($v1)
    ctx->pc = 0x308914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30880)));
    // 0x308918: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x308918u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x30891c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x30891Cu;
    {
        const bool branch_taken_0x30891c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30891Cu;
            // 0x308920: 0x26107890  addiu       $s0, $s0, 0x7890 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30891c) {
            ctx->pc = 0x308970u;
            goto label_308970;
        }
    }
    ctx->pc = 0x308924u;
label_308924:
    // 0x308924: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x308924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x308928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x308928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30892c: 0xc0c1e80  jal         func_307A00
    ctx->pc = 0x30892Cu;
    SET_GPR_U32(ctx, 31, 0x308934u);
    ctx->pc = 0x308930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30892Cu;
            // 0x308930: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307A00u;
    if (runtime->hasFunction(0x307A00u)) {
        auto targetFn = runtime->lookupFunction(0x307A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308934u; }
        if (ctx->pc != 0x308934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307A00_0x307a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308934u; }
        if (ctx->pc != 0x308934u) { return; }
    }
    ctx->pc = 0x308934u;
label_308934:
    // 0x308934: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x308934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x308938: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x308938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30893c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x30893cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x308940: 0x248447a0  addiu       $a0, $a0, 0x47A0
    ctx->pc = 0x308940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
    // 0x308944: 0xc0c1e80  jal         func_307A00
    ctx->pc = 0x308944u;
    SET_GPR_U32(ctx, 31, 0x30894Cu);
    ctx->pc = 0x308948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308944u;
            // 0x308948: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307A00u;
    if (runtime->hasFunction(0x307A00u)) {
        auto targetFn = runtime->lookupFunction(0x307A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30894Cu; }
        if (ctx->pc != 0x30894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307A00_0x307a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30894Cu; }
        if (ctx->pc != 0x30894Cu) { return; }
    }
    ctx->pc = 0x30894Cu;
label_30894c:
    // 0x30894c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30894Cu;
    {
        const bool branch_taken_0x30894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30894c) {
            ctx->pc = 0x308960u;
            goto label_308960;
        }
    }
    ctx->pc = 0x308954u;
    // 0x308954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308958: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x308958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x30895c: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x30895cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_308960:
    // 0x308960: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x308960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x308964: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x308964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x308968: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x308968u;
    {
        const bool branch_taken_0x308968 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x308968) {
            ctx->pc = 0x308924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308924;
        }
    }
    ctx->pc = 0x308970u;
label_308970:
    // 0x308970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308978: 0x3e00008  jr          $ra
    ctx->pc = 0x308978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308978u;
            // 0x30897c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308980u;
    ctx->pc = 0x308980u;
}
