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

// Function: sub_00268370
// Address: 0x268370 - 0x268548
void sub_00268370_0x268370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268370_0x268370");
#endif

    switch (ctx->pc) {
        case 0x2683bcu: goto label_2683bc;
        case 0x2683d8u: goto label_2683d8;
        case 0x2683ecu: goto label_2683ec;
        case 0x268454u: goto label_268454;
        case 0x268498u: goto label_268498;
        case 0x2684dcu: goto label_2684dc;
        case 0x2684f8u: goto label_2684f8;
        case 0x268514u: goto label_268514;
        case 0x26851cu: goto label_26851c;
        default: break;
    }

    ctx->pc = 0x268370u;

    // 0x268370: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x268374: 0xffb502d0  sd          $s5, 0x2D0($sp)
    ctx->pc = 0x268374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 21));
    // 0x268378: 0xffb302b0  sd          $s3, 0x2B0($sp)
    ctx->pc = 0x268378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 19));
    // 0x26837c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26837cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268380: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x268380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
    // 0x268384: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x268384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268388: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x268388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
    // 0x26838c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26838cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268390: 0xffb10290  sd          $s1, 0x290($sp)
    ctx->pc = 0x268390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 17));
    // 0x268394: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x268394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268398: 0xffb00280  sd          $s0, 0x280($sp)
    ctx->pc = 0x268398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 16));
    // 0x26839c: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x26839cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2683a0: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x2683a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
    // 0x2683a4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2683a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683a8: 0xffbf02f0  sd          $ra, 0x2F0($sp)
    ctx->pc = 0x2683a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 31));
    // 0x2683ac: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2683acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2683b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2683b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2683b4: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x2683B4u;
    SET_GPR_U32(ctx, 31, 0x2683BCu);
    ctx->pc = 0x2683B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683B4u;
    // 0x2683b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x2683B4u, 0x2683BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683BCu;
label_2683bc:
    // 0x2683bc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2683bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683c0: 0x6c10007  bgez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2683C0u;
    {
        const bool branch_taken_0x2683c0 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x2683C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683C0u;
        // 0x2683c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683c0) {
            ctx->pc = 0x2683E0u;
            goto label_2683e0;
        }
    }
    ctx->pc = 0x2683C8u;
    // 0x2683c8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2683c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2683cc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2683ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2683d0: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2683D0u;
    SET_GPR_U32(ctx, 31, 0x2683D8u);
    ctx->pc = 0x2683D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683D0u;
    // 0x2683d4: 0x24a57c68  addiu       $a1, $a1, 0x7C68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2683D0u, 0x2683D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683D8u;
label_2683d8:
    // 0x2683d8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2683D8u;
    {
        const bool branch_taken_0x2683d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2683DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683D8u;
        // 0x2683dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683d8) {
            ctx->pc = 0x268520u;
            goto label_268520;
        }
    }
    ctx->pc = 0x2683E0u;
label_2683e0:
    // 0x2683e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2683e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2683e4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2683E4u;
    SET_GPR_U32(ctx, 31, 0x2683ECu);
    ctx->pc = 0x2683E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2683E4u;
    // 0x2683e8: 0x24060278  addiu       $a2, $zero, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2683E4u, 0x2683ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2683ECu;
label_2683ec:
    // 0x2683ec: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2683ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2683f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2683f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2683f4: 0x8c621a58  lw          $v0, 0x1A58($v1)
    ctx->pc = 0x2683f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6744)));
    // 0x2683f8: 0xa3b50003  sb          $s5, 0x3($sp)
    ctx->pc = 0x2683f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 21));
    // 0x2683fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2683fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268400: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x268400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x268404: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x268404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x268408: 0xac621a58  sw          $v0, 0x1A58($v1)
    ctx->pc = 0x268408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6744), GPR_U32(ctx, 2));
    // 0x26840c: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x26840Cu;
    {
        const bool branch_taken_0x26840c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x268410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26840Cu;
        // 0x268410: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26840c) {
            ctx->pc = 0x268454u;
            goto label_268454;
        }
    }
    ctx->pc = 0x268414u;
    // 0x268414: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x268414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x268418: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x268418u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26841c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26841cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x268420: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x268420u;
    {
        const bool branch_taken_0x268420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268420u;
        // 0x268424: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268420) {
            ctx->pc = 0x26843Cu;
            goto label_26843c;
        }
    }
    ctx->pc = 0x268428u;
    // 0x268428: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x268428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26842c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x268430: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x268430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x268434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268434u;
    {
        const bool branch_taken_0x268434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268434u;
        // 0x268438: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268434) {
            ctx->pc = 0x268440u;
            goto label_268440;
        }
    }
    ctx->pc = 0x26843Cu;
label_26843c:
    // 0x26843c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x26843cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_268440:
    // 0x268440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268444: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x268444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268448: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x268448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26844c: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x26844Cu;
    SET_GPR_U32(ctx, 31, 0x268454u);
    ctx->pc = 0x268450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26844Cu;
    // 0x268450: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3F0u, 0x26844Cu, 0x268454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268454u;
label_268454:
    // 0x268454: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x268454u;
    {
        const bool branch_taken_0x268454 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x268458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268454u;
        // 0x268458: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268454) {
            ctx->pc = 0x268498u;
            goto label_268498;
        }
    }
    ctx->pc = 0x26845Cu;
    // 0x26845c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x26845cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x268460: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x268460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x268464: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x268464u;
    {
        const bool branch_taken_0x268464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268464u;
        // 0x268468: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268464) {
            ctx->pc = 0x268480u;
            goto label_268480;
        }
    }
    ctx->pc = 0x26846Cu;
    // 0x26846c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x26846cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x268470: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x268470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x268474: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x268474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x268478: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268478u;
    {
        const bool branch_taken_0x268478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268478u;
        // 0x26847c: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268478) {
            ctx->pc = 0x268484u;
            goto label_268484;
        }
    }
    ctx->pc = 0x268480u;
label_268480:
    // 0x268480: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x268480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_268484:
    // 0x268484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268488: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x268488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26848c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26848cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268490: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x268490u;
    SET_GPR_U32(ctx, 31, 0x268498u);
    ctx->pc = 0x268494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268490u;
    // 0x268494: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3F0u, 0x268490u, 0x268498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268498u;
label_268498:
    // 0x268498: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x268498u;
    {
        const bool branch_taken_0x268498 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268498u;
        // 0x26849c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268498) {
            ctx->pc = 0x2684DCu;
            goto label_2684dc;
        }
    }
    ctx->pc = 0x2684A0u;
    // 0x2684a0: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x2684a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2684a4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2684a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2684a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2684A8u;
    {
        const bool branch_taken_0x2684a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684A8u;
        // 0x2684ac: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684a8) {
            ctx->pc = 0x2684C4u;
            goto label_2684c4;
        }
    }
    ctx->pc = 0x2684B0u;
    // 0x2684b0: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2684b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2684b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2684b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2684b8: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x2684b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2684bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2684BCu;
    {
        const bool branch_taken_0x2684bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684BCu;
        // 0x2684c0: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684bc) {
            ctx->pc = 0x2684C8u;
            goto label_2684c8;
        }
    }
    ctx->pc = 0x2684C4u;
label_2684c4:
    // 0x2684c4: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2684c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2684c8:
    // 0x2684c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2684c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2684ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2684d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684d4: 0xc08b4fc  jal         func_22D3F0
    ctx->pc = 0x2684D4u;
    SET_GPR_U32(ctx, 31, 0x2684DCu);
    ctx->pc = 0x2684D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2684D4u;
    // 0x2684d8: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3F0u, 0x2684D4u, 0x2684DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684DCu;
label_2684dc:
    // 0x2684dc: 0x23d8023  subu        $s0, $s1, $sp
    ctx->pc = 0x2684dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2684e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2684e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2684e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684e8: 0xa7b00000  sh          $s0, 0x0($sp)
    ctx->pc = 0x2684e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x2684ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2684ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2684f0: 0xc09754a  jal         func_25D528
    ctx->pc = 0x2684F0u;
    SET_GPR_U32(ctx, 31, 0x2684F8u);
    ctx->pc = 0x2684F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2684F0u;
    // 0x2684f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D528u, 0x2684F0u, 0x2684F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684F8u;
label_2684f8:
    // 0x2684f8: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2684f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2684fc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2684fcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x268500: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268500u;
    {
        const bool branch_taken_0x268500 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x268504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268500u;
        // 0x268504: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268500) {
            ctx->pc = 0x268514u;
            goto label_268514;
        }
    }
    ctx->pc = 0x268508u;
    // 0x268508: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x268508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26850c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26850Cu;
    SET_GPR_U32(ctx, 31, 0x268514u);
    ctx->pc = 0x268510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26850Cu;
    // 0x268510: 0x24a57cb0  addiu       $a1, $a1, 0x7CB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x26850Cu, 0x268514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268514u;
label_268514:
    // 0x268514: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x268514u;
    SET_GPR_U32(ctx, 31, 0x26851Cu);
    ctx->pc = 0x268518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268514u;
    // 0x268518: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x268514u, 0x26851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26851Cu;
label_26851c:
    // 0x26851c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26851cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268520:
    // 0x268520: 0xdfbf02f0  ld          $ra, 0x2F0($sp)
    ctx->pc = 0x268520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x268524: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x268524u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x268528: 0xdfb502d0  ld          $s5, 0x2D0($sp)
    ctx->pc = 0x268528u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x26852c: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x26852cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x268530: 0xdfb302b0  ld          $s3, 0x2B0($sp)
    ctx->pc = 0x268530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x268534: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x268534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x268538: 0xdfb10290  ld          $s1, 0x290($sp)
    ctx->pc = 0x268538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x26853c: 0xdfb00280  ld          $s0, 0x280($sp)
    ctx->pc = 0x26853cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x268540: 0x3e00008  jr          $ra
    ctx->pc = 0x268540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268540u;
        // 0x268544: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268548u;
}
