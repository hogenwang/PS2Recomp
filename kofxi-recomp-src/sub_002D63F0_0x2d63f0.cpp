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

// Function: sub_002D63F0
// Address: 0x2d63f0 - 0x2d6500
void sub_002D63F0_0x2d63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D63F0_0x2d63f0");
#endif

    switch (ctx->pc) {
        case 0x2d6438u: goto label_2d6438;
        case 0x2d6478u: goto label_2d6478;
        case 0x2d64b8u: goto label_2d64b8;
        default: break;
    }

    ctx->pc = 0x2d63f0u;

    // 0x2d63f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d63f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d63f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d63f8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2d63f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d63fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d6400: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d6400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6404: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d6404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d6408: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2d6408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d640c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d6410: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d6410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6414: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d6414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d6418: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d6418u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d641c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d6420: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d6420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6424: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d6428: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D6428u;
    {
        const bool branch_taken_0x2d6428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6428u;
        // 0x2d642c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6428) {
            ctx->pc = 0x2D64D0u;
            goto label_2d64d0;
        }
    }
    ctx->pc = 0x2D6430u;
    // 0x2d6430: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d6430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6434: 0x0  nop
    ctx->pc = 0x2d6434u;
    // NOP
label_2d6438:
    // 0x2d6438: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d643c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2d643cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d6440: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x2d6440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d6444: 0x2c22821  addu        $a1, $s6, $v0
    ctx->pc = 0x2d6444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2d6448: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2d6448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d644c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2d644cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d6450: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2d6450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6454: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2d6454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d6458: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2d6458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d645c: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D645Cu;
    {
        const bool branch_taken_0x2d645c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D645Cu;
        // 0x2d6460: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d645c) {
            ctx->pc = 0x2D64A8u;
            goto label_2d64a8;
        }
    }
    ctx->pc = 0x2D6464u;
    // 0x2d6464: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d6464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6468: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2d6468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d646c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D646Cu;
    {
        const bool branch_taken_0x2d646c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D646Cu;
        // 0x2d6470: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d646c) {
            ctx->pc = 0x2D64ACu;
            goto label_2d64ac;
        }
    }
    ctx->pc = 0x2D6474u;
    // 0x2d6474: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x2d6474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2d6478:
    // 0x2d6478: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x2d6478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d647c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2d647cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6480: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2d6480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x2d6484: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2d6484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2d6488: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6488u;
    {
        const bool branch_taken_0x2d6488 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6488u;
        // 0x2d648c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6488) {
            ctx->pc = 0x2D64ACu;
            goto label_2d64ac;
        }
    }
    ctx->pc = 0x2D6490u;
    // 0x2d6490: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2d6490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d6494: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D6494u;
    {
        const bool branch_taken_0x2d6494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6494) {
            ctx->pc = 0x2D6498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6494u;
            // 0x2d6498: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6478;
        }
    }
    ctx->pc = 0x2D649Cu;
    // 0x2d649c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D649Cu;
    {
        const bool branch_taken_0x2d649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D649Cu;
        // 0x2d64a0: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d649c) {
            ctx->pc = 0x2D64B0u;
            goto label_2d64b0;
        }
    }
    ctx->pc = 0x2D64A4u;
    // 0x2d64a4: 0x0  nop
    ctx->pc = 0x2d64a4u;
    // NOP
label_2d64a8:
    // 0x2d64a8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2d64a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d64ac:
    // 0x2d64ac: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x2d64acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
label_2d64b0:
    // 0x2d64b0: 0xc0b3e18  jal         func_2CF860
    ctx->pc = 0x2D64B0u;
    SET_GPR_U32(ctx, 31, 0x2D64B8u);
    ctx->pc = 0x2D64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D64B0u;
    // 0x2d64b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF860u, 0x2D64B0u, 0x2D64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64B8u;
label_2d64b8:
    // 0x2d64b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D64B8u;
    {
        const bool branch_taken_0x2d64b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d64b8) {
            ctx->pc = 0x2D64BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D64B8u;
            // 0x2d64bc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D64D8u;
            goto label_2d64d8;
        }
    }
    ctx->pc = 0x2D64C0u;
    // 0x2d64c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d64c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d64c4: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x2d64c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d64c8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2D64C8u;
    {
        const bool branch_taken_0x2d64c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64C8u;
        // 0x2d64cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d64c8) {
            ctx->pc = 0x2D6438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6438;
        }
    }
    ctx->pc = 0x2D64D0u;
label_2d64d0:
    // 0x2d64d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d64d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d64d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d64d8:
    // 0x2d64d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d64d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d64dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d64dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d64e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d64e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d64e4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d64e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d64e8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d64e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d64ec: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d64ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d64f0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d64f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d64f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D64F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64F4u;
        // 0x2d64f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D64F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D64FCu;
    // 0x2d64fc: 0x0  nop
    ctx->pc = 0x2d64fcu;
    // NOP
    if (ctx->pc == 0x2d64fcu) { ctx->pc = 0x2d6500u; }
}
