#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308480
// Address: 0x308480 - 0x308520
void sub_00308480_0x308480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308480_0x308480");
#endif

    switch (ctx->pc) {
        case 0x3084ccu: goto label_3084cc;
        default: break;
    }

    ctx->pc = 0x308480u;

    // 0x308480: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x308480u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x308484: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x308484u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x308488: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x308488u;
    {
        const bool branch_taken_0x308488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308488u;
            // 0x30848c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308488) {
            ctx->pc = 0x3084ACu;
            goto label_3084ac;
        }
    }
    ctx->pc = 0x308490u;
    // 0x308490: 0x3c0901d3  lui         $t1, 0x1D3
    ctx->pc = 0x308490u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)467 << 16));
    // 0x308494: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x308494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x308498: 0x252947c0  addiu       $t1, $t1, 0x47C0
    ctx->pc = 0x308498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18368));
    // 0x30849c: 0xac6947bc  sw          $t1, 0x47BC($v1)
    ctx->pc = 0x30849cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18364), GPR_U32(ctx, 9));
    // 0x3084a0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3084a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3084a4: 0xac6b47c8  sw          $t3, 0x47C8($v1)
    ctx->pc = 0x3084a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18376), GPR_U32(ctx, 11));
    // 0x3084a8: 0x256b002c  addiu       $t3, $t3, 0x2C
    ctx->pc = 0x3084a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 44));
label_3084ac:
    // 0x3084ac: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x3084acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3084b0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3084B0u;
    {
        const bool branch_taken_0x3084b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3084b0) {
            ctx->pc = 0x308510u;
            goto label_308510;
        }
    }
    ctx->pc = 0x3084B8u;
    // 0x3084b8: 0x3c0801d3  lui         $t0, 0x1D3
    ctx->pc = 0x3084b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)467 << 16));
    // 0x3084bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3084bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3084c0: 0x250847c0  addiu       $t0, $t0, 0x47C0
    ctx->pc = 0x3084c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18368));
    // 0x3084c4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3084c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3084c8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3084c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3084cc:
    // 0x3084cc: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x3084ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x3084d0: 0x2d430020  sltiu       $v1, $t2, 0x20
    ctx->pc = 0x3084d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3084d4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3084d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3084d8: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x3084d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x3084dc: 0xad090010  sw          $t1, 0x10($t0)
    ctx->pc = 0x3084dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 9));
    // 0x3084e0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3084E0u;
    {
        const bool branch_taken_0x3084e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3084E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3084E0u;
            // 0x3084e4: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3084e0) {
            ctx->pc = 0x3084F0u;
            goto label_3084f0;
        }
    }
    ctx->pc = 0x3084E8u;
    // 0x3084e8: 0xb8050001  swr         $a1, 0x1($zero)
    ctx->pc = 0x3084e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3084ec: 0xa8050004  swl         $a1, 0x4($zero)
    ctx->pc = 0x3084ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3084f0:
    // 0x3084f0: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x3084f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3084f4: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x3084f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x3084f8: 0xad2b0008  sw          $t3, 0x8($t1)
    ctx->pc = 0x3084f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 11));
    // 0x3084fc: 0x256b002c  addiu       $t3, $t3, 0x2C
    ctx->pc = 0x3084fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 44));
    // 0x308500: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x308500u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x308504: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x308504u;
    {
        const bool branch_taken_0x308504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308504) {
            ctx->pc = 0x308508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308504u;
            // 0x308508: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3084CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3084cc;
        }
    }
    ctx->pc = 0x30850Cu;
    // 0x30850c: 0x0  nop
    ctx->pc = 0x30850cu;
    // NOP
label_308510:
    // 0x308510: 0x25630004  addiu       $v1, $t3, 0x4
    ctx->pc = 0x308510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x308514: 0x3e00008  jr          $ra
    ctx->pc = 0x308514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308514u;
            // 0x308518: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30851Cu;
    // 0x30851c: 0x0  nop
    ctx->pc = 0x30851cu;
    // NOP
    ctx->pc = 0x308520u;
}
