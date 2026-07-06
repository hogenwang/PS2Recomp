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

// Function: sub_0022A870
// Address: 0x22a870 - 0x22a9a0
void sub_0022A870_0x22a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A870_0x22a870");
#endif

    switch (ctx->pc) {
        case 0x22a89cu: goto label_22a89c;
        case 0x22a8a8u: goto label_22a8a8;
        case 0x22a8b4u: goto label_22a8b4;
        case 0x22a8c8u: goto label_22a8c8;
        case 0x22a8d0u: goto label_22a8d0;
        case 0x22a8e0u: goto label_22a8e0;
        default: break;
    }

    ctx->pc = 0x22a870u;

    // 0x22a870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a874: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22a878: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a87c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22a87cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a880: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a884: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22a884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a888: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22a88c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22a88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a890: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a894: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22A894u;
    SET_GPR_U32(ctx, 31, 0x22A89Cu);
    ctx->pc = 0x22A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A894u;
    // 0x22a898: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22A894u, 0x22A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A89Cu;
label_22a89c:
    // 0x22a89c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8a0: 0xc098552  jal         func_261548
    ctx->pc = 0x22A8A0u;
    SET_GPR_U32(ctx, 31, 0x22A8A8u);
    ctx->pc = 0x22A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8A0u;
    // 0x22a8a4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22A8A0u, 0x22A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8A8u;
label_22a8a8:
    // 0x22a8a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8ac: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22A8ACu;
    SET_GPR_U32(ctx, 31, 0x22A8B4u);
    ctx->pc = 0x22A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8ACu;
    // 0x22a8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22A8ACu, 0x22A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8B4u;
label_22a8b4:
    // 0x22a8b4: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22A8B4u;
    {
        const bool branch_taken_0x22a8b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8b4) {
            ctx->pc = 0x22A8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8B4u;
            // 0x22a8b8: 0x96430010  lhu         $v1, 0x10($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A8E8u;
            goto label_22a8e8;
        }
    }
    ctx->pc = 0x22A8BCu;
    // 0x22a8bc: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x22a8bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22a8c0: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x22A8C0u;
    SET_GPR_U32(ctx, 31, 0x22A8C8u);
    ctx->pc = 0x22A8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8C0u;
    // 0x22a8c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22A8C0u, 0x22A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8C8u;
label_22a8c8:
    // 0x22a8c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8cc: 0x0  nop
    ctx->pc = 0x22a8ccu;
    // NOP
label_22a8d0:
    // 0x22a8d0: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x22A8D0u;
    {
        const bool branch_taken_0x22a8d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a8d0) {
            ctx->pc = 0x22A8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A8D0u;
            // 0x22a8d4: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A904u;
            goto label_22a904;
        }
    }
    ctx->pc = 0x22A8D8u;
    // 0x22a8d8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x22A8D8u;
    SET_GPR_U32(ctx, 31, 0x22A8E0u);
    ctx->pc = 0x22A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8D8u;
    // 0x22a8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22A8D8u, 0x22A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A8E0u;
label_22a8e0:
    // 0x22a8e0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x22A8E0u;
    {
        const bool branch_taken_0x22a8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8E0u;
        // 0x22a8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8e0) {
            ctx->pc = 0x22A980u;
            goto label_22a980;
        }
    }
    ctx->pc = 0x22A8E8u;
label_22a8e8:
    // 0x22a8e8: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x22a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x22a8ec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22a8f0: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x22a8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x22a8f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22a8f8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22a8fc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x22A8FCu;
    {
        const bool branch_taken_0x22a8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8FCu;
        // 0x22a900: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8fc) {
            ctx->pc = 0x22A8D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a8d0;
        }
    }
    ctx->pc = 0x22A904u;
label_22a904:
    // 0x22a904: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22a908: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22A908u;
    {
        const bool branch_taken_0x22a908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A908u;
        // 0x22a90c: 0x2e8200e0  sltiu       $v0, $s4, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a908) {
            ctx->pc = 0x22A950u;
            goto label_22a950;
        }
    }
    ctx->pc = 0x22A910u;
    // 0x22a910: 0x6a42001b  ldl         $v0, 0x1B($s2)
    ctx->pc = 0x22a910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22a914: 0x6e420014  ldr         $v0, 0x14($s2)
    ctx->pc = 0x22a914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22a918: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x22a918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x22a91c: 0xb222001b  sdl         $v0, 0x1B($s1)
    ctx->pc = 0x22a91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a920: 0xb6220014  sdr         $v0, 0x14($s1)
    ctx->pc = 0x22a920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a924: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x22a924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x22a928: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x22a928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x22a92c: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x22a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22a930: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22a930u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22a934: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22a934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22a938: 0x30637ff6  andi        $v1, $v1, 0x7FF6
    ctx->pc = 0x22a938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32758);
    // 0x22a93c: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x22a93cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x22a940: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22a940u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22a944: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x22a944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x22a948: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x22a948u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x22a94c: 0x2e8200e0  sltiu       $v0, $s4, 0xE0
    ctx->pc = 0x22a94cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
label_22a950:
    // 0x22a950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22A950u;
    {
        const bool branch_taken_0x22a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A950u;
        // 0x22a954: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a950) {
            ctx->pc = 0x22A978u;
            goto label_22a978;
        }
    }
    ctx->pc = 0x22A958u;
    // 0x22a958: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x22a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x22a95c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22a960: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22a960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22a964: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x22a964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22a968: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x22a968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x22a96c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22a96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22a970: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22a970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22a974: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x22a974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_22a978:
    // 0x22a978: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x22a978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x22a97c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22a97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a980:
    // 0x22a980: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a984: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22a984u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a988: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a98c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a98cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a990: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a998: 0x3e00008  jr          $ra
    ctx->pc = 0x22A998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A998u;
        // 0x22a99c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A9A0u;
}
