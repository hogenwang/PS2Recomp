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

// Function: sub_0022B3A8
// Address: 0x22b3a8 - 0x22b5e8
void sub_0022B3A8_0x22b3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B3A8_0x22b3a8");
#endif

    switch (ctx->pc) {
        case 0x22b428u: goto label_22b428;
        case 0x22b458u: goto label_22b458;
        case 0x22b464u: goto label_22b464;
        case 0x22b470u: goto label_22b470;
        case 0x22b484u: goto label_22b484;
        case 0x22b500u: goto label_22b500;
        case 0x22b54cu: goto label_22b54c;
        case 0x22b584u: goto label_22b584;
        case 0x22b5a8u: goto label_22b5a8;
        case 0x22b5b0u: goto label_22b5b0;
        default: break;
    }

    ctx->pc = 0x22b3a8u;

    // 0x22b3a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22b3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22b3ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22b3b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22b3b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22b3b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22b3b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b3bc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22b3c0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22b3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22b3c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22b3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22b3c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b3cc: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22b3ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22b3d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22b3d4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22B3D4u;
    {
        const bool branch_taken_0x22b3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3D4u;
        // 0x22b3d8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3d4) {
            ctx->pc = 0x22B444u;
            goto label_22b444;
        }
    }
    ctx->pc = 0x22B3DCu;
    // 0x22b3dc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x22b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22b3e0: 0x26430100  addiu       $v1, $s2, 0x100
    ctx->pc = 0x22b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x22b3e4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x22b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22b3e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x22b3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22b3ec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22B3ECu;
    {
        const bool branch_taken_0x22b3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3ECu;
        // 0x22b3f0: 0x2e8200e1  sltiu       $v0, $s4, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3ec) {
            ctx->pc = 0x22B448u;
            goto label_22b448;
        }
    }
    ctx->pc = 0x22B3F4u;
    // 0x22b3f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22b3f8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22B3F8u;
    {
        const bool branch_taken_0x22b3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b3f8) {
            ctx->pc = 0x22B448u;
            goto label_22b448;
        }
    }
    ctx->pc = 0x22B400u;
    // 0x22b400: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22b404: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x22b404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22b408: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B408u;
    {
        const bool branch_taken_0x22b408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B408u;
        // 0x22b40c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b408) {
            ctx->pc = 0x22B418u;
            goto label_22b418;
        }
    }
    ctx->pc = 0x22B410u;
    // 0x22b410: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x22B410u;
    {
        const bool branch_taken_0x22b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B410u;
        // 0x22b414: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b410) {
            ctx->pc = 0x22B5C4u;
            goto label_22b5c4;
        }
    }
    ctx->pc = 0x22B418u;
label_22b418:
    // 0x22b418: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22b418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22b41c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22b41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b420: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x22B420u;
    {
        const bool branch_taken_0x22b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B420u;
        // 0x22b424: 0x283a023  subu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b420) {
            ctx->pc = 0x22B4E8u;
            goto label_22b4e8;
        }
    }
    ctx->pc = 0x22B428u;
label_22b428:
    // 0x22b428: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x22b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x22b42c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22b430: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x22b430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x22b434: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22b434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22b438: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22b438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22b43c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22B43Cu;
    {
        const bool branch_taken_0x22b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B43Cu;
        // 0x22b440: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b43c) {
            ctx->pc = 0x22B488u;
            goto label_22b488;
        }
    }
    ctx->pc = 0x22B444u;
label_22b444:
    // 0x22b444: 0x2e8200e1  sltiu       $v0, $s4, 0xE1
    ctx->pc = 0x22b444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
label_22b448:
    // 0x22b448: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x22B448u;
    {
        const bool branch_taken_0x22b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b448) {
            ctx->pc = 0x22B5A8u;
            goto label_22b5a8;
        }
    }
    ctx->pc = 0x22B450u;
    // 0x22b450: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22B450u;
    SET_GPR_U32(ctx, 31, 0x22B458u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22B450u, 0x22B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B458u;
label_22b458:
    // 0x22b458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b45c: 0xc098552  jal         func_261548
    ctx->pc = 0x22B45Cu;
    SET_GPR_U32(ctx, 31, 0x22B464u);
    ctx->pc = 0x22B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B45Cu;
    // 0x22b460: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22B45Cu, 0x22B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B464u;
label_22b464:
    // 0x22b464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b468: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22B468u;
    SET_GPR_U32(ctx, 31, 0x22B470u);
    ctx->pc = 0x22B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B468u;
    // 0x22b46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22B468u, 0x22B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B470u;
label_22b470:
    // 0x22b470: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x22B470u;
    {
        const bool branch_taken_0x22b470 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b470) {
            ctx->pc = 0x22B474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B470u;
            // 0x22b474: 0x96430010  lhu         $v1, 0x10($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b428;
        }
    }
    ctx->pc = 0x22B478u;
    // 0x22b478: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x22b478u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22b47c: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x22B47Cu;
    SET_GPR_U32(ctx, 31, 0x22B484u);
    ctx->pc = 0x22B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B47Cu;
    // 0x22b480: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22B47Cu, 0x22B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B484u;
label_22b484:
    // 0x22b484: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b488:
    // 0x22b488: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
    ctx->pc = 0x22B488u;
    {
        const bool branch_taken_0x22b488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b488) {
            ctx->pc = 0x22B5A8u;
            goto label_22b5a8;
        }
    }
    ctx->pc = 0x22B490u;
    // 0x22b490: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x22b490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x22b494: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22b494u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22b498: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22b498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22b49c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x22B49Cu;
    {
        const bool branch_taken_0x22b49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b49c) {
            ctx->pc = 0x22B4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B49Cu;
            // 0x22b4a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B4E8u;
            goto label_22b4e8;
        }
    }
    ctx->pc = 0x22B4A4u;
    // 0x22b4a4: 0x6a42001b  ldl         $v0, 0x1B($s2)
    ctx->pc = 0x22b4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22b4a8: 0x6e420014  ldr         $v0, 0x14($s2)
    ctx->pc = 0x22b4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22b4ac: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x22b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x22b4b0: 0xb222001b  sdl         $v0, 0x1B($s1)
    ctx->pc = 0x22b4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b4b4: 0xb6220014  sdr         $v0, 0x14($s1)
    ctx->pc = 0x22b4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22b4b8: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x22b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x22b4bc: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x22b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x22b4c0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x22b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22b4c4: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22b4c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22b4c8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22b4cc: 0x30637ff6  andi        $v1, $v1, 0x7FF6
    ctx->pc = 0x22b4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32758);
    // 0x22b4d0: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x22b4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x22b4d4: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22b4d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22b4d8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x22b4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x22b4dc: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x22b4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x22b4e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22b4e4: 0x0  nop
    ctx->pc = 0x22b4e4u;
    // NOP
label_22b4e8:
    // 0x22b4e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22b4ec: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x22b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22b4f0: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x22b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x22b4f4: 0x2229823  subu        $s3, $s1, $v0
    ctx->pc = 0x22b4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22b4f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22B4F8u;
    {
        const bool branch_taken_0x22b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4F8u;
        // 0x22b4fc: 0x3c15003a  lui         $s5, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4f8) {
            ctx->pc = 0x22B510u;
            goto label_22b510;
        }
    }
    ctx->pc = 0x22B500u;
label_22b500:
    // 0x22b500: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x22B500u;
    {
        const bool branch_taken_0x22b500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b500) {
            ctx->pc = 0x22B590u;
            goto label_22b590;
        }
    }
    ctx->pc = 0x22B508u;
    // 0x22b508: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x22b508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22b50c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_22b510:
    // 0x22b510: 0x8ea7f9ec  lw          $a3, -0x614($s5)
    ctx->pc = 0x22b510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965740)));
    // 0x22b514: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22b514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22b518: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22b518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b51c: 0x8e48000c  lw          $t0, 0xC($s2)
    ctx->pc = 0x22b51cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22b520: 0xf4182b  sltu        $v1, $a3, $s4
    ctx->pc = 0x22b520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x22b524: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22b528: 0xe3300a  movz        $a2, $a3, $v1
    ctx->pc = 0x22b528u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x22b52c: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x22b52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x22b530: 0x262300a  movz        $a2, $s3, $v0
    ctx->pc = 0x22b530u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
    // 0x22b534: 0xc8182b  sltu        $v1, $a2, $t0
    ctx->pc = 0x22b534u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x22b538: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22b538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b53c: 0x103800a  movz        $s0, $t0, $v1
    ctx->pc = 0x22b53cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    // 0x22b540: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22b540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b544: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22B544u;
    SET_GPR_U32(ctx, 31, 0x22B54Cu);
    ctx->pc = 0x22B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B544u;
    // 0x22b548: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22B544u, 0x22B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B54Cu;
label_22b54c:
    // 0x22b54c: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x22b54cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22b550: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x22b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22b554: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22b558: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x22b558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x22b55c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22b560: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x22b560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22b564: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B564u;
    {
        const bool branch_taken_0x22b564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B564u;
        // 0x22b568: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b564) {
            ctx->pc = 0x22B57Cu;
            goto label_22b57c;
        }
    }
    ctx->pc = 0x22B56Cu;
    // 0x22b56c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22b570: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22b574: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22B574u;
    {
        const bool branch_taken_0x22b574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B574u;
        // 0x22b578: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b574) {
            ctx->pc = 0x22B588u;
            goto label_22b588;
        }
    }
    ctx->pc = 0x22B57Cu;
label_22b57c:
    // 0x22b57c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x22B57Cu;
    SET_GPR_U32(ctx, 31, 0x22B584u);
    ctx->pc = 0x22B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B57Cu;
    // 0x22b580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x22B57Cu, 0x22B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B584u;
label_22b584:
    // 0x22b584: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22b584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b588:
    // 0x22b588: 0x1e80ffdd  bgtz        $s4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x22B588u;
    {
        const bool branch_taken_0x22b588 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x22b588) {
            ctx->pc = 0x22B500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b500;
        }
    }
    ctx->pc = 0x22B590u;
label_22b590:
    // 0x22b590: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B590u;
    {
        const bool branch_taken_0x22b590 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x22B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B590u;
        // 0x22b594: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b590) {
            ctx->pc = 0x22B5A0u;
            goto label_22b5a0;
        }
    }
    ctx->pc = 0x22B598u;
    // 0x22b598: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22B598u;
    {
        const bool branch_taken_0x22b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B598u;
        // 0x22b59c: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b598) {
            ctx->pc = 0x22B5C4u;
            goto label_22b5c4;
        }
    }
    ctx->pc = 0x22B5A0u;
label_22b5a0:
    // 0x22b5a0: 0xc08a996  jal         func_22A658
    ctx->pc = 0x22B5A0u;
    SET_GPR_U32(ctx, 31, 0x22B5A8u);
    ctx->pc = 0x22B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5A0u;
    // 0x22b5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x22B5A0u, 0x22B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5A8u;
label_22b5a8:
    // 0x22b5a8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x22B5A8u;
    SET_GPR_U32(ctx, 31, 0x22B5B0u);
    ctx->pc = 0x22B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5A8u;
    // 0x22b5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22B5A8u, 0x22B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5B0u;
label_22b5b0:
    // 0x22b5b0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x22b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x22b5b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22b5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5b8: 0x8c83a7ac  lw          $v1, -0x5854($a0)
    ctx->pc = 0x22b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944684)));
    // 0x22b5bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b5c0: 0xac83a7ac  sw          $v1, -0x5854($a0)
    ctx->pc = 0x22b5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294944684), GPR_U32(ctx, 3));
label_22b5c4:
    // 0x22b5c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22b5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22b5c8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22b5c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b5cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22b5ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b5d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22b5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b5d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22b5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b5d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22b5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b5dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x22B5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5E0u;
        // 0x22b5e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B5E8u;
}
