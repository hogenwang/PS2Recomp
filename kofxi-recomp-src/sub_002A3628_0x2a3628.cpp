#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3628
// Address: 0x2a3628 - 0x2a36c8
void sub_002A3628_0x2a3628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3628_0x2a3628");
#endif

    switch (ctx->pc) {
        case 0x2a3650u: goto label_2a3650;
        default: break;
    }

    ctx->pc = 0x2a3628u;

    // 0x2a3628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a362c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a3630: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2a3630u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2a3634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3638: 0x8e226a34  lw          $v0, 0x6A34($s1)
    ctx->pc = 0x2a3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27188)));
    // 0x2a363c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A363Cu;
    {
        const bool branch_taken_0x2a363c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A363Cu;
        // 0x2a3640: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a363c) {
            ctx->pc = 0x2A3684u;
            goto label_2a3684;
        }
    }
    ctx->pc = 0x2A3644u;
    // 0x2a3644: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a3644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3648: 0xc0aa142  jal         func_2A8508
    ctx->pc = 0x2A3648u;
    SET_GPR_U32(ctx, 31, 0x2A3650u);
    ctx->pc = 0x2A364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3648u;
    // 0x2a364c: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8508u, 0x2A3648u, 0x2A3650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3650u;
label_2a3650:
    // 0x2a3650: 0x26066a20  addiu       $a2, $s0, 0x6A20
    ctx->pc = 0x2a3650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 27168));
    // 0x2a3654: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2a3654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a3658: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2a3658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a365c: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2a365cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a3660: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2a3660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a3664: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a3664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a3668: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x2a3668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a366c: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x2a366cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3670: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x2a3670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3674: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x2a3674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a3678: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x2a3678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x2a367c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A367Cu;
    {
        const bool branch_taken_0x2a367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A367Cu;
        // 0x2a3680: 0xae206a34  sw          $zero, 0x6A34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 27188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a367c) {
            ctx->pc = 0x2A3688u;
            goto label_2a3688;
        }
    }
    ctx->pc = 0x2A3684u;
label_2a3684:
    // 0x2a3684: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x2a3684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_2a3688:
    // 0x2a3688: 0x26026a20  addiu       $v0, $s0, 0x6A20
    ctx->pc = 0x2a3688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 27168));
    // 0x2a368c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a368cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3690: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a3690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3698: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3698u;
        // 0x2a369c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A36A0u;
    // 0x2a36a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a36a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a36a8: 0xac446a3c  sw          $a0, 0x6A3C($v0)
    ctx->pc = 0x2a36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27196), GPR_U32(ctx, 4));
    // 0x2a36ac: 0xac646a38  sw          $a0, 0x6A38($v1)
    ctx->pc = 0x2a36acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27192), GPR_U32(ctx, 4));
    // 0x2a36b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A36B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36B0u;
        // 0x2a36b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A36B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A36B8u;
    // 0x2a36b8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2a36bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A36BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36BCu;
        // 0x2a36c0: 0x8c626a3c  lw          $v0, 0x6A3C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27196)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A36BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A36C4u;
    // 0x2a36c4: 0x0  nop
    ctx->pc = 0x2a36c4u;
    // NOP
}
