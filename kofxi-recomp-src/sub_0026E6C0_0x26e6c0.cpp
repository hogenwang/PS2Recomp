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

// Function: sub_0026E6C0
// Address: 0x26e6c0 - 0x26ebd0
void sub_0026E6C0_0x26e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E6C0_0x26e6c0");
#endif

    switch (ctx->pc) {
        case 0x26e6f8u: goto label_26e6f8;
        case 0x26e700u: goto label_26e700;
        case 0x26e728u: goto label_26e728;
        case 0x26e73cu: goto label_26e73c;
        case 0x26e768u: goto label_26e768;
        case 0x26e77cu: goto label_26e77c;
        case 0x26e7acu: goto label_26e7ac;
        case 0x26e7c8u: goto label_26e7c8;
        case 0x26e7e0u: goto label_26e7e0;
        case 0x26e840u: goto label_26e840;
        case 0x26e8a4u: goto label_26e8a4;
        case 0x26e910u: goto label_26e910;
        case 0x26e918u: goto label_26e918;
        case 0x26e950u: goto label_26e950;
        case 0x26e968u: goto label_26e968;
        case 0x26e978u: goto label_26e978;
        case 0x26e980u: goto label_26e980;
        case 0x26e9b0u: goto label_26e9b0;
        case 0x26e9c8u: goto label_26e9c8;
        case 0x26e9e0u: goto label_26e9e0;
        case 0x26ea38u: goto label_26ea38;
        case 0x26ea48u: goto label_26ea48;
        case 0x26ea90u: goto label_26ea90;
        case 0x26eaa8u: goto label_26eaa8;
        case 0x26eaccu: goto label_26eacc;
        case 0x26eb34u: goto label_26eb34;
        case 0x26eb50u: goto label_26eb50;
        case 0x26eb90u: goto label_26eb90;
        default: break;
    }

    ctx->pc = 0x26e6c0u;

    // 0x26e6c0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x26e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x26e6c4: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x26e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x26e6c8: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x26e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x26e6cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26e6ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6d0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x26e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x26e6d4: 0x2693004c  addiu       $s3, $s4, 0x4C
    ctx->pc = 0x26e6d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
    // 0x26e6d8: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x26e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x26e6dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26e6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6e0: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x26e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x26e6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26e6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6e8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x26e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x26e6ec: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x26e6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x26e6f0: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x26e6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x26e6f4: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x26e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_26e6f8:
    // 0x26e6f8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26E6F8u;
    SET_GPR_U32(ctx, 31, 0x26E700u);
    ctx->pc = 0x26E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6F8u;
    // 0x26e6fc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26E6F8u, 0x26E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E700u;
label_26e700:
    // 0x26e700: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26E700u;
    {
        const bool branch_taken_0x26e700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E700u;
        // 0x26e704: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e700) {
            ctx->pc = 0x26E744u;
            goto label_26e744;
        }
    }
    ctx->pc = 0x26E708u;
    // 0x26e708: 0x8e830188  lw          $v1, 0x188($s4)
    ctx->pc = 0x26e708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x26e70c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26e710: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26e714: 0x88640010  lwl         $a0, 0x10($v1)
    ctx->pc = 0x26e714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26e718: 0x9864000d  lwr         $a0, 0xD($v1)
    ctx->pc = 0x26e718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26e71c: 0x261094f8  addiu       $s0, $s0, -0x6B08
    ctx->pc = 0x26e71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939896));
    // 0x26e720: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26E720u;
    SET_GPR_U32(ctx, 31, 0x26E728u);
    ctx->pc = 0x26E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E720u;
    // 0x26e724: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x26E720u, 0x26E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E728u;
label_26e728:
    // 0x26e728: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26e728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e72c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26e72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e730: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26e730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e734: 0xc043e24  jal         func_10F890
    ctx->pc = 0x26E734u;
    SET_GPR_U32(ctx, 31, 0x26E73Cu);
    ctx->pc = 0x26E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E734u;
    // 0x26e738: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x26E734u, 0x26E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E73Cu;
label_26e73c:
    // 0x26e73c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26E73Cu;
    {
        const bool branch_taken_0x26e73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E73Cu;
        // 0x26e740: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e73c) {
            ctx->pc = 0x26E780u;
            goto label_26e780;
        }
    }
    ctx->pc = 0x26E744u;
label_26e744:
    // 0x26e744: 0x8e830188  lw          $v1, 0x188($s4)
    ctx->pc = 0x26e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x26e748: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26e74c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26e750: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26e750u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x26e754: 0x88640010  lwl         $a0, 0x10($v1)
    ctx->pc = 0x26e754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x26e758: 0x9864000d  lwr         $a0, 0xD($v1)
    ctx->pc = 0x26e758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x26e75c: 0x26109520  addiu       $s0, $s0, -0x6AE0
    ctx->pc = 0x26e75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939936));
    // 0x26e760: 0xc0990d8  jal         func_264360
    ctx->pc = 0x26E760u;
    SET_GPR_U32(ctx, 31, 0x26E768u);
    ctx->pc = 0x26E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E760u;
    // 0x26e764: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264360u, 0x26E760u, 0x26E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E768u;
label_26e768:
    // 0x26e768: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26e768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e76c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26e76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e770: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26e770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e774: 0xc043e24  jal         func_10F890
    ctx->pc = 0x26E774u;
    SET_GPR_U32(ctx, 31, 0x26E77Cu);
    ctx->pc = 0x26E778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E774u;
    // 0x26e778: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x26E774u, 0x26E77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E77Cu;
label_26e77c:
    // 0x26e77c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x26e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_26e780:
    // 0x26e780: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26e780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e784: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26e784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e788: 0x2695006a  addiu       $s5, $s4, 0x6A
    ctx->pc = 0x26e788u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 106));
    // 0x26e78c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x26e78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x26e790: 0x92820068  lbu         $v0, 0x68($s4)
    ctx->pc = 0x26e790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x26e794: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x26e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e798: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x26e798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e79c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x26e79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e7a0: 0x92820069  lbu         $v0, 0x69($s4)
    ctx->pc = 0x26e7a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 105)));
    // 0x26e7a4: 0xc09b660  jal         func_26D980
    ctx->pc = 0x26E7A4u;
    SET_GPR_U32(ctx, 31, 0x26E7ACu);
    ctx->pc = 0x26E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7A4u;
    // 0x26e7a8: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D980u, 0x26E7A4u, 0x26E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7ACu;
label_26e7ac:
    // 0x26e7ac: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x26e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e7b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26e7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e7b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x26e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x26e7b8: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x26e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e7bc: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x26e7bcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26e7c0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E7C0u;
    SET_GPR_U32(ctx, 31, 0x26E7C8u);
    ctx->pc = 0x26E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7C0u;
    // 0x26e7c4: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26E7C0u, 0x26E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7C8u;
label_26e7c8:
    // 0x26e7c8: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x26e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e7cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x26e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x26e7d0: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x26e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x26e7d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26e7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e7d8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E7D8u;
    SET_GPR_U32(ctx, 31, 0x26E7E0u);
    ctx->pc = 0x26E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E7D8u;
    // 0x26e7dc: 0x248400ec  addiu       $a0, $a0, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26E7D8u, 0x26E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E7E0u;
label_26e7e0:
    // 0x26e7e0: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x26e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e7e4: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x26e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x26e7e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x26e7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e7ec: 0xa08200f0  sb          $v0, 0xF0($a0)
    ctx->pc = 0x26e7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 240), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e7f0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x26e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e7f4: 0xa07000f1  sb          $s0, 0xF1($v1)
    ctx->pc = 0x26e7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 241), (uint8_t)GPR_U32(ctx, 16));
    // 0x26e7f8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x26e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e7fc: 0xa04500f2  sb          $a1, 0xF2($v0)
    ctx->pc = 0x26e7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 242), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e800: 0x8e830188  lw          $v1, 0x188($s4)
    ctx->pc = 0x26e800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x26e804: 0x88620010  lwl         $v0, 0x10($v1)
    ctx->pc = 0x26e804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x26e808: 0x9862000d  lwr         $v0, 0xD($v1)
    ctx->pc = 0x26e808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x26e80c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x26E80Cu;
    {
        const bool branch_taken_0x26e80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E80Cu;
        // 0x26e810: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e80c) {
            ctx->pc = 0x26E988u;
            goto label_26e988;
        }
    }
    ctx->pc = 0x26E814u;
    // 0x26e814: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x26e814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e818: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26e818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e81c: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x26e81cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26e820: 0xa08300f3  sb          $v1, 0xF3($a0)
    ctx->pc = 0x26e820u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 243), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e824: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x26e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e828: 0xa04500f4  sb          $a1, 0xF4($v0)
    ctx->pc = 0x26e828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 244), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e82c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x26e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e830: 0x8e850188  lw          $a1, 0x188($s4)
    ctx->pc = 0x26e830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x26e834: 0x248400f5  addiu       $a0, $a0, 0xF5
    ctx->pc = 0x26e834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 245));
    // 0x26e838: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E838u;
    SET_GPR_U32(ctx, 31, 0x26E840u);
    ctx->pc = 0x26E83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E838u;
    // 0x26e83c: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26E838u, 0x26E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E840u;
label_26e840:
    // 0x26e840: 0x8e82017c  lw          $v0, 0x17C($s4)
    ctx->pc = 0x26e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x26e844: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x26E844u;
    {
        const bool branch_taken_0x26e844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e844) {
            ctx->pc = 0x26E848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E844u;
            // 0x26e848: 0x8e820188  lw          $v0, 0x188($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E8B4u;
            goto label_26e8b4;
        }
    }
    ctx->pc = 0x26E84Cu;
    // 0x26e84c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x26e84cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26e850: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x26e850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26e854: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e858: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26E858u;
    {
        const bool branch_taken_0x26e858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E858u;
        // 0x26e85c: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e858) {
            ctx->pc = 0x26E8B0u;
            goto label_26e8b0;
        }
    }
    ctx->pc = 0x26E860u;
    // 0x26e860: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e864: 0xa06200f9  sb          $v0, 0xF9($v1)
    ctx->pc = 0x26e864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 249), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e868: 0x8e84017c  lw          $a0, 0x17C($s4)
    ctx->pc = 0x26e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x26e86c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x26e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e870: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x26e870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x26e874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e878: 0xa0a200fa  sb          $v0, 0xFA($a1)
    ctx->pc = 0x26e878u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 250), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e87c: 0x8e83017c  lw          $v1, 0x17C($s4)
    ctx->pc = 0x26e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x26e880: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x26e880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e884: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x26e884u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e888: 0xa08200fb  sb          $v0, 0xFB($a0)
    ctx->pc = 0x26e888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 251), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e88c: 0x8e83017c  lw          $v1, 0x17C($s4)
    ctx->pc = 0x26e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x26e890: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x26e890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e894: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x26e894u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x26e898: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x26e898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26e89c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E89Cu;
    SET_GPR_U32(ctx, 31, 0x26E8A4u);
    ctx->pc = 0x26E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E89Cu;
    // 0x26e8a0: 0x248400fc  addiu       $a0, $a0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26E89Cu, 0x26E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8A4u;
label_26e8a4:
    // 0x26e8a4: 0x8e83017c  lw          $v1, 0x17C($s4)
    ctx->pc = 0x26e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
    // 0x26e8a8: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x26e8a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x26e8ac: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x26e8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_26e8b0:
    // 0x26e8b0: 0x8e820188  lw          $v0, 0x188($s4)
    ctx->pc = 0x26e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
label_26e8b4:
    // 0x26e8b4: 0x8c4303e8  lw          $v1, 0x3E8($v0)
    ctx->pc = 0x26e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
    // 0x26e8b8: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x26E8B8u;
    {
        const bool branch_taken_0x26e8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8B8u;
        // 0x26e8bc: 0x26220006  addiu       $v0, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8b8) {
            ctx->pc = 0x26E988u;
            goto label_26e988;
        }
    }
    ctx->pc = 0x26E8C0u;
    // 0x26e8c0: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e8c4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26E8C4u;
    {
        const bool branch_taken_0x26e8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8C4u;
        // 0x26e8c8: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8c4) {
            ctx->pc = 0x26E988u;
            goto label_26e988;
        }
    }
    ctx->pc = 0x26E8CCu;
    // 0x26e8cc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x26e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e8d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e8d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26e8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e8d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x26e8dc: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e8e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26e8e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26e8e4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x26e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e8e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x26e8ec: 0xa04400ec  sb          $a0, 0xEC($v0)
    ctx->pc = 0x26e8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 4));
    // 0x26e8f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26e8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26e8f4: 0x262200ec  addiu       $v0, $s1, 0xEC
    ctx->pc = 0x26e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x26e8f8: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x26e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e8fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x26e8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x26e900: 0x8e850188  lw          $a1, 0x188($s4)
    ctx->pc = 0x26e900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x26e904: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26e904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26e908: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E908u;
    SET_GPR_U32(ctx, 31, 0x26E910u);
    ctx->pc = 0x26E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E908u;
    // 0x26e90c: 0x24a503e8  addiu       $a1, $a1, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26E908u, 0x26E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E910u;
label_26e910:
    // 0x26e910: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26E910u;
    SET_GPR_U32(ctx, 31, 0x26E918u);
    ctx->pc = 0x26E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E910u;
    // 0x26e914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26E910u, 0x26E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E918u;
label_26e918:
    // 0x26e918: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26e91c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26e920: 0x2c420138  sltiu       $v0, $v0, 0x138
    ctx->pc = 0x26e920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e924: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26E924u;
    {
        const bool branch_taken_0x26e924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E924u;
        // 0x26e928: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e924) {
            ctx->pc = 0x26E990u;
            goto label_26e990;
        }
    }
    ctx->pc = 0x26E92Cu;
    // 0x26e92c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x26e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26e930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e934: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x26e938: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e93c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26e93cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26e940: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x26e940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e944: 0x261000ec  addiu       $s0, $s0, 0xEC
    ctx->pc = 0x26e944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26e948: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26E948u;
    SET_GPR_U32(ctx, 31, 0x26E950u);
    ctx->pc = 0x26E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E948u;
    // 0x26e94c: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26E948u, 0x26E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E950u;
label_26e950:
    // 0x26e950: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x26e950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26e954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e958: 0x262200ec  addiu       $v0, $s1, 0xEC
    ctx->pc = 0x26e958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x26e95c: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x26e95cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e960: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26E960u;
    SET_GPR_U32(ctx, 31, 0x26E968u);
    ctx->pc = 0x26E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E960u;
    // 0x26e964: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26E960u, 0x26E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E968u;
label_26e968:
    // 0x26e968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e96c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x26e96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e970: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E970u;
    SET_GPR_U32(ctx, 31, 0x26E978u);
    ctx->pc = 0x26E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E970u;
    // 0x26e974: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26E970u, 0x26E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E978u;
label_26e978:
    // 0x26e978: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26E978u;
    SET_GPR_U32(ctx, 31, 0x26E980u);
    ctx->pc = 0x26E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E978u;
    // 0x26e97c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26E978u, 0x26E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E980u;
label_26e980:
    // 0x26e980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E980u;
    {
        const bool branch_taken_0x26e980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E980u;
        // 0x26e984: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e980) {
            ctx->pc = 0x26E990u;
            goto label_26e990;
        }
    }
    ctx->pc = 0x26E988u;
label_26e988:
    // 0x26e988: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x26E988u;
    {
        const bool branch_taken_0x26e988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E988u;
        // 0x26e98c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e988) {
            ctx->pc = 0x26EBA8u;
            goto label_26eba8;
        }
    }
    ctx->pc = 0x26E990u;
label_26e990:
    // 0x26e990: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x26e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e994: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26e998: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x26e998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x26e99c: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x26e99cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26e9a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x26e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x26e9a4: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e9a8: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E9A8u;
    SET_GPR_U32(ctx, 31, 0x26E9B0u);
    ctx->pc = 0x26E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9A8u;
    // 0x26e9ac: 0x26710010  addiu       $s1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x26E9A8u, 0x26E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9B0u;
label_26e9b0:
    // 0x26e9b0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x26e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x26e9b4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e9b8: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x26e9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x26e9bc: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x26e9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e9c0: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E9C0u;
    SET_GPR_U32(ctx, 31, 0x26E9C8u);
    ctx->pc = 0x26E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9C0u;
    // 0x26e9c4: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x26E9C0u, 0x26E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9C8u;
label_26e9c8:
    // 0x26e9c8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x26e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x26e9cc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e9d0: 0x2404022c  addiu       $a0, $zero, 0x22C
    ctx->pc = 0x26e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x26e9d4: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x26e9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e9d8: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E9D8u;
    SET_GPR_U32(ctx, 31, 0x26E9E0u);
    ctx->pc = 0x26E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9D8u;
    // 0x26e9dc: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x26E9D8u, 0x26E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9E0u;
label_26e9e0:
    // 0x26e9e0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x26e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x26e9e4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e9e8: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x26e9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e9ec: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x26e9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e9f0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x26e9f4: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x26e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e9f8: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x26e9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e9fc: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x26e9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x26ea00: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x26ea00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x26ea04: 0x8e820188  lw          $v0, 0x188($s4)
    ctx->pc = 0x26ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
    // 0x26ea08: 0x8c4303e8  lw          $v1, 0x3E8($v0)
    ctx->pc = 0x26ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
    // 0x26ea0c: 0xa2600018  sb          $zero, 0x18($s3)
    ctx->pc = 0x26ea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ea10: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x26ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
    // 0x26ea14: 0xa2720019  sb          $s2, 0x19($s3)
    ctx->pc = 0x26ea14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 25), (uint8_t)GPR_U32(ctx, 18));
    // 0x26ea18: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x26ea18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x26ea1c: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x26ea1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26ea20: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x26ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x26ea24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26ea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26ea28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26ea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26ea2c: 0xa662001a  sh          $v0, 0x1A($s3)
    ctx->pc = 0x26ea2cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x26ea30: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x26EA30u;
    SET_GPR_U32(ctx, 31, 0x26EA38u);
    ctx->pc = 0x26EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA30u;
    // 0x26ea34: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x26EA30u, 0x26EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA38u;
label_26ea38:
    // 0x26ea38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ea3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea40: 0xc09adee  jal         func_26B7B8
    ctx->pc = 0x26EA40u;
    SET_GPR_U32(ctx, 31, 0x26EA48u);
    ctx->pc = 0x26EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA40u;
    // 0x26ea44: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B7B8u, 0x26EA40u, 0x26EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA48u;
label_26ea48:
    // 0x26ea48: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x26ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x26ea4c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26ea50: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x26ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x26ea54: 0xa0a30007  sb          $v1, 0x7($a1)
    ctx->pc = 0x26ea54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26ea58: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x26ea58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ea5c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x26ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26ea60: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x26ea60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ea64: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x26ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x26ea68: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x26ea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x26ea6c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x26ea6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ea70: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x26ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26ea74: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x26ea74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26ea78: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x26ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x26ea7c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x26ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x26ea80: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x26ea80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ea84: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x26ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26ea88: 0xc08a262  jal         func_228988
    ctx->pc = 0x26EA88u;
    SET_GPR_U32(ctx, 31, 0x26EA90u);
    ctx->pc = 0x26EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EA88u;
    // 0x26ea8c: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x26EA88u, 0x26EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA90u;
label_26ea90:
    // 0x26ea90: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x26ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26ea94: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26ea98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ea9c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x26ea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eaa0: 0xc09b660  jal         func_26D980
    ctx->pc = 0x26EAA0u;
    SET_GPR_U32(ctx, 31, 0x26EAA8u);
    ctx->pc = 0x26EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAA0u;
    // 0x26eaa4: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D980u, 0x26EAA0u, 0x26EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EAA8u;
label_26eaa8:
    // 0x26eaa8: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x26eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x26eaac: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x26eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26eab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26eab4: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x26eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x26eab8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x26eab8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x26eabc: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x26eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x26eac0: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x26eac0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eac4: 0xc08a262  jal         func_228988
    ctx->pc = 0x26EAC4u;
    SET_GPR_U32(ctx, 31, 0x26EACCu);
    ctx->pc = 0x26EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAC4u;
    // 0x26eac8: 0xa0a20005  sb          $v0, 0x5($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x26EAC4u, 0x26EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EACCu;
label_26eacc:
    // 0x26eacc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26ead0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26ead4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x26ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26ead8: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x26ead8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eadc: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x26eadcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x26eae0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x26eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26eae4: 0xa0450008  sb          $a1, 0x8($v0)
    ctx->pc = 0x26eae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x26eae8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x26eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26eaec: 0xa0720009  sb          $s2, 0x9($v1)
    ctx->pc = 0x26eaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 18));
    // 0x26eaf0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x26eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26eaf4: 0xa840000f  swl         $zero, 0xF($v0)
    ctx->pc = 0x26eaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26eaf8: 0xb840000c  swr         $zero, 0xC($v0)
    ctx->pc = 0x26eaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26eafc: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x26eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x26eb00: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26eb04: 0x8862000f  lwl         $v0, 0xF($v1)
    ctx->pc = 0x26eb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x26eb08: 0x9862000c  lwr         $v0, 0xC($v1)
    ctx->pc = 0x26eb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x26eb0c: 0xa8820013  swl         $v0, 0x13($a0)
    ctx->pc = 0x26eb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26eb10: 0xb8820010  swr         $v0, 0x10($a0)
    ctx->pc = 0x26eb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26eb14: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x26eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26eb18: 0xa060000b  sb          $zero, 0xB($v1)
    ctx->pc = 0x26eb18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x26eb1c: 0xa060000a  sb          $zero, 0xA($v1)
    ctx->pc = 0x26eb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x26eb20: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26eb24: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x26eb24u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26eb28: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x26eb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x26eb2c: 0xc09ae16  jal         func_26B858
    ctx->pc = 0x26EB2Cu;
    SET_GPR_U32(ctx, 31, 0x26EB34u);
    ctx->pc = 0x26EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB2Cu;
    // 0x26eb30: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B858u, 0x26EB2Cu, 0x26EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB34u;
label_26eb34:
    // 0x26eb34: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x26eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x26eb38: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26eb3c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x26eb3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26eb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb44: 0xa083000b  sb          $v1, 0xB($a0)
    ctx->pc = 0x26eb44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eb48: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x26eb48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x26eb4c: 0x0  nop
    ctx->pc = 0x26eb4cu;
    // NOP
label_26eb50:
    // 0x26eb50: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x26eb54: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x26eb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x26eb58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26eb5c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x26eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x26eb60: 0x90450006  lbu         $a1, 0x6($v0)
    ctx->pc = 0x26eb60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x26eb64: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x26eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x26eb68: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x26eb68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x26eb6c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x26eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26eb70: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x26eb70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26eb74: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x26eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x26eb78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x26eb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x26eb7c: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x26eb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x26eb80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x26EB80u;
    {
        const bool branch_taken_0x26eb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB80u;
        // 0x26eb84: 0xa0830006  sb          $v1, 0x6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb80) {
            ctx->pc = 0x26EB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26eb50;
        }
    }
    ctx->pc = 0x26EB88u;
    // 0x26eb88: 0xc08a262  jal         func_228988
    ctx->pc = 0x26EB88u;
    SET_GPR_U32(ctx, 31, 0x26EB90u);
    ctx->pc = 0x26EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB88u;
    // 0x26eb8c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x26EB88u, 0x26EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB90u;
label_26eb90:
    // 0x26eb90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26eb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb94: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x26eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26eb98: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x26eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x26eb9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26eb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eba0: 0xa083000d  sb          $v1, 0xD($a0)
    ctx->pc = 0x26eba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eba4: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x26eba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
label_26eba8:
    // 0x26eba8: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x26eba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x26ebac: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x26ebacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x26ebb0: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x26ebb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x26ebb4: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x26ebb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x26ebb8: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x26ebb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x26ebbc: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x26ebbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26ebc0: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x26ebc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26ebc4: 0x3e00008  jr          $ra
    ctx->pc = 0x26EBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBC4u;
        // 0x26ebc8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EBCCu;
    // 0x26ebcc: 0x0  nop
    ctx->pc = 0x26ebccu;
    // NOP
}
