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

// Function: sub_001C0458
// Address: 0x1c0458 - 0x1c0548
void sub_001C0458_0x1c0458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0458_0x1c0458");
#endif

    switch (ctx->pc) {
        case 0x1c049cu: goto label_1c049c;
        case 0x1c04a4u: goto label_1c04a4;
        case 0x1c04b0u: goto label_1c04b0;
        case 0x1c04c4u: goto label_1c04c4;
        case 0x1c0518u: goto label_1c0518;
        default: break;
    }

    ctx->pc = 0x1c0458u;

    // 0x1c0458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c045c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c0460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0464: 0x24041200  addiu       $a0, $zero, 0x1200
    ctx->pc = 0x1c0464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x1c0468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c046c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c0470: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1c0470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0474: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c0474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c0478: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c0478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c047c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c0480: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0484: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c0484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c0488: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c0488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c048c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1c0490: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c0494: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C0494u;
    SET_GPR_U32(ctx, 31, 0x1C049Cu);
    ctx->pc = 0x1C0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0494u;
    // 0x1c0498: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C0494u, 0x1C049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C049Cu;
label_1c049c:
    // 0x1c049c: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C049Cu;
    SET_GPR_U32(ctx, 31, 0x1C04A4u);
    ctx->pc = 0x1C04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C049Cu;
    // 0x1c04a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C049Cu, 0x1C04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04A4u;
label_1c04a4:
    // 0x1c04a4: 0x24041201  addiu       $a0, $zero, 0x1201
    ctx->pc = 0x1c04a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4609));
    // 0x1c04a8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C04A8u;
    SET_GPR_U32(ctx, 31, 0x1C04B0u);
    ctx->pc = 0x1C04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04A8u;
    // 0x1c04ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C04A8u, 0x1C04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04B0u;
label_1c04b0:
    // 0x1c04b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c04b4: 0x12030019  beq         $s0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C04B4u;
    {
        const bool branch_taken_0x1c04b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04B4u;
        // 0x1c04b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04b4) {
            ctx->pc = 0x1C051Cu;
            goto label_1c051c;
        }
    }
    ctx->pc = 0x1C04BCu;
    // 0x1c04bc: 0xc0736de  jal         func_1CDB78
    ctx->pc = 0x1C04BCu;
    SET_GPR_U32(ctx, 31, 0x1C04C4u);
    ctx->pc = 0x1CDB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB78u, 0x1C04BCu, 0x1C04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04C4u;
label_1c04c4:
    // 0x1c04c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c04c8: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x1c04c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1c04cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C04CCu;
    {
        const bool branch_taken_0x1c04cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04CCu;
        // 0x1c04d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04cc) {
            ctx->pc = 0x1C04E4u;
            goto label_1c04e4;
        }
    }
    ctx->pc = 0x1C04D4u;
    // 0x1c04d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C04D4u;
    {
        const bool branch_taken_0x1c04d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04D4u;
        // 0x1c04d8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04d4) {
            ctx->pc = 0x1C04E4u;
            goto label_1c04e4;
        }
    }
    ctx->pc = 0x1C04DCu;
    // 0x1c04dc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C04DCu;
    {
        const bool branch_taken_0x1c04dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c04dc) {
            ctx->pc = 0x1C0510u;
            goto label_1c0510;
        }
    }
    ctx->pc = 0x1C04E4u;
label_1c04e4:
    // 0x1c04e4: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x1c04e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c04e8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c04e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c04ec: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x1c04ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c04f0: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x1c04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x1c04f4: 0x8a420003  lwl         $v0, 0x3($s2)
    ctx->pc = 0x1c04f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1c04f8: 0x9a420000  lwr         $v0, 0x0($s2)
    ctx->pc = 0x1c04f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1c04fc: 0xaa220017  swl         $v0, 0x17($s1)
    ctx->pc = 0x1c04fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c0500: 0xba220014  swr         $v0, 0x14($s1)
    ctx->pc = 0x1c0500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c0504: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x1c0504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x1c0508: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x1c0508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
    // 0x1c050c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c050cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1c0510:
    // 0x1c0510: 0xc0736fc  jal         func_1CDBF0
    ctx->pc = 0x1C0510u;
    SET_GPR_U32(ctx, 31, 0x1C0518u);
    ctx->pc = 0x1CDBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDBF0u, 0x1C0510u, 0x1C0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0518u;
label_1c0518:
    // 0x1c0518: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1c0518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c051c:
    // 0x1c051c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c051cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c0520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0524: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c0524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0528: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c0528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c052c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c052cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0530: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c0530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0534: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c0534u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0538: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c0538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c053c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C053Cu;
        // 0x1c0540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0544u;
    // 0x1c0544: 0x0  nop
    ctx->pc = 0x1c0544u;
    // NOP
}
