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

// Function: sub_001D8838
// Address: 0x1d8838 - 0x1d88e8
void sub_001D8838_0x1d8838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8838_0x1d8838");
#endif

    switch (ctx->pc) {
        case 0x1d8890u: goto label_1d8890;
        default: break;
    }

    ctx->pc = 0x1d8838u;

    // 0x1d8838: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1d8838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1d883c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D883Cu;
        // 0x1d8840: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8844u;
    // 0x1d8844: 0x0  nop
    ctx->pc = 0x1d8844u;
    // NOP
    // 0x1d8848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d884c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8858: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d8858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d885c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D885Cu;
    {
        const bool branch_taken_0x1d885c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D885Cu;
        // 0x1d8860: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d885c) {
            ctx->pc = 0x1D8888u;
            goto label_1d8888;
        }
    }
    ctx->pc = 0x1D8864u;
    // 0x1d8864: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d8864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8868: 0x8c43e6a8  lw          $v1, -0x1958($v0)
    ctx->pc = 0x1d8868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960808)));
    // 0x1d886c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1d886cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d8870: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1d8870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d8874: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d8874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d8878: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1d8878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d887c: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1d887cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d8880: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8880u;
    {
        const bool branch_taken_0x1d8880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8880u;
        // 0x1d8884: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8880) {
            ctx->pc = 0x1D88D0u;
            goto label_1d88d0;
        }
    }
    ctx->pc = 0x1D8888u;
label_1d8888:
    // 0x1d8888: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D8888u;
    SET_GPR_U32(ctx, 31, 0x1D8890u);
    ctx->pc = 0x1D88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E8u, 0x1D8888u, 0x1D8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8890u;
label_1d8890:
    // 0x1d8890: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1d8890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1d8894: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8894u;
    {
        const bool branch_taken_0x1d8894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8894u;
        // 0x1d8898: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8894) {
            ctx->pc = 0x1D88B8u;
            goto label_1d88b8;
        }
    }
    ctx->pc = 0x1D889Cu;
    // 0x1d889c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d889cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d88a0: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x1d88a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    // 0x1d88a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d88a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d88a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d88a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d88ac: 0x80761c6  j           func_1D8718
    ctx->pc = 0x1D88ACu;
    ctx->pc = 0x1D88B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88ACu;
    // 0x1d88b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8718u, 0x1D88ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88B4u;
    // 0x1d88b4: 0x0  nop
    ctx->pc = 0x1d88b4u;
    // NOP
label_1d88b8:
    // 0x1d88b8: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x1d88b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d88bc: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x1d88bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d88c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d88c4: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1d88c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d88c8: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1d88c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d88cc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1d88ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1d88d0:
    // 0x1d88d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d88d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d88d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d88d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d88d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d88dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d88dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d88e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D88E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88E0u;
        // 0x1d88e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D88E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D88E8u;
}
