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

// Function: sub_002D2568
// Address: 0x2d2568 - 0x2d2688
void sub_002D2568_0x2d2568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2568_0x2d2568");
#endif

    switch (ctx->pc) {
        case 0x2d25c4u: goto label_2d25c4;
        case 0x2d25e4u: goto label_2d25e4;
        case 0x2d25f0u: goto label_2d25f0;
        case 0x2d2618u: goto label_2d2618;
        case 0x2d2628u: goto label_2d2628;
        default: break;
    }

    ctx->pc = 0x2d2568u;

    // 0x2d2568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d2568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d256c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2570: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d2570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d2574: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d2574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2578: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d2578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d257c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2d257cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2580: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d2580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d2584: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d2584u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d2588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d258c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d2590: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d2590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d2594: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d2598: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d2598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d259c: 0x8ed50004  lw          $s5, 0x4($s6)
    ctx->pc = 0x2d259cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d25a0: 0x8ef30004  lw          $s3, 0x4($s7)
    ctx->pc = 0x2d25a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2d25a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d25a8: 0x2b38021  addu        $s0, $s5, $s3
    ctx->pc = 0x2d25a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2d25ac: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2d25acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d25b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D25B0u;
    {
        const bool branch_taken_0x2d25b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d25b0) {
            ctx->pc = 0x2D25B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D25B0u;
            // 0x2d25b4: 0x8e540008  lw          $s4, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D25D0u;
            goto label_2d25d0;
        }
    }
    ctx->pc = 0x2D25B8u;
    // 0x2d25b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d25b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25bc: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D25BCu;
    SET_GPR_U32(ctx, 31, 0x2D25C4u);
    ctx->pc = 0x2D25C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25BCu;
    // 0x2d25c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D19A8u, 0x2D25BCu, 0x2D25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D25C4u;
label_2d25c4:
    // 0x2d25c4: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D25C4u;
    {
        const bool branch_taken_0x2d25c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d25c4) {
            ctx->pc = 0x2D25C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D25C4u;
            // 0x2d25c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D265Cu;
            goto label_2d265c;
        }
    }
    ctx->pc = 0x2D25CCu;
    // 0x2d25cc: 0x8e540008  lw          $s4, 0x8($s2)
    ctx->pc = 0x2d25ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2d25d0:
    // 0x2d25d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d25d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25d4: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x2d25d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d25d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d25d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25dc: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D25DCu;
    SET_GPR_U32(ctx, 31, 0x2D25E4u);
    ctx->pc = 0x2D25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D25DCu;
    // 0x2d25e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D25DCu, 0x2D25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D25E4u;
label_2d25e4:
    // 0x2d25e4: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D25E4u;
    {
        const bool branch_taken_0x2d25e4 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2d25e4) {
            ctx->pc = 0x2D2628u;
            goto label_2d2628;
        }
    }
    ctx->pc = 0x2D25ECu;
    // 0x2d25ec: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x2d25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2d25f0:
    // 0x2d25f0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2d25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d25f4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d25f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d25f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d25fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2600: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d2600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2604: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2d2604u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d260c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2d260cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2610: 0xc0b5264  jal         func_2D4990
    ctx->pc = 0x2D2610u;
    SET_GPR_U32(ctx, 31, 0x2D2618u);
    ctx->pc = 0x2D2614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2610u;
    // 0x2d2614: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4990u, 0x2D2610u, 0x2D2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2618u;
label_2d2618:
    // 0x2d2618: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x2d2618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d261c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D261Cu;
    {
        const bool branch_taken_0x2d261c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d261c) {
            ctx->pc = 0x2D2620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D261Cu;
            // 0x2d2620: 0x8ee30008  lw          $v1, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D25F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d25f0;
        }
    }
    ctx->pc = 0x2D2624u;
    // 0x2d2624: 0x0  nop
    ctx->pc = 0x2d2624u;
    // NOP
label_2d2628:
    // 0x2d2628: 0x5a000009  blezl       $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2628u;
    {
        const bool branch_taken_0x2d2628 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2d2628) {
            ctx->pc = 0x2D262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2628u;
            // 0x2d262c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2650u;
            goto label_2d2650;
        }
    }
    ctx->pc = 0x2D2630u;
    // 0x2d2630: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d2630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d2634: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2d2634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d2638: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d263c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d263cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2640: 0x0  nop
    ctx->pc = 0x2d2640u;
    // NOP
    // 0x2d2644: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D2644u;
    {
        const bool branch_taken_0x2d2644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2644) {
            ctx->pc = 0x2D2628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2628;
        }
    }
    ctx->pc = 0x2D264Cu;
    // 0x2d264c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d264cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d2650:
    // 0x2d2650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2654: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2d2654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x2d2658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d2658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d265c:
    // 0x2d265c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d265cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d2660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2664: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d2664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2668: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d2668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d266c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d266cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d2670: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d2670u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2674: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d2674u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2678: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d2678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d267c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D267Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D267Cu;
        // 0x2d2680: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D267Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2684u;
    // 0x2d2684: 0x0  nop
    ctx->pc = 0x2d2684u;
    // NOP
    if (ctx->pc == 0x2d2684u) { ctx->pc = 0x2d2688u; }
}
