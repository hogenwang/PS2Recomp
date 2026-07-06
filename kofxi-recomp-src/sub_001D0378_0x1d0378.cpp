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

// Function: sub_001D0378
// Address: 0x1d0378 - 0x1d04f0
void sub_001D0378_0x1d0378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0378_0x1d0378");
#endif

    switch (ctx->pc) {
        case 0x1d03d4u: goto label_1d03d4;
        case 0x1d043cu: goto label_1d043c;
        case 0x1d04a0u: goto label_1d04a0;
        case 0x1d04c8u: goto label_1d04c8;
        case 0x1d04d8u: goto label_1d04d8;
        default: break;
    }

    ctx->pc = 0x1d0378u;

    // 0x1d0378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d037c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1d037cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1d0380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0384: 0x2484e690  addiu       $a0, $a0, -0x1970
    ctx->pc = 0x1d0384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
    // 0x1d0388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d038c: 0x80740e6  j           func_1D0398
    ctx->pc = 0x1D038Cu;
    ctx->pc = 0x1D0390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D038Cu;
    // 0x1d0390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0398u;
    goto label_1d0398;
    ctx->pc = 0x1D0394u;
    // 0x1d0394: 0x0  nop
    ctx->pc = 0x1d0394u;
    // NOP
label_1d0398:
    // 0x1d0398: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1d0398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1d039c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d039cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d03a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d03a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d03a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d03a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D03A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03A8u;
        // 0x1d03ac: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D03A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D03B0u;
    // 0x1d03b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d03b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d03b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d03b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d03b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d03bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d03c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d03c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d03c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d03cc: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1D03CCu;
    SET_GPR_U32(ctx, 31, 0x1D03D4u);
    ctx->pc = 0x1D03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03CCu;
    // 0x1d03d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D03CCu, 0x1D03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03D4u;
label_1d03d4:
    // 0x1d03d4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d03d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d03d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1d03d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1d03dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d03dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d03e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D03E0u;
    {
        const bool branch_taken_0x1d03e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03E0u;
        // 0x1d03e4: 0x34a50203  ori         $a1, $a1, 0x203 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03e0) {
            ctx->pc = 0x1D0400u;
            goto label_1d0400;
        }
    }
    ctx->pc = 0x1D03E8u;
    // 0x1d03e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d03e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d03ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d03ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d03f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d03f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d03f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d03f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d03f8: 0x8074128  j           func_1D04A0
    ctx->pc = 0x1D03F8u;
    ctx->pc = 0x1D03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D03F8u;
    // 0x1d03fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    goto label_1d04a0;
    ctx->pc = 0x1D0400u;
label_1d0400:
    // 0x1d0400: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1d0400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1d0404: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1d0404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1d0408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d040c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d040cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0414: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0418: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0418u;
        // 0x1d041c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0420u;
    // 0x1d0420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d042c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0434: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1D0434u;
    SET_GPR_U32(ctx, 31, 0x1D043Cu);
    ctx->pc = 0x1D0438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0434u;
    // 0x1d0438: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D0434u, 0x1D043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D043Cu;
label_1d043c:
    // 0x1d043c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d043cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d0440: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0440u;
    {
        const bool branch_taken_0x1d0440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0440u;
        // 0x1d0444: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0440) {
            ctx->pc = 0x1D0460u;
            goto label_1d0460;
        }
    }
    ctx->pc = 0x1D0448u;
    // 0x1d0448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d044c: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x1d044cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x1d0450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0458: 0x8074128  j           func_1D04A0
    ctx->pc = 0x1D0458u;
    ctx->pc = 0x1D045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0458u;
    // 0x1d045c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04A0u;
    goto label_1d04a0;
    ctx->pc = 0x1D0460u;
label_1d0460:
    // 0x1d0460: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x1d0460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d0464: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x1d0464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d0468: 0x6a030013  ldl         $v1, 0x13($s0)
    ctx->pc = 0x1d0468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1d046c: 0x6e03000c  ldr         $v1, 0xC($s0)
    ctx->pc = 0x1d046cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1d0470: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d0470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d0474: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x1d0474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d0478: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x1d0478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d047c: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x1d047cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d0480: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x1d0480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d0484: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x1d0484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x1d0488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d048c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d048cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0490: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0494: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0494u;
        // 0x1d0498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D049Cu;
    // 0x1d049c: 0x0  nop
    ctx->pc = 0x1d049cu;
    // NOP
label_1d04a0:
    // 0x1d04a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d04a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d04a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d04a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d04a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d04ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d04acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d04b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D04B4u;
    {
        const bool branch_taken_0x1d04b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04B4u;
        // 0x1d04b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04b4) {
            ctx->pc = 0x1D04D0u;
            goto label_1d04d0;
        }
    }
    ctx->pc = 0x1D04BCu;
    // 0x1d04bc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1d04bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1d04c0: 0xc07413c  jal         func_1D04F0
    ctx->pc = 0x1D04C0u;
    SET_GPR_U32(ctx, 31, 0x1D04C8u);
    ctx->pc = 0x1D04C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04C0u;
    // 0x1d04c4: 0x2484e690  addiu       $a0, $a0, -0x1970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04F0u, 0x1D04C0u, 0x1D04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04C8u;
label_1d04c8:
    // 0x1d04c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D04C8u;
    {
        const bool branch_taken_0x1d04c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C8u;
        // 0x1d04cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04c8) {
            ctx->pc = 0x1D04DCu;
            goto label_1d04dc;
        }
    }
    ctx->pc = 0x1D04D0u;
label_1d04d0:
    // 0x1d04d0: 0xc07413c  jal         func_1D04F0
    ctx->pc = 0x1D04D0u;
    SET_GPR_U32(ctx, 31, 0x1D04D8u);
    ctx->pc = 0x1D04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04F0u, 0x1D04D0u, 0x1D04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04D8u;
label_1d04d8:
    // 0x1d04d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d04d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d04dc:
    // 0x1d04dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d04dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d04e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d04e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d04e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D04E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04E4u;
        // 0x1d04e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D04E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D04ECu;
    // 0x1d04ec: 0x0  nop
    ctx->pc = 0x1d04ecu;
    // NOP
}
