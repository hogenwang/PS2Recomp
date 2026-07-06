#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED558
// Address: 0x1ed558 - 0x1ed618
void sub_001ED558_0x1ed558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED558_0x1ed558");
#endif

    switch (ctx->pc) {
        case 0x1ed584u: goto label_1ed584;
        case 0x1ed598u: goto label_1ed598;
        case 0x1ed5b4u: goto label_1ed5b4;
        case 0x1ed5c0u: goto label_1ed5c0;
        case 0x1ed5c8u: goto label_1ed5c8;
        case 0x1ed5d0u: goto label_1ed5d0;
        case 0x1ed5d8u: goto label_1ed5d8;
        case 0x1ed604u: goto label_1ed604;
        default: break;
    }

    ctx->pc = 0x1ed558u;

    // 0x1ed558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed55c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed564: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1ed564u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1ed568: 0x26101540  addiu       $s0, $s0, 0x1540
    ctx->pc = 0x1ed568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5440));
    // 0x1ed56c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ed56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ed570: 0x2406008b  addiu       $a2, $zero, 0x8B
    ctx->pc = 0x1ed570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x1ed574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ed57c: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1ED57Cu;
    SET_GPR_U32(ctx, 31, 0x1ED584u);
    ctx->pc = 0x1ED580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED57Cu;
            // 0x1ed580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (runtime->hasFunction(0x1D63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED584u; }
        if (ctx->pc != 0x1ED584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D63E8_0x1d63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED584u; }
        if (ctx->pc != 0x1ED584u) { return; }
    }
    ctx->pc = 0x1ED584u;
label_1ed584:
    // 0x1ed584: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1ed584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1ed588: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1ed588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1ed58c: 0x24a5e980  addiu       $a1, $a1, -0x1680
    ctx->pc = 0x1ed58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961536));
    // 0x1ed590: 0xc0757de  jal         func_1D5F78
    ctx->pc = 0x1ED590u;
    SET_GPR_U32(ctx, 31, 0x1ED598u);
    ctx->pc = 0x1ED594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED590u;
            // 0x1ed594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED598u; }
        if (ctx->pc != 0x1ED598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED598u; }
        if (ctx->pc != 0x1ED598u) { return; }
    }
    ctx->pc = 0x1ED598u;
label_1ed598:
    // 0x1ed598: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x1ed598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ed59c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x1ed59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ed5a0: 0xb2020197  sdl         $v0, 0x197($s0)
    ctx->pc = 0x1ed5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed5a4: 0xb6020190  sdr         $v0, 0x190($s0)
    ctx->pc = 0x1ed5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ed5a8: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x1ed5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x1ed5ac: 0xc07b5b4  jal         func_1ED6D0
    ctx->pc = 0x1ED5ACu;
    SET_GPR_U32(ctx, 31, 0x1ED5B4u);
    ctx->pc = 0x1ED5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5ACu;
            // 0x1ed5b0: 0x2604019c  addiu       $a0, $s0, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED6D0u;
    if (runtime->hasFunction(0x1ED6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5B4u; }
        if (ctx->pc != 0x1ED5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED6D0_0x1ed6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5B4u; }
        if (ctx->pc != 0x1ED5B4u) { return; }
    }
    ctx->pc = 0x1ED5B4u;
label_1ed5b4:
    // 0x1ed5b4: 0x260401b0  addiu       $a0, $s0, 0x1B0
    ctx->pc = 0x1ed5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1ed5b8: 0xc07ed26  jal         func_1FB498
    ctx->pc = 0x1ED5B8u;
    SET_GPR_U32(ctx, 31, 0x1ED5C0u);
    ctx->pc = 0x1ED5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5B8u;
            // 0x1ed5bc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB498u;
    if (runtime->hasFunction(0x1FB498u)) {
        auto targetFn = runtime->lookupFunction(0x1FB498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5C0u; }
        if (ctx->pc != 0x1ED5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB498_0x1fb498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5C0u; }
        if (ctx->pc != 0x1ED5C0u) { return; }
    }
    ctx->pc = 0x1ED5C0u;
label_1ed5c0:
    // 0x1ed5c0: 0xc07a7ec  jal         func_1E9FB0
    ctx->pc = 0x1ED5C0u;
    SET_GPR_U32(ctx, 31, 0x1ED5C8u);
    ctx->pc = 0x1ED5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5C0u;
            // 0x1ed5c4: 0x260401c4  addiu       $a0, $s0, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 452));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9FB0u;
    if (runtime->hasFunction(0x1E9FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5C8u; }
        if (ctx->pc != 0x1ED5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9FB0_0x1e9fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5C8u; }
        if (ctx->pc != 0x1ED5C8u) { return; }
    }
    ctx->pc = 0x1ED5C8u;
label_1ed5c8:
    // 0x1ed5c8: 0xc07b586  jal         func_1ED618
    ctx->pc = 0x1ED5C8u;
    SET_GPR_U32(ctx, 31, 0x1ED5D0u);
    ctx->pc = 0x1ED5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5C8u;
            // 0x1ed5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED618u;
    if (runtime->hasFunction(0x1ED618u)) {
        auto targetFn = runtime->lookupFunction(0x1ED618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5D0u; }
        if (ctx->pc != 0x1ED5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED618_0x1ed618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED5D0u; }
        if (ctx->pc != 0x1ED5D0u) { return; }
    }
    ctx->pc = 0x1ED5D0u;
label_1ed5d0:
    // 0x1ed5d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed5d4: 0x26100228  addiu       $s0, $s0, 0x228
    ctx->pc = 0x1ed5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
label_1ed5d8:
    // 0x1ed5d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ed5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ed5dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ed5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ed5e0: 0x0  nop
    ctx->pc = 0x1ed5e0u;
    // NOP
    // 0x1ed5e4: 0x0  nop
    ctx->pc = 0x1ed5e4u;
    // NOP
    // 0x1ed5e8: 0x0  nop
    ctx->pc = 0x1ed5e8u;
    // NOP
    // 0x1ed5ec: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ED5ECu;
    {
        const bool branch_taken_0x1ed5ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ED5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5ECu;
            // 0x1ed5f0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed5ec) {
            ctx->pc = 0x1ED5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed5d8;
        }
    }
    ctx->pc = 0x1ED5F4u;
    // 0x1ed5f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1ed5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ed5f8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ed5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ed5fc: 0xc07f496  jal         func_1FD258
    ctx->pc = 0x1ED5FCu;
    SET_GPR_U32(ctx, 31, 0x1ED604u);
    ctx->pc = 0x1ED600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED5FCu;
            // 0x1ed600: 0x24841708  addiu       $a0, $a0, 0x1708 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD258u;
    if (runtime->hasFunction(0x1FD258u)) {
        auto targetFn = runtime->lookupFunction(0x1FD258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED604u; }
        if (ctx->pc != 0x1ED604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD258_0x1fd258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED604u; }
        if (ctx->pc != 0x1ED604u) { return; }
    }
    ctx->pc = 0x1ED604u;
label_1ed604:
    // 0x1ed604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed610: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED610u;
            // 0x1ed614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED618u;
    ctx->pc = 0x1ed618u;
}
