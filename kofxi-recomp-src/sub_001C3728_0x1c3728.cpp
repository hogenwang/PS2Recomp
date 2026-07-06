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

// Function: sub_001C3728
// Address: 0x1c3728 - 0x1c38b0
void sub_001C3728_0x1c3728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3728_0x1c3728");
#endif

    switch (ctx->pc) {
        case 0x1c3778u: goto label_1c3778;
        case 0x1c378cu: goto label_1c378c;
        case 0x1c37acu: goto label_1c37ac;
        case 0x1c37bcu: goto label_1c37bc;
        case 0x1c37c4u: goto label_1c37c4;
        case 0x1c37c8u: goto label_1c37c8;
        case 0x1c37d0u: goto label_1c37d0;
        case 0x1c37e0u: goto label_1c37e0;
        case 0x1c37e8u: goto label_1c37e8;
        case 0x1c37f4u: goto label_1c37f4;
        case 0x1c3810u: goto label_1c3810;
        case 0x1c382cu: goto label_1c382c;
        case 0x1c3840u: goto label_1c3840;
        case 0x1c3854u: goto label_1c3854;
        case 0x1c3868u: goto label_1c3868;
        case 0x1c3870u: goto label_1c3870;
        case 0x1c3878u: goto label_1c3878;
        case 0x1c3880u: goto label_1c3880;
        case 0x1c3890u: goto label_1c3890;
        default: break;
    }

    ctx->pc = 0x1c3728u;

    // 0x1c3728: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c3728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c372c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1c372cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1c3730: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1c3730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1c3734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3738: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1c3738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1c373c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c373cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3740: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1c3740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1c3744: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1c3744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c3748: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1c3748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1c374c: 0x24659f10  addiu       $a1, $v1, -0x60F0
    ctx->pc = 0x1c374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942480));
    // 0x1c3750: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c3750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c3754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3758: 0x8a230003  lwl         $v1, 0x3($s1)
    ctx->pc = 0x1c3758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1c375c: 0x9a230000  lwr         $v1, 0x0($s1)
    ctx->pc = 0x1c375cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1c3760: 0x82260004  lb          $a2, 0x4($s1)
    ctx->pc = 0x1c3760u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c3764: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x1c3764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c3768: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x1c3768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1c376c: 0xa0460004  sb          $a2, 0x4($v0)
    ctx->pc = 0x1c376cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c3770: 0xc04a6b2  jal         func_129AC8
    ctx->pc = 0x1C3770u;
    SET_GPR_U32(ctx, 31, 0x1C3778u);
    ctx->pc = 0x1C3774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3770u;
    // 0x1c3774: 0xa3a00044  sb          $zero, 0x44($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129AC8u, 0x1C3770u, 0x1C3778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3778u;
label_1c3778:
    // 0x1c3778: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3778u;
    {
        const bool branch_taken_0x1c3778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3778) {
            ctx->pc = 0x1C377Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3778u;
            // 0x1c377c: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3798u;
            goto label_1c3798;
        }
    }
    ctx->pc = 0x1C3780u;
    // 0x1c3780: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1c3780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1c3784: 0xc071516  jal         func_1C5458
    ctx->pc = 0x1C3784u;
    SET_GPR_U32(ctx, 31, 0x1C378Cu);
    ctx->pc = 0x1C3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3784u;
    // 0x1c3788: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5458u, 0x1C3784u, 0x1C378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C378Cu;
label_1c378c:
    // 0x1c378c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1C378Cu;
    {
        const bool branch_taken_0x1c378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C378Cu;
        // 0x1c3790: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c378c) {
            ctx->pc = 0x1C3898u;
            goto label_1c3898;
        }
    }
    ctx->pc = 0x1C3794u;
    // 0x1c3794: 0x0  nop
    ctx->pc = 0x1c3794u;
    // NOP
label_1c3798:
    // 0x1c3798: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c3798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c379c: 0x2670eab8  addiu       $s0, $s3, -0x1548
    ctx->pc = 0x1c379cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961848));
    // 0x1c37a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c37a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37a4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C37A4u;
    SET_GPR_U32(ctx, 31, 0x1C37ACu);
    ctx->pc = 0x1C37A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37A4u;
    // 0x1c37a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C37A4u, 0x1C37ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37ACu;
label_1c37ac:
    // 0x1c37ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c37acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c37b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37b4: 0xc070cf0  jal         func_1C33C0
    ctx->pc = 0x1C37B4u;
    SET_GPR_U32(ctx, 31, 0x1C37BCu);
    ctx->pc = 0x1C37B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37B4u;
    // 0x1c37b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C33C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C33C0u, 0x1C37B4u, 0x1C37BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37BCu;
label_1c37bc:
    // 0x1c37bc: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C37BCu;
    SET_GPR_U32(ctx, 31, 0x1C37C4u);
    ctx->pc = 0x1C37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37BCu;
    // 0x1c37c0: 0x34049000  ori         $a0, $zero, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C37BCu, 0x1C37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37C4u;
label_1c37c4:
    // 0x1c37c4: 0x0  nop
    ctx->pc = 0x1c37c4u;
    // NOP
label_1c37c8:
    // 0x1c37c8: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C37C8u;
    SET_GPR_U32(ctx, 31, 0x1C37D0u);
    ctx->pc = 0x1C37CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37C8u;
    // 0x1c37cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C37C8u, 0x1C37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37D0u;
label_1c37d0:
    // 0x1c37d0: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C37D0u;
    {
        const bool branch_taken_0x1c37d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c37d0) {
            ctx->pc = 0x1C37C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c37c8;
        }
    }
    ctx->pc = 0x1C37D8u;
    // 0x1c37d8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C37D8u;
    SET_GPR_U32(ctx, 31, 0x1C37E0u);
    ctx->pc = 0x1C37DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37D8u;
    // 0x1c37dc: 0x34049001  ori         $a0, $zero, 0x9001 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36865);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C37D8u, 0x1C37E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37E0u;
label_1c37e0:
    // 0x1c37e0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C37E0u;
    SET_GPR_U32(ctx, 31, 0x1C37E8u);
    ctx->pc = 0x1C37E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37E0u;
    // 0x1c37e4: 0x34049100  ori         $a0, $zero, 0x9100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37120);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C37E0u, 0x1C37E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37E8u;
label_1c37e8:
    // 0x1c37e8: 0x2665eab8  addiu       $a1, $s3, -0x1548
    ctx->pc = 0x1c37e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961848));
    // 0x1c37ec: 0xc0709e0  jal         func_1C2780
    ctx->pc = 0x1C37ECu;
    SET_GPR_U32(ctx, 31, 0x1C37F4u);
    ctx->pc = 0x1C37F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37ECu;
    // 0x1c37f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2780u, 0x1C37ECu, 0x1C37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C37F4u;
label_1c37f4:
    // 0x1c37f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C37F4u;
    {
        const bool branch_taken_0x1c37f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c37f4) {
            ctx->pc = 0x1C3808u;
            goto label_1c3808;
        }
    }
    ctx->pc = 0x1C37FCu;
    // 0x1c37fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C37FCu;
    {
        const bool branch_taken_0x1c37fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37FCu;
        // 0x1c3800: 0x34049101  ori         $a0, $zero, 0x9101 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37121);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37fc) {
            ctx->pc = 0x1C384Cu;
            goto label_1c384c;
        }
    }
    ctx->pc = 0x1C3804u;
    // 0x1c3804: 0x0  nop
    ctx->pc = 0x1c3804u;
    // NOP
label_1c3808:
    // 0x1c3808: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C3808u;
    SET_GPR_U32(ctx, 31, 0x1C3810u);
    ctx->pc = 0x1C380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3808u;
    // 0x1c380c: 0x34049102  ori         $a0, $zero, 0x9102 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37122);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C3808u, 0x1C3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3810u;
label_1c3810:
    // 0x1c3810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3814: 0x34049200  ori         $a0, $zero, 0x9200
    ctx->pc = 0x1c3814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37376);
    // 0x1c3818: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x1c3818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c381c: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x1c381cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3820: 0xa3a00032  sb          $zero, 0x32($sp)
    ctx->pc = 0x1c3820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3824: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C3824u;
    SET_GPR_U32(ctx, 31, 0x1C382Cu);
    ctx->pc = 0x1C3828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3824u;
    // 0x1c3828: 0xa3a00033  sb          $zero, 0x33($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C3824u, 0x1C382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C382Cu;
label_1c382c:
    // 0x1c382c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3830: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1c3830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c3834: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c3834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3838: 0xc0470ea  jal         func_11C3A8
    ctx->pc = 0x1C3838u;
    SET_GPR_U32(ctx, 31, 0x1C3840u);
    ctx->pc = 0x1C383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3838u;
    // 0x1c383c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C3A8u, 0x1C3838u, 0x1C3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3840u;
label_1c3840:
    // 0x1c3840: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3840u;
    {
        const bool branch_taken_0x1c3840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3840) {
            ctx->pc = 0x1C3860u;
            goto label_1c3860;
        }
    }
    ctx->pc = 0x1C3848u;
    // 0x1c3848: 0x34049201  ori         $a0, $zero, 0x9201
    ctx->pc = 0x1c3848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37377);
label_1c384c:
    // 0x1c384c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C384Cu;
    SET_GPR_U32(ctx, 31, 0x1C3854u);
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C384Cu, 0x1C3854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3854u;
label_1c3854:
    // 0x1c3854: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C3854u;
    {
        const bool branch_taken_0x1c3854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3854u;
        // 0x1c3858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3854) {
            ctx->pc = 0x1C3894u;
            goto label_1c3894;
        }
    }
    ctx->pc = 0x1C385Cu;
    // 0x1c385c: 0x0  nop
    ctx->pc = 0x1c385cu;
    // NOP
label_1c3860:
    // 0x1c3860: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C3860u;
    SET_GPR_U32(ctx, 31, 0x1C3868u);
    ctx->pc = 0x1C3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3860u;
    // 0x1c3864: 0x34049202  ori         $a0, $zero, 0x9202 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37378);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C3860u, 0x1C3868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3868u;
label_1c3868:
    // 0x1c3868: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C3868u;
    SET_GPR_U32(ctx, 31, 0x1C3870u);
    ctx->pc = 0x1C386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3868u;
    // 0x1c386c: 0x34049300  ori         $a0, $zero, 0x9300 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C3868u, 0x1C3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3870u;
label_1c3870:
    // 0x1c3870: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c3870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3874: 0x0  nop
    ctx->pc = 0x1c3874u;
    // NOP
label_1c3878:
    // 0x1c3878: 0xc046e5c  jal         func_11B970
    ctx->pc = 0x1C3878u;
    SET_GPR_U32(ctx, 31, 0x1C3880u);
    ctx->pc = 0x1C387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3878u;
    // 0x1c387c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1C3878u, 0x1C3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3880u;
label_1c3880:
    // 0x1c3880: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C3880u;
    {
        const bool branch_taken_0x1c3880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1c3880) {
            ctx->pc = 0x1C3878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3878;
        }
    }
    ctx->pc = 0x1C3888u;
    // 0x1c3888: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C3888u;
    SET_GPR_U32(ctx, 31, 0x1C3890u);
    ctx->pc = 0x1C388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3888u;
    // 0x1c388c: 0x34049301  ori         $a0, $zero, 0x9301 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C3888u, 0x1C3890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3890u;
label_1c3890:
    // 0x1c3890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3894:
    // 0x1c3894: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1c3894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c3898:
    // 0x1c3898: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1c3898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c389c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1c389cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c38a0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1c38a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c38a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c38a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c38a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C38A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38A8u;
        // 0x1c38ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C38A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C38B0u;
}
