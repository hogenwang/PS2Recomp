#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00252FA8
// Address: 0x252fa8 - 0x253008
void sub_00252FA8_0x252fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252FA8_0x252fa8");
#endif

    switch (ctx->pc) {
        case 0x252fc0u: goto label_252fc0;
        case 0x252fd8u: goto label_252fd8;
        case 0x253000u: goto label_253000;
        default: break;
    }

    ctx->pc = 0x252fa8u;

    // 0x252fa8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x252fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x252fac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x252facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x252fb0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252FB0u;
    {
        const bool branch_taken_0x252fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x252FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FB0u;
            // 0x252fb4: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fb0) {
            ctx->pc = 0x252FC0u;
            goto label_252fc0;
        }
    }
    ctx->pc = 0x252FB8u;
    // 0x252fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x252FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FB8u;
            // 0x252fbc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252FC0u;
label_252fc0:
    // 0x252fc0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x252fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x252fc4: 0x8c43fcd0  lw          $v1, -0x330($v0)
    ctx->pc = 0x252fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
    // 0x252fc8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x252FC8u;
    {
        const bool branch_taken_0x252fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252fc8) {
            ctx->pc = 0x252FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252FC8u;
            // 0x252fcc: 0x90c20001  lbu         $v0, 0x1($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252FD8u;
            goto label_252fd8;
        }
    }
    ctx->pc = 0x252FD0u;
    // 0x252fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x252FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FD0u;
            // 0x252fd4: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252FD8u;
label_252fd8:
    // 0x252fd8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x252fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x252fdc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x252fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x252fe0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x252FE0u;
    {
        const bool branch_taken_0x252fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FE0u;
            // 0x252fe4: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fe0) {
            ctx->pc = 0x253000u;
            goto label_253000;
        }
    }
    ctx->pc = 0x252FE8u;
    // 0x252fe8: 0x88c20007  lwl         $v0, 0x7($a2)
    ctx->pc = 0x252fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x252fec: 0x98c20004  lwr         $v0, 0x4($a2)
    ctx->pc = 0x252fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x252ff0: 0xa882004b  swl         $v0, 0x4B($a0)
    ctx->pc = 0x252ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252ff4: 0xb8820048  swr         $v0, 0x48($a0)
    ctx->pc = 0x252ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x252FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252FF8u;
            // 0x252ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253000u;
label_253000:
    // 0x253000: 0x3e00008  jr          $ra
    ctx->pc = 0x253000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253008u;
    ctx->pc = 0x253008u;
}
