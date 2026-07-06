#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289370
// Address: 0x289370 - 0x289450
void sub_00289370_0x289370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289370_0x289370");
#endif

    switch (ctx->pc) {
        case 0x2893b0u: goto label_2893b0;
        case 0x289440u: goto label_289440;
        default: break;
    }

    ctx->pc = 0x289370u;

    // 0x289370: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x289370u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x289374: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289378: 0x8d2336f0  lw          $v1, 0x36F0($t1)
    ctx->pc = 0x289378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 14064)));
    // 0x28937c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x28937cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289384: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x289384u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289388: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x289388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28938c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28938Cu;
    {
        const bool branch_taken_0x28938c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28938Cu;
            // 0x289390: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28938c) {
            ctx->pc = 0x28939Cu;
            goto label_28939c;
        }
    }
    ctx->pc = 0x289394u;
    // 0x289394: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x289394u;
    {
        const bool branch_taken_0x289394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289394u;
            // 0x289398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289394) {
            ctx->pc = 0x289430u;
            goto label_289430;
        }
    }
    ctx->pc = 0x28939Cu;
label_28939c:
    // 0x28939c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28939cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2893a0: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x2893a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2893a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2893A4u;
    {
        const bool branch_taken_0x2893a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2893A4u;
            // 0x2893a8: 0x3c0601c9  lui         $a2, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893a4) {
            ctx->pc = 0x2893F8u;
            goto label_2893f8;
        }
    }
    ctx->pc = 0x2893ACu;
    // 0x2893ac: 0x0  nop
    ctx->pc = 0x2893acu;
    // NOP
label_2893b0:
    // 0x2893b0: 0x24c343b8  addiu       $v1, $a2, 0x43B8
    ctx->pc = 0x2893b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 17336));
    // 0x2893b4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2893b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2893b8: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x2893b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2893bc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2893bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2893c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2893c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2893c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2893c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2893c8: 0x684d0007  ldl         $t5, 0x7($v0)
    ctx->pc = 0x2893c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2893cc: 0x6c4d0000  ldr         $t5, 0x0($v0)
    ctx->pc = 0x2893ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2893d0: 0x684e000f  ldl         $t6, 0xF($v0)
    ctx->pc = 0x2893d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2893d4: 0x6c4e0008  ldr         $t6, 0x8($v0)
    ctx->pc = 0x2893d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2893d8: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x2893d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2893dc: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x2893dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2893e0: 0xb06e000f  sdl         $t6, 0xF($v1)
    ctx->pc = 0x2893e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2893e4: 0x105202a  slt         $a0, $t0, $a1
    ctx->pc = 0x2893e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2893e8: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2893E8u;
    {
        const bool branch_taken_0x2893e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2893ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2893E8u;
            // 0x2893ec: 0xb46e0008  sdr         $t6, 0x8($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893e8) {
            ctx->pc = 0x2893B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2893b0;
        }
    }
    ctx->pc = 0x2893F0u;
    // 0x2893f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2893F0u;
    {
        const bool branch_taken_0x2893f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2893F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2893F0u;
            // 0x2893f4: 0x24c443b8  addiu       $a0, $a2, 0x43B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 17336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2893f0) {
            ctx->pc = 0x2893FCu;
            goto label_2893fc;
        }
    }
    ctx->pc = 0x2893F8u;
label_2893f8:
    // 0x2893f8: 0x24c443b8  addiu       $a0, $a2, 0x43B8
    ctx->pc = 0x2893f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 17336));
label_2893fc:
    // 0x2893fc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2893fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x289400: 0x8d2636f0  lw          $a2, 0x36F0($t1)
    ctx->pc = 0x289400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 14064)));
    // 0x289404: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x289404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x289408: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x289408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x28940c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x28940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x289410: 0xac4b0004  sw          $t3, 0x4($v0)
    ctx->pc = 0x289410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x289414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x289414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289418: 0xac6c0008  sw          $t4, 0x8($v1)
    ctx->pc = 0x289418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 12));
    // 0x28941c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28941cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289420: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x289420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x289424: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x289424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x289428: 0xad2636f0  sw          $a2, 0x36F0($t1)
    ctx->pc = 0x289428u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 14064), GPR_U32(ctx, 6));
    // 0x28942c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28942cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289430:
    // 0x289430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289434: 0x3e00008  jr          $ra
    ctx->pc = 0x289434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289434u;
            // 0x289438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28943Cu;
    // 0x28943c: 0x0  nop
    ctx->pc = 0x28943cu;
    // NOP
label_289440:
    // 0x289440: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x289440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x289444: 0x3e00008  jr          $ra
    ctx->pc = 0x289444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289444u;
            // 0x289448: 0xac4036f0  sw          $zero, 0x36F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 14064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28944Cu;
    // 0x28944c: 0x0  nop
    ctx->pc = 0x28944cu;
    // NOP
    ctx->pc = 0x289450u;
}
