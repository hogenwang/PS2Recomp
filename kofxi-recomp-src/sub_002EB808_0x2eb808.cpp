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

// Function: sub_002EB808
// Address: 0x2eb808 - 0x2eb928
void sub_002EB808_0x2eb808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB808_0x2eb808");
#endif

    switch (ctx->pc) {
        case 0x2eb820u: goto label_2eb820;
        case 0x2eb87cu: goto label_2eb87c;
        case 0x2eb894u: goto label_2eb894;
        case 0x2eb898u: goto label_2eb898;
        case 0x2eb8f0u: goto label_2eb8f0;
        case 0x2eb904u: goto label_2eb904;
        case 0x2eb908u: goto label_2eb908;
        default: break;
    }

    ctx->pc = 0x2eb808u;

    // 0x2eb808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb80c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eb80cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eb810: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2eb810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2eb814: 0x248e1340  addiu       $t6, $a0, 0x1340
    ctx->pc = 0x2eb814u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 4928));
    // 0x2eb818: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2eb818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2eb81c: 0x8defeca0  lw          $t7, -0x1360($t7)
    ctx->pc = 0x2eb81cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962336)));
label_2eb820:
    // 0x2eb820: 0x688a0007  ldl         $t2, 0x7($a0)
    ctx->pc = 0x2eb820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2eb824: 0x6c8a0000  ldr         $t2, 0x0($a0)
    ctx->pc = 0x2eb824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2eb828: 0x688b000f  ldl         $t3, 0xF($a0)
    ctx->pc = 0x2eb828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2eb82c: 0x6c8b0008  ldr         $t3, 0x8($a0)
    ctx->pc = 0x2eb82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2eb830: 0xb1ea0007  sdl         $t2, 0x7($t7)
    ctx->pc = 0x2eb830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb834: 0xb5ea0000  sdr         $t2, 0x0($t7)
    ctx->pc = 0x2eb834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb838: 0xb1eb000f  sdl         $t3, 0xF($t7)
    ctx->pc = 0x2eb838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb83c: 0xb5eb0008  sdr         $t3, 0x8($t7)
    ctx->pc = 0x2eb83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2eb840: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2eb840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2eb844: 0x148efff6  bne         $a0, $t6, . + 4 + (-0xA << 2)
    ctx->pc = 0x2EB844u;
    {
        const bool branch_taken_0x2eb844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        ctx->pc = 0x2EB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB844u;
        // 0x2eb848: 0x25ef0010  addiu       $t7, $t7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb844) {
            ctx->pc = 0x2EB820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb820;
        }
    }
    ctx->pc = 0x2EB84Cu;
    // 0x2eb84c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2eb84cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2eb850: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eb850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2eb854: 0x8e07eca0  lw          $a3, -0x1360($s0)
    ctx->pc = 0x2eb854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962336)));
    // 0x2eb858: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2eb858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2eb85c: 0x24840648  addiu       $a0, $a0, 0x648
    ctx->pc = 0x2eb85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1608));
    // 0x2eb860: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2eb860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eb864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb868: 0x24081340  addiu       $t0, $zero, 0x1340
    ctx->pc = 0x2eb868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x2eb86c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2eb86cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb870: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2eb870u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eb874: 0xc04434c  jal         func_110D30
    ctx->pc = 0x2EB874u;
    SET_GPR_U32(ctx, 31, 0x2EB87Cu);
    ctx->pc = 0x2EB878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB874u;
    // 0x2eb878: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x2EB874u, 0x2EB87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB87Cu;
label_2eb87c:
    // 0x2eb87c: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EB87Cu;
    {
        const bool branch_taken_0x2eb87c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EB880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB87Cu;
        // 0x2eb880: 0x8e0feca0  lw          $t7, -0x1360($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb87c) {
            ctx->pc = 0x2EB8A8u;
            goto label_2eb8a8;
        }
    }
    ctx->pc = 0x2EB884u;
    // 0x2eb884: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb888: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eb888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb88c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2EB88Cu;
    SET_GPR_U32(ctx, 31, 0x2EB894u);
    ctx->pc = 0x2EB890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB88Cu;
    // 0x2eb890: 0x248403d8  addiu       $a0, $a0, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2EB88Cu, 0x2EB894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB894u;
label_2eb894:
    // 0x2eb894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eb894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2eb898:
    // 0x2eb898: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eb898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb89c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2eb89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8A0u;
        // 0x2eb8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB8A8u;
label_2eb8a8:
    // 0x2eb8a8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EB8A8u;
    {
        const bool branch_taken_0x2eb8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8A8u;
        // 0x2eb8ac: 0x8de20000  lw          $v0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8a8) {
            ctx->pc = 0x2EB898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb898;
        }
    }
    ctx->pc = 0x2EB8B0u;
    // 0x2eb8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eb8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eb8b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2eb8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eb8b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2eb8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2eb8bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eb8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2eb8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2eb8c4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2eb8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eb8c8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2eb8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2eb8cc: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2eb8ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eb8d0: 0x8e07eca0  lw          $a3, -0x1360($s0)
    ctx->pc = 0x2eb8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962336)));
    // 0x2eb8d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2eb8d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8d8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x2eb8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x2eb8dc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2eb8dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb8e0: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2eb8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2eb8e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2eb8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2eb8e8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x2EB8E8u;
    SET_GPR_U32(ctx, 31, 0x2EB8F0u);
    ctx->pc = 0x2EB8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8E8u;
    // 0x2eb8ec: 0x24840648  addiu       $a0, $a0, 0x648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x2EB8E8u, 0x2EB8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB8F0u;
label_2eb8f0:
    // 0x2eb8f0: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EB8F0u;
    {
        const bool branch_taken_0x2eb8f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB8F0u;
        // 0x2eb8f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb8f0) {
            ctx->pc = 0x2EB918u;
            goto label_2eb918;
        }
    }
    ctx->pc = 0x2EB8F8u;
    // 0x2eb8f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eb8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2eb8fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2EB8FCu;
    SET_GPR_U32(ctx, 31, 0x2EB904u);
    ctx->pc = 0x2EB900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB8FCu;
    // 0x2eb900: 0x24840418  addiu       $a0, $a0, 0x418 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2EB8FCu, 0x2EB904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB904u;
label_2eb904:
    // 0x2eb904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eb904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2eb908:
    // 0x2eb908: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eb908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb90c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2eb90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eb910: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB910u;
        // 0x2eb914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB918u;
label_2eb918:
    // 0x2eb918: 0x8e0feca0  lw          $t7, -0x1360($s0)
    ctx->pc = 0x2eb918u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294962336)));
    // 0x2eb91c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EB91Cu;
    {
        const bool branch_taken_0x2eb91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB91Cu;
        // 0x2eb920: 0x8de20000  lw          $v0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb91c) {
            ctx->pc = 0x2EB908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb908;
        }
    }
    ctx->pc = 0x2EB924u;
    // 0x2eb924: 0x0  nop
    ctx->pc = 0x2eb924u;
    // NOP
}
