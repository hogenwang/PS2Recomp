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

// Function: sub_00271A48
// Address: 0x271a48 - 0x271af0
void sub_00271A48_0x271a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271A48_0x271a48");
#endif

    switch (ctx->pc) {
        case 0x271a90u: goto label_271a90;
        case 0x271a94u: goto label_271a94;
        case 0x271ad4u: goto label_271ad4;
        default: break;
    }

    ctx->pc = 0x271a48u;

    // 0x271a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271a4c: 0x24880100  addiu       $t0, $a0, 0x100
    ctx->pc = 0x271a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x271a50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271a54: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x271a54u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x271a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x271a5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x271a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x271a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x271a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x271a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x271a68: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x271a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a6c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x271a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x271a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a74: 0x8c8f0110  lw          $t7, 0x110($a0)
    ctx->pc = 0x271a74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x271a78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x271a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x271a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a80: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x271A80u;
    {
        const bool branch_taken_0x271a80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A80u;
        // 0x271a84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a80) {
            ctx->pc = 0x271AC4u;
            goto label_271ac4;
        }
    }
    ctx->pc = 0x271A88u;
    // 0x271a88: 0xc09c6bc  jal         func_271AF0
    ctx->pc = 0x271A88u;
    SET_GPR_U32(ctx, 31, 0x271A90u);
    ctx->pc = 0x271AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271AF0u, 0x271A88u, 0x271A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A90u;
label_271a90:
    // 0x271a90: 0x11783c  dsll32      $t7, $s1, 0
    ctx->pc = 0x271a90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
label_271a94:
    // 0x271a94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x271a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x271a98: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x271a98u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x271a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271aa0: 0x24f7821  addu        $t7, $s2, $t7
    ctx->pc = 0x271aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x271aa4: 0x69ebffff  ldl         $t3, -0x1($t7)
    ctx->pc = 0x271aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x271aa8: 0x6debfff8  ldr         $t3, -0x8($t7)
    ctx->pc = 0x271aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x271aac: 0xb20b0107  sdl         $t3, 0x107($s0)
    ctx->pc = 0x271aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271ab0: 0xb60b0100  sdr         $t3, 0x100($s0)
    ctx->pc = 0x271ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271ab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x271ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271abc: 0x3e00008  jr          $ra
    ctx->pc = 0x271ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271ABCu;
        // 0x271ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271AC4u;
label_271ac4:
    // 0x271ac4: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x271ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271acc: 0xc09c6fa  jal         func_271BE8
    ctx->pc = 0x271ACCu;
    SET_GPR_U32(ctx, 31, 0x271AD4u);
    ctx->pc = 0x271AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271ACCu;
    // 0x271ad0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BE8u, 0x271ACCu, 0x271AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AD4u;
label_271ad4:
    // 0x271ad4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x271AD4u;
    {
        const bool branch_taken_0x271ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AD4u;
        // 0x271ad8: 0x11783c  dsll32      $t7, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ad4) {
            ctx->pc = 0x271A94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271a94;
        }
    }
    ctx->pc = 0x271ADCu;
    // 0x271adc: 0x0  nop
    ctx->pc = 0x271adcu;
    // NOP
    // 0x271ae0: 0xdc8f0108  ld          $t7, 0x108($a0)
    ctx->pc = 0x271ae0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x271ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x271AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AE4u;
        // 0x271ae8: 0xfc8f0100  sd          $t7, 0x100($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 256), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271AECu;
    // 0x271aec: 0x0  nop
    ctx->pc = 0x271aecu;
    // NOP
}
