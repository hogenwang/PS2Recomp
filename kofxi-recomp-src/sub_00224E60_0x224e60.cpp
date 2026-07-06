#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224E60
// Address: 0x224e60 - 0x224f20
void sub_00224E60_0x224e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224E60_0x224e60");
#endif

    switch (ctx->pc) {
        case 0x224eecu: goto label_224eec;
        case 0x224ef0u: goto label_224ef0;
        case 0x224ef8u: goto label_224ef8;
        case 0x224f08u: goto label_224f08;
        case 0x224f18u: goto label_224f18;
        default: break;
    }

    ctx->pc = 0x224e60u;

    // 0x224e60: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x224e60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x224e64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224e68: 0x25afa6f0  addiu       $t7, $t5, -0x5910
    ctx->pc = 0x224e68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294944496));
    // 0x224e6c: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x224e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x224e70: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x224e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x224e74: 0xb1eb0007  sdl         $t3, 0x7($t7)
    ctx->pc = 0x224e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224e78: 0xb5eb0000  sdr         $t3, 0x0($t7)
    ctx->pc = 0x224e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224e7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x224e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224e84: 0x240f0046  addiu       $t7, $zero, 0x46
    ctx->pc = 0x224e84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x224e88: 0x25aba6f0  addiu       $t3, $t5, -0x5910
    ctx->pc = 0x224e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4294944496));
    // 0x224e8c: 0xa1afa6f0  sb          $t7, -0x5910($t5)
    ctx->pc = 0x224e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294944496), (uint8_t)GPR_U32(ctx, 15));
    // 0x224e90: 0x240e0033  addiu       $t6, $zero, 0x33
    ctx->pc = 0x224e90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x224e94: 0xa16e0007  sb          $t6, 0x7($t3)
    ctx->pc = 0x224e94u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 14));
    // 0x224e98: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x224e98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x224e9c: 0x240f0049  addiu       $t7, $zero, 0x49
    ctx->pc = 0x224e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x224ea0: 0xa16c0006  sb          $t4, 0x6($t3)
    ctx->pc = 0x224ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 6), (uint8_t)GPR_U32(ctx, 12));
    // 0x224ea4: 0xa16f0001  sb          $t7, 0x1($t3)
    ctx->pc = 0x224ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 15));
    // 0x224ea8: 0x240e0045  addiu       $t6, $zero, 0x45
    ctx->pc = 0x224ea8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x224eac: 0xa16e0003  sb          $t6, 0x3($t3)
    ctx->pc = 0x224eacu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 14));
    // 0x224eb0: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x224eb0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224eb4: 0x240f0032  addiu       $t7, $zero, 0x32
    ctx->pc = 0x224eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x224eb8: 0xa16c0005  sb          $t4, 0x5($t3)
    ctx->pc = 0x224eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 5), (uint8_t)GPR_U32(ctx, 12));
    // 0x224ebc: 0xa16f0004  sb          $t7, 0x4($t3)
    ctx->pc = 0x224ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4), (uint8_t)GPR_U32(ctx, 15));
    // 0x224ec0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x224ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ec4: 0x240f004e  addiu       $t7, $zero, 0x4E
    ctx->pc = 0x224ec4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x224ec8: 0xa16f0002  sb          $t7, 0x2($t3)
    ctx->pc = 0x224ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 15));
    // 0x224ecc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x224eccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224ed0: 0x11af000f  beq         $t5, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x224ED0u;
    {
        const bool branch_taken_0x224ed0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x224ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224ED0u;
            // 0x224ed4: 0x29ae0002  slti        $t6, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ed0) {
            ctx->pc = 0x224F10u;
            goto label_224f10;
        }
    }
    ctx->pc = 0x224ED8u;
    // 0x224ed8: 0x51c00007  beql        $t6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x224ED8u;
    {
        const bool branch_taken_0x224ed8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ed8) {
            ctx->pc = 0x224EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224ED8u;
            // 0x224edc: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224EF8u;
            goto label_224ef8;
        }
    }
    ctx->pc = 0x224EE0u;
    // 0x224ee0: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x224EE0u;
    {
        const bool branch_taken_0x224ee0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x224EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224EE0u;
            // 0x224ee4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ee0) {
            ctx->pc = 0x224EF0u;
            goto label_224ef0;
        }
    }
    ctx->pc = 0x224EE8u;
    // 0x224ee8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x224ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_224eec:
    // 0x224eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224ef0:
    // 0x224ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x224EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224EF0u;
            // 0x224ef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224EF8u;
label_224ef8:
    // 0x224ef8: 0x55affffc  bnel        $t5, $t7, . + 4 + (-0x4 << 2)
    ctx->pc = 0x224EF8u;
    {
        const bool branch_taken_0x224ef8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        if (branch_taken_0x224ef8) {
            ctx->pc = 0x224EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224EF8u;
            // 0x224efc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224EECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224eec;
        }
    }
    ctx->pc = 0x224F00u;
    // 0x224f00: 0xc08940e  jal         func_225038
    ctx->pc = 0x224F00u;
    SET_GPR_U32(ctx, 31, 0x224F08u);
    ctx->pc = 0x224F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224F00u;
            // 0x224f04: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225038u;
    if (runtime->hasFunction(0x225038u)) {
        auto targetFn = runtime->lookupFunction(0x225038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F08u; }
        if (ctx->pc != 0x224F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225038_0x225038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F08u; }
        if (ctx->pc != 0x224F08u) { return; }
    }
    ctx->pc = 0x224F08u;
label_224f08:
    // 0x224f08: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x224F08u;
    {
        const bool branch_taken_0x224f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F08u;
            // 0x224f0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f08) {
            ctx->pc = 0x224EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224ef0;
        }
    }
    ctx->pc = 0x224F10u;
label_224f10:
    // 0x224f10: 0xc0893f8  jal         func_224FE0
    ctx->pc = 0x224F10u;
    SET_GPR_U32(ctx, 31, 0x224F18u);
    ctx->pc = 0x224FE0u;
    if (runtime->hasFunction(0x224FE0u)) {
        auto targetFn = runtime->lookupFunction(0x224FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F18u; }
        if (ctx->pc != 0x224F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224FE0_0x224fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224F18u; }
        if (ctx->pc != 0x224F18u) { return; }
    }
    ctx->pc = 0x224F18u;
label_224f18:
    // 0x224f18: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x224F18u;
    {
        const bool branch_taken_0x224f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224F18u;
            // 0x224f1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224f18) {
            ctx->pc = 0x224EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_224ef0;
        }
    }
    ctx->pc = 0x224F20u;
    ctx->pc = 0x224f20u;
}
