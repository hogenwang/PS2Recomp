#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032CF90
// Address: 0x32cf90 - 0x32d010
void sub_0032CF90_0x32cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CF90_0x32cf90");
#endif

    switch (ctx->pc) {
        case 0x32cfb4u: goto label_32cfb4;
        case 0x32cfdcu: goto label_32cfdc;
        case 0x32cfe8u: goto label_32cfe8;
        default: break;
    }

    ctx->pc = 0x32cf90u;

    // 0x32cf90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32cf94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32cf98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32cf9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32cf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32cfa0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32cfa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cfa4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32cfa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cfa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32cfac: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x32CFACu;
    SET_GPR_U32(ctx, 31, 0x32CFB4u);
    ctx->pc = 0x32CFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CFACu;
            // 0x32cfb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CFB4u; }
        if (ctx->pc != 0x32CFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CFB4u; }
        if (ctx->pc != 0x32CFB4u) { return; }
    }
    ctx->pc = 0x32CFB4u;
label_32cfb4:
    // 0x32cfb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32cfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cfb8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CFB8u;
    {
        const bool branch_taken_0x32cfb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cfb8) {
            ctx->pc = 0x32CFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CFB8u;
            // 0x32cfbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CFD0u;
            goto label_32cfd0;
        }
    }
    ctx->pc = 0x32CFC0u;
    // 0x32cfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cfc4: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x32cfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32cfc8: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x32cfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32cfcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32cfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32cfd0:
    // 0x32cfd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32cfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cfd4: 0xc069034  jal         func_1A40D0
    ctx->pc = 0x32CFD4u;
    SET_GPR_U32(ctx, 31, 0x32CFDCu);
    ctx->pc = 0x32CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CFD4u;
            // 0x32cfd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A40D0u;
    if (runtime->hasFunction(0x1A40D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A40D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CFDCu; }
        if (ctx->pc != 0x32CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A40D0_0x1a40d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CFDCu; }
        if (ctx->pc != 0x32CFDCu) { return; }
    }
    ctx->pc = 0x32CFDCu;
label_32cfdc:
    // 0x32cfdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32cfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cfe0: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x32CFE0u;
    SET_GPR_U32(ctx, 31, 0x32CFE8u);
    ctx->pc = 0x32CFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CFE0u;
            // 0x32cfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (runtime->hasFunction(0x1A4F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A4F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CFE8u; }
        if (ctx->pc != 0x32CFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4F20_0x1a4f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CFE8u; }
        if (ctx->pc != 0x32CFE8u) { return; }
    }
    ctx->pc = 0x32CFE8u;
label_32cfe8:
    // 0x32cfe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32cfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cfec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32cfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32cff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32cff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cffc: 0x3e00008  jr          $ra
    ctx->pc = 0x32CFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CFFCu;
            // 0x32d000: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D004u;
    // 0x32d004: 0x0  nop
    ctx->pc = 0x32d004u;
    // NOP
    // 0x32d008: 0x0  nop
    ctx->pc = 0x32d008u;
    // NOP
    // 0x32d00c: 0x0  nop
    ctx->pc = 0x32d00cu;
    // NOP
    ctx->pc = 0x32d010u;
}
