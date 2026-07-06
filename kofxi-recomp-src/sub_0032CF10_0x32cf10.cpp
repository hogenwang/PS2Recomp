#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032CF10
// Address: 0x32cf10 - 0x32cf90
void sub_0032CF10_0x32cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CF10_0x32cf10");
#endif

    switch (ctx->pc) {
        case 0x32cf34u: goto label_32cf34;
        case 0x32cf5cu: goto label_32cf5c;
        case 0x32cf68u: goto label_32cf68;
        default: break;
    }

    ctx->pc = 0x32cf10u;

    // 0x32cf10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32cf14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32cf18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32cf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32cf1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32cf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32cf20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32cf20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32cf24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32cf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32cf2c: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x32CF2Cu;
    SET_GPR_U32(ctx, 31, 0x32CF34u);
    ctx->pc = 0x32CF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF2Cu;
            // 0x32cf30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF34u; }
        if (ctx->pc != 0x32CF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF34u; }
        if (ctx->pc != 0x32CF34u) { return; }
    }
    ctx->pc = 0x32CF34u;
label_32cf34:
    // 0x32cf34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32cf34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf38: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32CF38u;
    {
        const bool branch_taken_0x32cf38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cf38) {
            ctx->pc = 0x32CF3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF38u;
            // 0x32cf3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32CF50u;
            goto label_32cf50;
        }
    }
    ctx->pc = 0x32CF40u;
    // 0x32cf40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32cf44: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x32cf44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32cf48: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x32cf48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x32cf4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32cf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32cf50:
    // 0x32cf50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32cf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf54: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x32CF54u;
    SET_GPR_U32(ctx, 31, 0x32CF5Cu);
    ctx->pc = 0x32CF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF54u;
            // 0x32cf58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (runtime->hasFunction(0x1A3F30u)) {
        auto targetFn = runtime->lookupFunction(0x1A3F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF5Cu; }
        if (ctx->pc != 0x32CF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3F30_0x1a3f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF5Cu; }
        if (ctx->pc != 0x32CF5Cu) { return; }
    }
    ctx->pc = 0x32CF5Cu;
label_32cf5c:
    // 0x32cf5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32cf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf60: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x32CF60u;
    SET_GPR_U32(ctx, 31, 0x32CF68u);
    ctx->pc = 0x32CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF60u;
            // 0x32cf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (runtime->hasFunction(0x1A4F20u)) {
        auto targetFn = runtime->lookupFunction(0x1A4F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF68u; }
        if (ctx->pc != 0x32CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4F20_0x1a4f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32CF68u; }
        if (ctx->pc != 0x32CF68u) { return; }
    }
    ctx->pc = 0x32CF68u;
label_32cf68:
    // 0x32cf68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32cf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32cf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32cf70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32cf70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32cf74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32cf74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cf78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32cf78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x32CF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32CF7Cu;
            // 0x32cf80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32CF84u;
    // 0x32cf84: 0x0  nop
    ctx->pc = 0x32cf84u;
    // NOP
    // 0x32cf88: 0x0  nop
    ctx->pc = 0x32cf88u;
    // NOP
    // 0x32cf8c: 0x0  nop
    ctx->pc = 0x32cf8cu;
    // NOP
    ctx->pc = 0x32cf90u;
}
