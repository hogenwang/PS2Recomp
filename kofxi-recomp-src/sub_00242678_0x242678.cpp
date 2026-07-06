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

// Function: sub_00242678
// Address: 0x242678 - 0x2427a0
void sub_00242678_0x242678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242678_0x242678");
#endif

    switch (ctx->pc) {
        case 0x2426acu: goto label_2426ac;
        case 0x2426c8u: goto label_2426c8;
        case 0x2426e0u: goto label_2426e0;
        default: break;
    }

    ctx->pc = 0x242678u;

    // 0x242678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x242678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24267c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x242680: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x242680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x242684: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x242684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x242688: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x242688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24268c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242690: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x242690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x242694: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x242694u;
    {
        const bool branch_taken_0x242694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242694u;
        // 0x242698: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242694) {
            ctx->pc = 0x2426A4u;
            goto label_2426a4;
        }
    }
    ctx->pc = 0x24269Cu;
    // 0x24269c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x24269Cu;
    {
        const bool branch_taken_0x24269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2426A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24269Cu;
        // 0x2426a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24269c) {
            ctx->pc = 0x242784u;
            goto label_242784;
        }
    }
    ctx->pc = 0x2426A4u;
label_2426a4:
    // 0x2426a4: 0xc098552  jal         func_261548
    ctx->pc = 0x2426A4u;
    SET_GPR_U32(ctx, 31, 0x2426ACu);
    ctx->pc = 0x2426A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2426A4u;
    // 0x2426a8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2426A4u, 0x2426ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426ACu;
label_2426ac:
    // 0x2426ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2426acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2426b0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2426B0u;
    {
        const bool branch_taken_0x2426b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2426B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426B0u;
        // 0x2426b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426b0) {
            ctx->pc = 0x2426C0u;
            goto label_2426c0;
        }
    }
    ctx->pc = 0x2426B8u;
    // 0x2426b8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2426B8u;
    {
        const bool branch_taken_0x2426b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2426BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2426B8u;
        // 0x2426bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2426b8) {
            ctx->pc = 0x242784u;
            goto label_242784;
        }
    }
    ctx->pc = 0x2426C0u;
label_2426c0:
    // 0x2426c0: 0xc048c96  jal         func_123258
    ctx->pc = 0x2426C0u;
    SET_GPR_U32(ctx, 31, 0x2426C8u);
    ctx->pc = 0x2426C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2426C0u;
    // 0x2426c4: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x2426C0u, 0x2426C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426C8u;
label_2426c8:
    // 0x2426c8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2426c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2426cc: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2426ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2426d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2426d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2426d4: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x2426d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2426d8: 0xc0905ac  jal         func_2416B0
    ctx->pc = 0x2426D8u;
    SET_GPR_U32(ctx, 31, 0x2426E0u);
    ctx->pc = 0x2426DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2426D8u;
    // 0x2426dc: 0x8c44adec  lw          $a0, -0x5214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B0u, 0x2426D8u, 0x2426E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2426E0u;
label_2426e0:
    // 0x2426e0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2426e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2426e4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2426e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2426e8: 0x260a005c  addiu       $t2, $s0, 0x5C
    ctx->pc = 0x2426e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x2426ec: 0xa044000b  sb          $a0, 0xB($v0)
    ctx->pc = 0x2426ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x2426f0: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x2426f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x2426f4: 0x123827  nor         $a3, $zero, $s2
    ctx->pc = 0x2426f4u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
    // 0x2426f8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x2426f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x2426fc: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x2426fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x242700: 0xa064000b  sb          $a0, 0xB($v1)
    ctx->pc = 0x242700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x242704: 0x3c080024  lui         $t0, 0x24
    ctx->pc = 0x242704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36 << 16));
    // 0x242708: 0xa4670008  sh          $a3, 0x8($v1)
    ctx->pc = 0x242708u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x24270c: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x24270cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x242710: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x242710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x242714: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x242714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x242718: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x242718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x24271c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x24271cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x242720: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x242720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x242724: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x242724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x242728: 0xb2040063  sdl         $a0, 0x63($s0)
    ctx->pc = 0x242728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24272c: 0xb604005c  sdr         $a0, 0x5C($s0)
    ctx->pc = 0x24272cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x242730: 0xb207006b  sdl         $a3, 0x6B($s0)
    ctx->pc = 0x242730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x242734: 0xb6070064  sdr         $a3, 0x64($s0)
    ctx->pc = 0x242734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x242738: 0xb20b0073  sdl         $t3, 0x73($s0)
    ctx->pc = 0x242738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x24273c: 0xb60b006c  sdr         $t3, 0x6C($s0)
    ctx->pc = 0x24273cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x242740: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x242740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x242744: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x242744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x242748: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x242748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x24274c: 0x8d27adf0  lw          $a3, -0x5210($t1)
    ctx->pc = 0x24274cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294946288)));
    // 0x242750: 0x25081cf8  addiu       $t0, $t0, 0x1CF8
    ctx->pc = 0x242750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7416));
    // 0x242754: 0x24c620b8  addiu       $a2, $a2, 0x20B8
    ctx->pc = 0x242754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8376));
    // 0x242758: 0x24a51438  addiu       $a1, $a1, 0x1438
    ctx->pc = 0x242758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5176));
    // 0x24275c: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x24275cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    // 0x242760: 0x24841308  addiu       $a0, $a0, 0x1308
    ctx->pc = 0x242760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    // 0x242764: 0x24632560  addiu       $v1, $v1, 0x2560
    ctx->pc = 0x242764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9568));
    // 0x242768: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24276c: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x24276cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x242770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242774: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x242774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x242778: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x242778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x24277c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x24277cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x242780: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x242780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_242784:
    // 0x242784: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x242784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242788: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x242788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24278c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24278cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242794: 0x3e00008  jr          $ra
    ctx->pc = 0x242794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242794u;
        // 0x242798: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24279Cu;
    // 0x24279c: 0x0  nop
    ctx->pc = 0x24279cu;
    // NOP
    if (ctx->pc == 0x24279cu) { ctx->pc = 0x2427a0u; }
}
