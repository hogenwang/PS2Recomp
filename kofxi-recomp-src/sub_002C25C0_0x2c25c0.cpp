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

// Function: sub_002C25C0
// Address: 0x2c25c0 - 0x2c27b8
void sub_002C25C0_0x2c25c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C25C0_0x2c25c0");
#endif

    switch (ctx->pc) {
        case 0x2c260cu: goto label_2c260c;
        case 0x2c2654u: goto label_2c2654;
        case 0x2c267cu: goto label_2c267c;
        case 0x2c26c8u: goto label_2c26c8;
        case 0x2c26e8u: goto label_2c26e8;
        case 0x2c271cu: goto label_2c271c;
        case 0x2c2728u: goto label_2c2728;
        case 0x2c2768u: goto label_2c2768;
        case 0x2c2778u: goto label_2c2778;
        case 0x2c279cu: goto label_2c279c;
        default: break;
    }

    ctx->pc = 0x2c25c0u;

    // 0x2c25c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c25c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c25c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c25c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2c25c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2c25cc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2c25ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2c25d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c25d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c25d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c25d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25dc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c25dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c25e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c25e4: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c25e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c25e8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c25ec: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2c25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x2c25f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C25F0u;
    {
        const bool branch_taken_0x2c25f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25F0u;
        // 0x2c25f4: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25f0) {
            ctx->pc = 0x2C2604u;
            goto label_2c2604;
        }
    }
    ctx->pc = 0x2C25F8u;
    // 0x2c25f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c25fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C25FCu;
    {
        const bool branch_taken_0x2c25fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25FCu;
        // 0x2c2600: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25fc) {
            ctx->pc = 0x2C2624u;
            goto label_2c2624;
        }
    }
    ctx->pc = 0x2C2604u;
label_2c2604:
    // 0x2c2604: 0xc0b09ee  jal         func_2C27B8
    ctx->pc = 0x2C2604u;
    SET_GPR_U32(ctx, 31, 0x2C260Cu);
    ctx->pc = 0x2C27B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C27B8u, 0x2C2604u, 0x2C260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C260Cu;
label_2c260c:
    // 0x2c260c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c260cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2610: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2610u;
    {
        const bool branch_taken_0x2c2610 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2610) {
            ctx->pc = 0x2C2614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2610u;
            // 0x2c2614: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2624u;
            goto label_2c2624;
        }
    }
    ctx->pc = 0x2C2618u;
    // 0x2c2618: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2c2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2c261c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2C261Cu;
    {
        const bool branch_taken_0x2c261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C261Cu;
        // 0x2c2620: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c261c) {
            ctx->pc = 0x2C2750u;
            goto label_2c2750;
        }
    }
    ctx->pc = 0x2C2624u;
label_2c2624:
    // 0x2c2624: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c2624u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2628u;
    {
        const bool branch_taken_0x2c2628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2628u;
        // 0x2c262c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2628) {
            ctx->pc = 0x2C2640u;
            goto label_2c2640;
        }
    }
    ctx->pc = 0x2C2630u;
    // 0x2c2630: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c2630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c2634: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c2634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c2638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2638u;
    {
        const bool branch_taken_0x2c2638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2638u;
        // 0x2c263c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2638) {
            ctx->pc = 0x2C2644u;
            goto label_2c2644;
        }
    }
    ctx->pc = 0x2C2640u;
label_2c2640:
    // 0x2c2640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2644:
    // 0x2c2644: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c2644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c2648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c264c: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C264Cu;
    SET_GPR_U32(ctx, 31, 0x2C2654u);
    ctx->pc = 0x2C2650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C264Cu;
    // 0x2c2650: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x2C264Cu, 0x2C2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2654u;
label_2c2654:
    // 0x2c2654: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2654u;
    {
        const bool branch_taken_0x2c2654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2654u;
        // 0x2c2658: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2654) {
            ctx->pc = 0x2C2668u;
            goto label_2c2668;
        }
    }
    ctx->pc = 0x2C265Cu;
    // 0x2c265c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2c265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2c2660: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2C2660u;
    {
        const bool branch_taken_0x2c2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2660u;
        // 0x2c2664: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2660) {
            ctx->pc = 0x2C2750u;
            goto label_2c2750;
        }
    }
    ctx->pc = 0x2C2668u;
label_2c2668:
    // 0x2c2668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c266c: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c266cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2670: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2674: 0xc0a0330  jal         func_280CC0
    ctx->pc = 0x2C2674u;
    SET_GPR_U32(ctx, 31, 0x2C267Cu);
    ctx->pc = 0x2C2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2674u;
    // 0x2c2678: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CC0u, 0x2C2674u, 0x2C267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C267Cu;
label_2c267c:
    // 0x2c267c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C267Cu;
    {
        const bool branch_taken_0x2c267c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C267Cu;
        // 0x2c2680: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c267c) {
            ctx->pc = 0x2C2690u;
            goto label_2c2690;
        }
    }
    ctx->pc = 0x2C2684u;
    // 0x2c2684: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2c2684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c2688: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2C2688u;
    {
        const bool branch_taken_0x2c2688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2688u;
        // 0x2c268c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2688) {
            ctx->pc = 0x2C2750u;
            goto label_2c2750;
        }
    }
    ctx->pc = 0x2C2690u;
label_2c2690:
    // 0x2c2690: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2c2690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2694: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x2c2694u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2698: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x2c2698u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c269c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2c269cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2c26a0: 0x82282f  dsubu       $a1, $a0, $v0
    ctx->pc = 0x2c26a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x2c26a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c26a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c26a8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C26A8u;
    {
        const bool branch_taken_0x2c26a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26A8u;
        // 0x2c26ac: 0xffa50018  sd          $a1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26a8) {
            ctx->pc = 0x2C26C0u;
            goto label_2c26c0;
        }
    }
    ctx->pc = 0x2C26B0u;
    // 0x2c26b0: 0x1ca00009  bgtz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C26B0u;
    {
        const bool branch_taken_0x2c26b0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2C26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26B0u;
        // 0x2c26b4: 0xdfa60018  ld          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26b0) {
            ctx->pc = 0x2C26D8u;
            goto label_2c26d8;
        }
    }
    ctx->pc = 0x2C26B8u;
    // 0x2c26b8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C26B8u;
    {
        const bool branch_taken_0x2c26b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c26b8) {
            ctx->pc = 0x2C2714u;
            goto label_2c2714;
        }
    }
    ctx->pc = 0x2C26C0u;
label_2c26c0:
    // 0x2c26c0: 0xc0a0542  jal         func_281508
    ctx->pc = 0x2C26C0u;
    SET_GPR_U32(ctx, 31, 0x2C26C8u);
    ctx->pc = 0x2C26C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26C0u;
    // 0x2c26c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281508u, 0x2C26C0u, 0x2C26C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26C8u;
label_2c26c8:
    // 0x2c26c8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C26C8u;
    {
        const bool branch_taken_0x2c26c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26C8u;
        // 0x2c26cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26c8) {
            ctx->pc = 0x2C2714u;
            goto label_2c2714;
        }
    }
    ctx->pc = 0x2C26D0u;
    // 0x2c26d0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2c26d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c26d4: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c26d4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c26d8:
    // 0x2c26d8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c26d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c26dc: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x2c26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x2c26e0: 0xc0a0b34  jal         func_282CD0
    ctx->pc = 0x2C26E0u;
    SET_GPR_U32(ctx, 31, 0x2C26E8u);
    ctx->pc = 0x2C26E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26E0u;
    // 0x2c26e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282CD0u, 0x2C26E0u, 0x2C26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26E8u;
label_2c26e8:
    // 0x2c26e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C26E8u;
    {
        const bool branch_taken_0x2c26e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26E8u;
        // 0x2c26ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26e8) {
            ctx->pc = 0x2C26FCu;
            goto label_2c26fc;
        }
    }
    ctx->pc = 0x2C26F0u;
    // 0x2c26f0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2c26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2c26f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C26F4u;
    {
        const bool branch_taken_0x2c26f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26F4u;
        // 0x2c26f8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26f4) {
            ctx->pc = 0x2C2750u;
            goto label_2c2750;
        }
    }
    ctx->pc = 0x2C26FCu;
label_2c26fc:
    // 0x2c26fc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c26fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2700: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c2700u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2704: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c2704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c2708: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c2708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c270c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C270Cu;
    {
        const bool branch_taken_0x2c270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C270Cu;
        // 0x2c2710: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c270c) {
            ctx->pc = 0x2C2720u;
            goto label_2c2720;
        }
    }
    ctx->pc = 0x2C2714u;
label_2c2714:
    // 0x2c2714: 0xc0a0c14  jal         func_283050
    ctx->pc = 0x2C2714u;
    SET_GPR_U32(ctx, 31, 0x2C271Cu);
    ctx->pc = 0x2C2718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2714u;
    // 0x2c2718: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283050u, 0x2C2714u, 0x2C271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C271Cu;
label_2c271c:
    // 0x2c271c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2c271cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2c2720:
    // 0x2c2720: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C2720u;
    SET_GPR_U32(ctx, 31, 0x2C2728u);
    ctx->pc = 0x2C2724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2720u;
    // 0x2c2724: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x2C2720u, 0x2C2728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2728u;
label_2c2728:
    // 0x2c2728: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2728u;
    {
        const bool branch_taken_0x2c2728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2728u;
        // 0x2c272c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2728) {
            ctx->pc = 0x2C273Cu;
            goto label_2c273c;
        }
    }
    ctx->pc = 0x2C2730u;
    // 0x2c2730: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2c2730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c2734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2734u;
    {
        const bool branch_taken_0x2c2734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2734u;
        // 0x2c2738: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2734) {
            ctx->pc = 0x2C2750u;
            goto label_2c2750;
        }
    }
    ctx->pc = 0x2C273Cu;
label_2c273c:
    // 0x2c273c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C273Cu;
    {
        const bool branch_taken_0x2c273c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C273Cu;
        // 0x2c2740: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c273c) {
            ctx->pc = 0x2C2748u;
            goto label_2c2748;
        }
    }
    ctx->pc = 0x2C2744u;
    // 0x2c2744: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c2744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2c2748:
    // 0x2c2748: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C2748u;
    {
        const bool branch_taken_0x2c2748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2748u;
        // 0x2c274c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2748) {
            ctx->pc = 0x2C27A0u;
            goto label_2c27a0;
        }
    }
    ctx->pc = 0x2C2750u;
label_2c2750:
    // 0x2c2750: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c2750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2754: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c2754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c2758: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x2c2758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2c275c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c275cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2760: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C2760u;
    SET_GPR_U32(ctx, 31, 0x2C2768u);
    ctx->pc = 0x2C2764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2760u;
    // 0x2c2764: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C2760u, 0x2C2768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2768u;
label_2c2768:
    // 0x2c2768: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c2768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c276c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c276cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c2770: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C2770u;
    SET_GPR_U32(ctx, 31, 0x2C2778u);
    ctx->pc = 0x2C2774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2770u;
    // 0x2c2774: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281CE0u, 0x2C2770u, 0x2C2778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2778u;
label_2c2778:
    // 0x2c2778: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2778u;
    {
        const bool branch_taken_0x2c2778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2778u;
        // 0x2c277c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2778) {
            ctx->pc = 0x2C27A0u;
            goto label_2c27a0;
        }
    }
    ctx->pc = 0x2C2780u;
    // 0x2c2780: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2780u;
    {
        const bool branch_taken_0x2c2780 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2780) {
            ctx->pc = 0x2C2794u;
            goto label_2c2794;
        }
    }
    ctx->pc = 0x2C2788u;
    // 0x2c2788: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c2788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c278c: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C278Cu;
    {
        const bool branch_taken_0x2c278c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C2790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C278Cu;
        // 0x2c2790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c278c) {
            ctx->pc = 0x2C27A0u;
            goto label_2c27a0;
        }
    }
    ctx->pc = 0x2C2794u;
label_2c2794:
    // 0x2c2794: 0xc0b0a08  jal         func_2C2820
    ctx->pc = 0x2C2794u;
    SET_GPR_U32(ctx, 31, 0x2C279Cu);
    ctx->pc = 0x2C2798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2794u;
    // 0x2c2798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2820u, 0x2C2794u, 0x2C279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C279Cu;
label_2c279c:
    // 0x2c279c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c279cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c27a0:
    // 0x2c27a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c27a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c27a4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2c27a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c27a8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2c27a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c27ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c27acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c27b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C27B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27B0u;
        // 0x2c27b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C27B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C27B8u;
}
