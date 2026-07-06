#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031E4E0
// Address: 0x31e4e0 - 0x31e550
void sub_0031E4E0_0x31e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E4E0_0x31e4e0");
#endif

    ctx->pc = 0x31e4e0u;

    // 0x31e4e0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e4e4: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x31e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31e4e8: 0x28630190  slti        $v1, $v1, 0x190
    ctx->pc = 0x31e4e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x31e4ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E4ECu;
    {
        const bool branch_taken_0x31e4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e4ec) {
            ctx->pc = 0x31E500u;
            goto label_31e500;
        }
    }
    ctx->pc = 0x31E4F4u;
    // 0x31e4f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e4f8: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31e4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31e4fc: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31e4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31e500:
    // 0x31e500: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e504: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x31e504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
    // 0x31e508: 0x8c6829e0  lw          $t0, 0x29E0($v1)
    ctx->pc = 0x31e508u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31e50c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x31e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x31e510: 0x24c64df0  addiu       $a2, $a2, 0x4DF0
    ctx->pc = 0x31e510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19952));
    // 0x31e514: 0x248479b0  addiu       $a0, $a0, 0x79B0
    ctx->pc = 0x31e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31152));
    // 0x31e518: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e51c: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x31e51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31e520: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x31e520u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x31e524: 0xac6529e0  sw          $a1, 0x29E0($v1)
    ctx->pc = 0x31e524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 5));
    // 0x31e528: 0xe82823  subu        $a1, $a3, $t0
    ctx->pc = 0x31e528u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x31e52c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x31e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31e530: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x31e530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31e534: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31e534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31e538: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x31e538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31e53c: 0xac600110  sw          $zero, 0x110($v1)
    ctx->pc = 0x31e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 0));
    // 0x31e540: 0x3e00008  jr          $ra
    ctx->pc = 0x31E540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E540u;
            // 0x31e544: 0xac640114  sw          $a0, 0x114($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31E548u;
    // 0x31e548: 0x0  nop
    ctx->pc = 0x31e548u;
    // NOP
    // 0x31e54c: 0x0  nop
    ctx->pc = 0x31e54cu;
    // NOP
    ctx->pc = 0x31e550u;
}
