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

// Function: sub_00271620
// Address: 0x271620 - 0x2716b8
void sub_00271620_0x271620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271620_0x271620");
#endif

    switch (ctx->pc) {
        case 0x271658u: goto label_271658;
        case 0x271670u: goto label_271670;
        default: break;
    }

    ctx->pc = 0x271620u;

    // 0x271620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x271620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x271624: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x271624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x271628: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x271628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x27162c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x271630: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x271630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271634: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x271634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x271638: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x271638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27163c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x27163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x271640: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x271640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x271644: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x271644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x271648: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x271648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27164c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x271650: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x271650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271654: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x271654u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271658:
    // 0x271658: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x271658u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27165c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27165cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271660: 0xde070008  ld          $a3, 0x8($s0)
    ctx->pc = 0x271660u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x271664: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x271664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271668: 0xc09c3a8  jal         func_270EA0
    ctx->pc = 0x271668u;
    SET_GPR_U32(ctx, 31, 0x271670u);
    ctx->pc = 0x27166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271668u;
    // 0x27166c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270EA0u, 0x271668u, 0x271670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271670u;
label_271670:
    // 0x271670: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x271670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x271674: 0xdfaf0000  ld          $t7, 0x0($sp)
    ctx->pc = 0x271674u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271678: 0x220702d  daddu       $t6, $s1, $zero
    ctx->pc = 0x271678u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27167c: 0x26f8826  xor         $s1, $s3, $t7
    ctx->pc = 0x27167cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 15));
    // 0x271680: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x271680u;
    {
        const bool branch_taken_0x271680 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x271684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271680u;
        // 0x271684: 0x1c0982d  daddu       $s3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271680) {
            ctx->pc = 0x271658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271658;
        }
    }
    ctx->pc = 0x271688u;
    // 0x271688: 0xfe8e0000  sd          $t6, 0x0($s4)
    ctx->pc = 0x271688u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 14));
    // 0x27168c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271690: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x271690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271694: 0xfeb10000  sd          $s1, 0x0($s5)
    ctx->pc = 0x271694u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 17));
    // 0x271698: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x271698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27169c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27169cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2716a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2716a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2716a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2716a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2716a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2716a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2716ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2716acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2716b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2716B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2716B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716B0u;
        // 0x2716b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2716B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2716B8u;
}
