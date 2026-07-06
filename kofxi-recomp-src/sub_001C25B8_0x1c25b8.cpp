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

// Function: sub_001C25B8
// Address: 0x1c25b8 - 0x1c26c0
void sub_001C25B8_0x1c25b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C25B8_0x1c25b8");
#endif

    switch (ctx->pc) {
        case 0x1c25f0u: goto label_1c25f0;
        case 0x1c2600u: goto label_1c2600;
        case 0x1c2660u: goto label_1c2660;
        case 0x1c2670u: goto label_1c2670;
        case 0x1c2698u: goto label_1c2698;
        default: break;
    }

    ctx->pc = 0x1c25b8u;

    // 0x1c25b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c25b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c25bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c25bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c25c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c25c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c25c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c25c8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1c25c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c25ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c25d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c25d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c25d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c25d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25dc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c25dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c25e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c25e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c25e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c25e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c25e8: 0xc0736d2  jal         func_1CDB48
    ctx->pc = 0x1C25E8u;
    SET_GPR_U32(ctx, 31, 0x1C25F0u);
    ctx->pc = 0x1C25ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25E8u;
    // 0x1c25ec: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB48u, 0x1C25E8u, 0x1C25F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25F0u;
label_1c25f0:
    // 0x1c25f0: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C25F0u;
    {
        const bool branch_taken_0x1c25f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1C25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25F0u;
        // 0x1c25f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25f0) {
            ctx->pc = 0x1C2628u;
            goto label_1c2628;
        }
    }
    ctx->pc = 0x1C25F8u;
    // 0x1c25f8: 0x3c0701bf  lui         $a3, 0x1BF
    ctx->pc = 0x1c25f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)447 << 16));
    // 0x1c25fc: 0x24e85900  addiu       $t0, $a3, 0x5900
    ctx->pc = 0x1c25fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 22784));
label_1c2600:
    // 0x1c2600: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1c2600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c2604: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c2604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c2608: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1c2608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c260c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1c260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1c2610: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c2610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2614: 0xd0282a  slt         $a1, $a2, $s0
    ctx->pc = 0x1c2614u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c2618: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C2618u;
    {
        const bool branch_taken_0x1c2618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2618u;
        // 0x1c261c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2618) {
            ctx->pc = 0x1C2600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2600;
        }
    }
    ctx->pc = 0x1C2620u;
    // 0x1c2620: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2620u;
    {
        const bool branch_taken_0x1c2620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2620u;
        // 0x1c2624: 0x3c1501bf  lui         $s5, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2620) {
            ctx->pc = 0x1C2630u;
            goto label_1c2630;
        }
    }
    ctx->pc = 0x1C2628u;
label_1c2628:
    // 0x1c2628: 0x3c0701bf  lui         $a3, 0x1BF
    ctx->pc = 0x1c2628u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)447 << 16));
    // 0x1c262c: 0x3c1501bf  lui         $s5, 0x1BF
    ctx->pc = 0x1c262cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)447 << 16));
label_1c2630:
    // 0x1c2630: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c2634: 0x26b25a00  addiu       $s2, $s5, 0x5A00
    ctx->pc = 0x1c2634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 23040));
    // 0x1c2638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c263c: 0x2484d910  addiu       $a0, $a0, -0x26F0
    ctx->pc = 0x1c263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957328));
    // 0x1c2640: 0x26650400  addiu       $a1, $s3, 0x400
    ctx->pc = 0x1c2640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x1c2644: 0x24e75900  addiu       $a3, $a3, 0x5900
    ctx->pc = 0x1c2644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22784));
    // 0x1c2648: 0x104080  sll         $t0, $s0, 2
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c264c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1c264cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2650: 0x115080  sll         $t2, $s1, 2
    ctx->pc = 0x1c2650u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2654: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c2654u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2658: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1C2658u;
    SET_GPR_U32(ctx, 31, 0x1C2660u);
    ctx->pc = 0x1C265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2658u;
    // 0x1c265c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1C2658u, 0x1C2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2660u;
label_1c2660:
    // 0x1c2660: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2660u;
    {
        const bool branch_taken_0x1c2660 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2660u;
        // 0x1c2664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2660) {
            ctx->pc = 0x1C2690u;
            goto label_1c2690;
        }
    }
    ctx->pc = 0x1C2668u;
    // 0x1c2668: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1c2668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c266c: 0x0  nop
    ctx->pc = 0x1c266cu;
    // NOP
label_1c2670:
    // 0x1c2670: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1c2670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c2674: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c2674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c2678: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1c2678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1c267c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c2680: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c2680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2684: 0xd1282a  slt         $a1, $a2, $s1
    ctx->pc = 0x1c2684u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1c2688: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C2688u;
    {
        const bool branch_taken_0x1c2688 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2688u;
        // 0x1c268c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2688) {
            ctx->pc = 0x1C2670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2670;
        }
    }
    ctx->pc = 0x1C2690u;
label_1c2690:
    // 0x1c2690: 0xc0736d8  jal         func_1CDB60
    ctx->pc = 0x1C2690u;
    SET_GPR_U32(ctx, 31, 0x1C2698u);
    ctx->pc = 0x1CDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB60u, 0x1C2690u, 0x1C2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2698u;
label_1c2698:
    // 0x1c2698: 0x8ea25a00  lw          $v0, 0x5A00($s5)
    ctx->pc = 0x1c2698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 23040)));
    // 0x1c269c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c269cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c26a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c26a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c26a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c26a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c26a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c26a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c26ac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c26acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c26b0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c26b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c26b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c26b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c26b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C26B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26B8u;
        // 0x1c26bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C26B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C26C0u;
}
