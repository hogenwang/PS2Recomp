#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003083A0
// Address: 0x3083a0 - 0x30847c
void sub_003083A0_0x3083a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003083A0_0x3083a0");
#endif

    switch (ctx->pc) {
        case 0x30840cu: goto label_30840c;
        default: break;
    }

    ctx->pc = 0x3083a0u;

    // 0x3083a0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3083a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3083a4: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x3083a4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3083a8: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x3083A8u;
    {
        const bool branch_taken_0x3083a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3083A8u;
            // 0x3083ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083a8) {
            ctx->pc = 0x3083E8u;
            goto label_3083e8;
        }
    }
    ctx->pc = 0x3083B0u;
    // 0x3083b0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3083b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3083b4: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x3083b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x3083b8: 0x246349c0  addiu       $v1, $v1, 0x49C0
    ctx->pc = 0x3083b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18880));
    // 0x3083bc: 0xace347b8  sw          $v1, 0x47B8($a3)
    ctx->pc = 0x3083bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18360), GPR_U32(ctx, 3));
    // 0x3083c0: 0x3c0701d3  lui         $a3, 0x1D3
    ctx->pc = 0x3083c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)467 << 16));
    // 0x3083c4: 0xace649c8  sw          $a2, 0x49C8($a3)
    ctx->pc = 0x3083c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18888), GPR_U32(ctx, 6));
    // 0x3083c8: 0x8cc7002c  lw          $a3, 0x2C($a2)
    ctx->pc = 0x3083c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x3083cc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3083ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3083d0: 0xacc7002c  sw          $a3, 0x2C($a2)
    ctx->pc = 0x3083d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 7));
    // 0x3083d4: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x3083d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3083d8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3083d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3083dc: 0xacc70030  sw          $a3, 0x30($a2)
    ctx->pc = 0x3083dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 7));
    // 0x3083e0: 0x8cc70034  lw          $a3, 0x34($a2)
    ctx->pc = 0x3083e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x3083e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3083e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3083e8:
    // 0x3083e8: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x3083e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3083ec: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x3083ECu;
    {
        const bool branch_taken_0x3083ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3083ec) {
            ctx->pc = 0x308468u;
            goto label_308468;
        }
    }
    ctx->pc = 0x3083F4u;
    // 0x3083f4: 0x3c0b01d3  lui         $t3, 0x1D3
    ctx->pc = 0x3083f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)467 << 16));
    // 0x3083f8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3083f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3083fc: 0x256b49c0  addiu       $t3, $t3, 0x49C0
    ctx->pc = 0x3083fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 18880));
    // 0x308400: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x308400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308404: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x308404u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308408: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x308408u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
label_30840c:
    // 0x30840c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x308410: 0x14c4821  addu        $t1, $t2, $t4
    ctx->pc = 0x308410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x308414: 0x2ca70040  sltiu       $a3, $a1, 0x40
    ctx->pc = 0x308414u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x308418: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x308418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x30841c: 0xad63000c  sw          $v1, 0xC($t3)
    ctx->pc = 0x30841cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 3));
    // 0x308420: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x308420u;
    {
        const bool branch_taken_0x308420 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x308424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308420u;
            // 0x308424: 0x256b000c  addiu       $t3, $t3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308420) {
            ctx->pc = 0x308430u;
            goto label_308430;
        }
    }
    ctx->pc = 0x308428u;
    // 0x308428: 0xb8080001  swr         $t0, 0x1($zero)
    ctx->pc = 0x308428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x30842c: 0xa8080004  swl         $t0, 0x4($zero)
    ctx->pc = 0x30842cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_308430:
    // 0x308430: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x308430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308434: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308438: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x308438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x30843c: 0x8cc7002c  lw          $a3, 0x2C($a2)
    ctx->pc = 0x30843cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x308440: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x308440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x308444: 0xacc7002c  sw          $a3, 0x2C($a2)
    ctx->pc = 0x308444u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 7));
    // 0x308448: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x308448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x30844c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x30844cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x308450: 0xacc70030  sw          $a3, 0x30($a2)
    ctx->pc = 0x308450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 7));
    // 0x308454: 0x8cc70034  lw          $a3, 0x34($a2)
    ctx->pc = 0x308454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x308458: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x308458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x30845c: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x30845cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x308460: 0x54e0ffea  bnel        $a3, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x308460u;
    {
        const bool branch_taken_0x308460 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x308460) {
            ctx->pc = 0x308464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x308460u;
            // 0x308464: 0x258c000c  addiu       $t4, $t4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30840Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30840c;
        }
    }
    ctx->pc = 0x308468u;
label_308468:
    // 0x308468: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x308468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x30846c: 0x3e00008  jr          $ra
    ctx->pc = 0x30846Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30846Cu;
            // 0x308470: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308474u;
    // 0x308474: 0x0  nop
    ctx->pc = 0x308474u;
    // NOP
    // 0x308478: 0x0  nop
    ctx->pc = 0x308478u;
    // NOP
    ctx->pc = 0x30847cu;
}
