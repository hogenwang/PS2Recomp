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

// Function: sub_002F2630
// Address: 0x2f2630 - 0x2f2768
void sub_002F2630_0x2f2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2630_0x2f2630");
#endif

    switch (ctx->pc) {
        case 0x2f2660u: goto label_2f2660;
        case 0x2f2680u: goto label_2f2680;
        case 0x2f26a0u: goto label_2f26a0;
        case 0x2f26c0u: goto label_2f26c0;
        case 0x2f26dcu: goto label_2f26dc;
        case 0x2f26f0u: goto label_2f26f0;
        case 0x2f2710u: goto label_2f2710;
        case 0x2f2730u: goto label_2f2730;
        case 0x2f2750u: goto label_2f2750;
        default: break;
    }

    ctx->pc = 0x2f2630u;

    // 0x2f2630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f2630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f2634: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f2634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f263c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f263cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2640: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f2640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f2644: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2f2644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2f2648: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2648u;
    {
        const bool branch_taken_0x2f2648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2648u;
        // 0x2f264c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2648) {
            ctx->pc = 0x2F2664u;
            goto label_2f2664;
        }
    }
    ctx->pc = 0x2F2650u;
    // 0x2f2650: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2654: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f2654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f2658: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F2658u;
    SET_GPR_U32(ctx, 31, 0x2F2660u);
    ctx->pc = 0x2F265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2658u;
    // 0x2f265c: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F2658u, 0x2F2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2660u;
label_2f2660:
    // 0x2f2660: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2f2660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_2f2664:
    // 0x2f2664: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x2f2664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x2f2668: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2668u;
    {
        const bool branch_taken_0x2f2668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2668u;
        // 0x2f266c: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2668) {
            ctx->pc = 0x2F2688u;
            goto label_2f2688;
        }
    }
    ctx->pc = 0x2F2670u;
    // 0x2f2670: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2674: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f2674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f2678: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F2678u;
    SET_GPR_U32(ctx, 31, 0x2F2680u);
    ctx->pc = 0x2F267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2678u;
    // 0x2f267c: 0x24a51be0  addiu       $a1, $a1, 0x1BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F2678u, 0x2F2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2680u;
label_2f2680:
    // 0x2f2680: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2f2680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x2f2684: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x2f2684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_2f2688:
    // 0x2f2688: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2688u;
    {
        const bool branch_taken_0x2f2688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2688u;
        // 0x2f268c: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2688) {
            ctx->pc = 0x2F26A8u;
            goto label_2f26a8;
        }
    }
    ctx->pc = 0x2F2690u;
    // 0x2f2690: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2694: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f2694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f2698: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F2698u;
    SET_GPR_U32(ctx, 31, 0x2F26A0u);
    ctx->pc = 0x2F269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2698u;
    // 0x2f269c: 0x24a51c10  addiu       $a1, $a1, 0x1C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F2698u, 0x2F26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26A0u;
label_2f26a0:
    // 0x2f26a0: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2f26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x2f26a4: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x2f26a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_2f26a8:
    // 0x2f26a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F26A8u;
    {
        const bool branch_taken_0x2f26a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26A8u;
        // 0x2f26ac: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26a8) {
            ctx->pc = 0x2F26C8u;
            goto label_2f26c8;
        }
    }
    ctx->pc = 0x2F26B0u;
    // 0x2f26b0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f26b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f26b4: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f26b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f26b8: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F26B8u;
    SET_GPR_U32(ctx, 31, 0x2F26C0u);
    ctx->pc = 0x2F26BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26B8u;
    // 0x2f26bc: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F26B8u, 0x2F26C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26C0u;
label_2f26c0:
    // 0x2f26c0: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2f26c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x2f26c4: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x2f26c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2f26c8:
    // 0x2f26c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F26C8u;
    {
        const bool branch_taken_0x2f26c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26C8u;
        // 0x2f26cc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26c8) {
            ctx->pc = 0x2F26F4u;
            goto label_2f26f4;
        }
    }
    ctx->pc = 0x2F26D0u;
    // 0x2f26d0: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f26d4: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F26D4u;
    SET_GPR_U32(ctx, 31, 0x2F26DCu);
    ctx->pc = 0x2F26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26D4u;
    // 0x2f26d8: 0x24a51c38  addiu       $a1, $a1, 0x1C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F26D4u, 0x2F26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26DCu;
label_2f26dc:
    // 0x2f26dc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f26dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f26e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f26e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f26e4: 0x24a51c50  addiu       $a1, $a1, 0x1C50
    ctx->pc = 0x2f26e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7248));
    // 0x2f26e8: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F26E8u;
    SET_GPR_U32(ctx, 31, 0x2F26F0u);
    ctx->pc = 0x2F26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26E8u;
    // 0x2f26ec: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F26E8u, 0x2F26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26F0u;
label_2f26f0:
    // 0x2f26f0: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2f26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_2f26f4:
    // 0x2f26f4: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x2f26f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x2f26f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F26F8u;
    {
        const bool branch_taken_0x2f26f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26F8u;
        // 0x2f26fc: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26f8) {
            ctx->pc = 0x2F2718u;
            goto label_2f2718;
        }
    }
    ctx->pc = 0x2F2700u;
    // 0x2f2700: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2704: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f2704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f2708: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F2708u;
    SET_GPR_U32(ctx, 31, 0x2F2710u);
    ctx->pc = 0x2F270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2708u;
    // 0x2f270c: 0x24a51c60  addiu       $a1, $a1, 0x1C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F2708u, 0x2F2710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2710u;
label_2f2710:
    // 0x2f2710: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2f2710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x2f2714: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x2f2714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_2f2718:
    // 0x2f2718: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2718u;
    {
        const bool branch_taken_0x2f2718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2718u;
        // 0x2f271c: 0x32220040  andi        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2718) {
            ctx->pc = 0x2F2738u;
            goto label_2f2738;
        }
    }
    ctx->pc = 0x2F2720u;
    // 0x2f2720: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2724: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f2724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f2728: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F2728u;
    SET_GPR_U32(ctx, 31, 0x2F2730u);
    ctx->pc = 0x2F272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2728u;
    // 0x2f272c: 0x24a51c90  addiu       $a1, $a1, 0x1C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F2728u, 0x2F2730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2730u;
label_2f2730:
    // 0x2f2730: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2f2730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x2f2734: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x2f2734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
label_2f2738:
    // 0x2f2738: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2738u;
    {
        const bool branch_taken_0x2f2738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2738u;
        // 0x2f273c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2738) {
            ctx->pc = 0x2F2758u;
            goto label_2f2758;
        }
    }
    ctx->pc = 0x2F2740u;
    // 0x2f2740: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f2740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2744: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x2f2744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f2748: 0xc0bd5e0  jal         func_2F5780
    ctx->pc = 0x2F2748u;
    SET_GPR_U32(ctx, 31, 0x2F2750u);
    ctx->pc = 0x2F274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2748u;
    // 0x2f274c: 0x24a51cc8  addiu       $a1, $a1, 0x1CC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5780u, 0x2F2748u, 0x2F2750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2750u;
label_2f2750:
    // 0x2f2750: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x2f2750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x2f2754: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f2754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2758:
    // 0x2f2758: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f275c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f275cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2760: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2760u;
        // 0x2f2764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2768u;
}
