#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA820
// Address: 0x1ea820 - 0x1ea890
void sub_001EA820_0x1ea820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA820_0x1ea820");
#endif

    switch (ctx->pc) {
        case 0x1ea868u: goto label_1ea868;
        default: break;
    }

    ctx->pc = 0x1ea820u;

    // 0x1ea820: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ea820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ea824: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1ea828: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ea828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ea82c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea830: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ea830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ea834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea838: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ea838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea83c: 0x24841378  addiu       $a0, $a0, 0x1378
    ctx->pc = 0x1ea83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4984));
    // 0x1ea840: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1ea840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ea844: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x1ea844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ea848: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x1ea848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ea84c: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x1ea84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ea850: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x1ea850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ea854: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x1ea854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea858: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x1ea858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea85c: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x1ea85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea860: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA860u;
            // 0x1ea864: 0xb4e30008  sdr         $v1, 0x8($a3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA868u;
label_1ea868:
    // 0x1ea868: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ea868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ea86c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ea86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ea870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea874: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ea874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ea878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea87c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ea87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea880: 0x8c83137c  lw          $v1, 0x137C($a0)
    ctx->pc = 0x1ea880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4988)));
    // 0x1ea884: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA884u;
            // 0x1ea888: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA88Cu;
    // 0x1ea88c: 0x0  nop
    ctx->pc = 0x1ea88cu;
    // NOP
    ctx->pc = 0x1ea890u;
}
