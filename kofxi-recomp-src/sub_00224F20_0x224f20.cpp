#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224F20
// Address: 0x224f20 - 0x224fe0
void sub_00224F20_0x224f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224F20_0x224f20");
#endif

    switch (ctx->pc) {
        case 0x224facu: goto label_224fac;
        case 0x224fb0u: goto label_224fb0;
        case 0x224fb8u: goto label_224fb8;
        case 0x224fc8u: goto label_224fc8;
        case 0x224fd8u: goto label_224fd8;
        default: break;
    }

    ctx->pc = 0x224f20u;

    // 0x224f20: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x224f20u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x224f24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224f28: 0x25afa6f8  addiu       $t7, $t5, -0x5908
    ctx->pc = 0x224f28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294944504));
    // 0x224f2c: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x224f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x224f30: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x224f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x224f34: 0xb1eb0007  sdl         $t3, 0x7($t7)
    ctx->pc = 0x224f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224f38: 0xb5eb0000  sdr         $t3, 0x0($t7)
    ctx->pc = 0x224f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224f3c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x224f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224f44: 0x240f0046  addiu       $t7, $zero, 0x46
    ctx->pc = 0x224f44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x224f48: 0x25aba6f8  addiu       $t3, $t5, -0x5908
    ctx->pc = 0x224f48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4294944504));
    // 0x224f4c: 0xa1afa6f8  sb          $t7, -0x5908($t5)
    ctx->pc = 0x224f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294944504), (uint8_t)GPR_U32(ctx, 15));
    // 0x224f50: 0x240e0033  addiu       $t6, $zero, 0x33
    ctx->pc = 0x224f50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x224f54: 0xa16e0007  sb          $t6, 0x7($t3)
    ctx->pc = 0x224f54u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 14));
    // 0x224f58: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x224f58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x224f5c: 0x240f0049  addiu       $t7, $zero, 0x49
    ctx->pc = 0x224f5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x224f60: 0xa16c0006  sb          $t4, 0x6($t3)
    ctx->pc = 0x224f60u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 6), (uint8_t)GPR_U32(ctx, 12));
    // 0x224f64: 0xa16f0001  sb          $t7, 0x1($t3)
    ctx->pc = 0x224f64u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 15));
    // 0x224f68: 0x240e0045  addiu       $t6, $zero, 0x45
    ctx->pc = 0x224f68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x224f6c: 0xa16e0003  sb          $t6, 0x3($t3)
    ctx->pc = 0x224f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x224f70: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x224f70u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f74: 0x240f0032  addiu       $t7, $zero, 0x32
    ctx->pc = 0x224f74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x224f78: 0xa16c0005  sb          $t4, 0x5($t3)
    ctx->pc = 0x224f78u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 5), (uint8_t)GPR_U32(ctx, 12));
    // 0x224f7c: 0xa16f0004  sb          $t7, 0x4($t3)
    ctx->pc = 0x224f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 15));
    // 0x224f80: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x224f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224f84: 0x240f004e  addiu       $t7, $zero, 0x4E
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x224f88: 0xa16f0002  sb          $t7, 0x2($t3)
    ctx->pc = 0x224f88u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 15));
    // 0x224f8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x224f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224f90: 0x11af000f  beq         $t5, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x224F90u;
    {
        const bool branch_taken_0x224f90 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x224F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F90u;
            // 0x224f94: 0x29ae0002  slti        $t6, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f90) {
            ctx->pc = 0x224FD0u;
            goto label_224fd0;
        }
    }
    ctx->pc = 0x224F98u;
    // 0x224f98: 0x51c00007  beql        $t6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x224F98u;
    {
        const bool branch_taken_0x224f98 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x224f98) {
            ctx->pc = 0x224F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224F98u;
            // 0x224f9c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224FB8u;
            goto label_224fb8;
        }
    }
    ctx->pc = 0x224FA0u;
    // 0x224fa0: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x224FA0u;
    {
        const bool branch_taken_0x224fa0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FA0u;
            // 0x224fa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fa0) {
            ctx->pc = 0x224FB0u;
            goto label_224fb0;
        }
    }
    ctx->pc = 0x224FA8u;
    // 0x224fa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x224fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_224fac:
    // 0x224fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224fb0:
    // 0x224fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x224FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FB0u;
            // 0x224fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224FB8u;
label_224fb8:
    // 0x224fb8: 0x55affffc  bnel        $t5, $t7, . + 4 + (-0x4 << 2)
    ctx->pc = 0x224FB8u;
    {
        const bool branch_taken_0x224fb8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        if (branch_taken_0x224fb8) {
            ctx->pc = 0x224FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224FB8u;
            // 0x224fbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224FACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224fac;
        }
    }
    ctx->pc = 0x224FC0u;
    // 0x224fc0: 0xc089452  jal         func_225148
    ctx->pc = 0x224FC0u;
    SET_GPR_U32(ctx, 31, 0x224FC8u);
    ctx->pc = 0x224FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224FC0u;
            // 0x224fc4: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225148u;
    if (runtime->hasFunction(0x225148u)) {
        auto targetFn = runtime->lookupFunction(0x225148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FC8u; }
        if (ctx->pc != 0x224FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225148_0x225148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FC8u; }
        if (ctx->pc != 0x224FC8u) { return; }
    }
    ctx->pc = 0x224FC8u;
label_224fc8:
    // 0x224fc8: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x224FC8u;
    {
        const bool branch_taken_0x224fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FC8u;
            // 0x224fcc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fc8) {
            ctx->pc = 0x224FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224fb0;
        }
    }
    ctx->pc = 0x224FD0u;
label_224fd0:
    // 0x224fd0: 0xc08943c  jal         func_2250F0
    ctx->pc = 0x224FD0u;
    SET_GPR_U32(ctx, 31, 0x224FD8u);
    ctx->pc = 0x2250F0u;
    if (runtime->hasFunction(0x2250F0u)) {
        auto targetFn = runtime->lookupFunction(0x2250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FD8u; }
        if (ctx->pc != 0x224FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002250F0_0x2250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224FD8u; }
        if (ctx->pc != 0x224FD8u) { return; }
    }
    ctx->pc = 0x224FD8u;
label_224fd8:
    // 0x224fd8: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x224FD8u;
    {
        const bool branch_taken_0x224fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224FD8u;
            // 0x224fdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224fd8) {
            ctx->pc = 0x224FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224fb0;
        }
    }
    ctx->pc = 0x224FE0u;
    ctx->pc = 0x224fe0u;
}
