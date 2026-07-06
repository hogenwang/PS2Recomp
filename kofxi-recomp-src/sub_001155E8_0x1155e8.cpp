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

// Function: sub_001155E8
// Address: 0x1155e8 - 0x1156e8
void sub_001155E8_0x1155e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001155E8_0x1155e8");
#endif

    switch (ctx->pc) {
        case 0x115610u: goto label_115610;
        case 0x115624u: goto label_115624;
        case 0x115668u: goto label_115668;
        case 0x1156a8u: goto label_1156a8;
        default: break;
    }

    ctx->pc = 0x1155e8u;

    // 0x1155e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1155e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1155ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1155ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1155f0: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x1155f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x1155f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1155f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1155f8: 0x8e428760  lw          $v0, -0x78A0($s2)
    ctx->pc = 0x1155f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936416)));
    // 0x1155fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1155fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x115600: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x115600u;
    {
        const bool branch_taken_0x115600 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115600u;
        // 0x115604: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115600) {
            ctx->pc = 0x1156CCu;
            goto label_1156cc;
        }
    }
    ctx->pc = 0x115608u;
    // 0x115608: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x115608u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x11560c: 0x26309e40  addiu       $s0, $s1, -0x61C0
    ctx->pc = 0x11560cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942272));
label_115610:
    // 0x115610: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x115610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x115614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115618: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x115618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x11561c: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x11561Cu;
    SET_GPR_U32(ctx, 31, 0x115624u);
    ctx->pc = 0x115620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11561Cu;
    // 0x115620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x11561Cu, 0x115624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115624u;
label_115624:
    // 0x115624: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115624u;
    {
        const bool branch_taken_0x115624 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x115624) {
            ctx->pc = 0x115628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115624u;
            // 0x115628: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115634u;
            goto label_115634;
        }
    }
    ctx->pc = 0x11562Cu;
    // 0x11562c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x11562Cu;
    {
        const bool branch_taken_0x11562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11562Cu;
        // 0x115630: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11562c) {
            ctx->pc = 0x1156D0u;
            goto label_1156d0;
        }
    }
    ctx->pc = 0x115634u;
label_115634:
    // 0x115634: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x115634u;
    {
        const bool branch_taken_0x115634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115634u;
        // 0x115638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115634) {
            ctx->pc = 0x11569Cu;
            goto label_11569c;
        }
    }
    ctx->pc = 0x11563Cu;
    // 0x11563c: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x11563cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x115640: 0xae408760  sw          $zero, -0x78A0($s2)
    ctx->pc = 0x115640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294936416), GPR_U32(ctx, 0));
    // 0x115644: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115648: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x115648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11564c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11564cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x115654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115658: 0x26299c40  addiu       $t1, $s1, -0x63C0
    ctx->pc = 0x115658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941760));
    // 0x11565c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11565cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115660: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115660u;
    SET_GPR_U32(ctx, 31, 0x115668u);
    ctx->pc = 0x115664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115660u;
    // 0x115664: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x115660u, 0x115668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115668u;
label_115668:
    // 0x115668: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115668u;
    {
        const bool branch_taken_0x115668 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115668u;
        // 0x11566c: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115668) {
            ctx->pc = 0x11567Cu;
            goto label_11567c;
        }
    }
    ctx->pc = 0x115670u;
    // 0x115670: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x115670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x115674: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x115674u;
    {
        const bool branch_taken_0x115674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115674u;
        // 0x115678: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115674) {
            ctx->pc = 0x1156D0u;
            goto label_1156d0;
        }
    }
    ctx->pc = 0x11567Cu;
label_11567c:
    // 0x11567c: 0x26279c40  addiu       $a3, $s1, -0x63C0
    ctx->pc = 0x11567cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941760));
    // 0x115680: 0x24669e68  addiu       $a2, $v1, -0x6198
    ctx->pc = 0x115680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942312));
    // 0x115684: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x115684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x115688: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x115688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x11568c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x11568cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x115690: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x115690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x115694: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x115694u;
    {
        const bool branch_taken_0x115694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115694u;
        // 0x115698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115694) {
            ctx->pc = 0x1156D0u;
            goto label_1156d0;
        }
    }
    ctx->pc = 0x11569Cu;
label_11569c:
    // 0x11569c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1156a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1156a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1156a4: 0x0  nop
    ctx->pc = 0x1156a4u;
    // NOP
label_1156a8:
    // 0x1156a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1156a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1156ac: 0x0  nop
    ctx->pc = 0x1156acu;
    // NOP
    // 0x1156b0: 0x0  nop
    ctx->pc = 0x1156b0u;
    // NOP
    // 0x1156b4: 0x0  nop
    ctx->pc = 0x1156b4u;
    // NOP
    // 0x1156b8: 0x0  nop
    ctx->pc = 0x1156b8u;
    // NOP
    // 0x1156bc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1156BCu;
    {
        const bool branch_taken_0x1156bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1156bc) {
            ctx->pc = 0x1156A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1156a8;
        }
    }
    ctx->pc = 0x1156C4u;
    // 0x1156c4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1156C4u;
    {
        const bool branch_taken_0x1156c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1156C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156C4u;
        // 0x1156c8: 0x26309e40  addiu       $s0, $s1, -0x61C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156c4) {
            ctx->pc = 0x115610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_115610;
        }
    }
    ctx->pc = 0x1156CCu;
label_1156cc:
    // 0x1156cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1156ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1156d0:
    // 0x1156d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1156d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1156d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1156d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1156d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1156d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1156dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1156dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1156e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1156E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1156E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156E0u;
        // 0x1156e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1156E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1156E8u;
}
