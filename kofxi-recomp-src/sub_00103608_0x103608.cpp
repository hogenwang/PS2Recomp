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

// Function: sub_00103608
// Address: 0x103608 - 0x103690
void sub_00103608_0x103608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103608_0x103608");
#endif

    switch (ctx->pc) {
        case 0x103624u: goto label_103624;
        default: break;
    }

    ctx->pc = 0x103608u;

    // 0x103608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10360c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103614: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10361c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10361Cu;
    SET_GPR_U32(ctx, 31, 0x103624u);
    ctx->pc = 0x103620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10361Cu;
    // 0x103620: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10361Cu, 0x103624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103624u;
label_103624:
    // 0x103624: 0x7a080000  lq          $t0, 0x0($s0)
    ctx->pc = 0x103624u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103628: 0x7a090010  lq          $t1, 0x10($s0)
    ctx->pc = 0x103628u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10362c: 0x7a0a0020  lq          $t2, 0x20($s0)
    ctx->pc = 0x10362cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x103630: 0x7a0b0030  lq          $t3, 0x30($s0)
    ctx->pc = 0x103630u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x103634: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x103634u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x103638: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x103638u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10363c: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x10363cu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x103640: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x103640u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x103644: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x103644u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x103648: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x103648u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x10364c: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x10364cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x103650: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x103650u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x103654: 0x7e280000  sq          $t0, 0x0($s1)
    ctx->pc = 0x103654u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 8));
    // 0x103658: 0x7e290010  sq          $t1, 0x10($s1)
    ctx->pc = 0x103658u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 9));
    // 0x10365c: 0x7e2a0020  sq          $t2, 0x20($s1)
    ctx->pc = 0x10365cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 10));
    // 0x103660: 0x7e2b0030  sq          $t3, 0x30($s1)
    ctx->pc = 0x103660u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 11));
    // 0x103664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103664u;
    {
        const bool branch_taken_0x103664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103664u;
        // 0x103668: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103664) {
            ctx->pc = 0x10367Cu;
            goto label_10367c;
        }
    }
    ctx->pc = 0x10366Cu;
    // 0x10366c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10366cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103674: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x103674u;
    ctx->pc = 0x103678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103674u;
    // 0x103678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x10367Cu;
label_10367c:
    // 0x10367c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10367cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103684: 0x3e00008  jr          $ra
    ctx->pc = 0x103684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103684u;
        // 0x103688: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10368Cu;
    // 0x10368c: 0x0  nop
    ctx->pc = 0x10368cu;
    // NOP
    if (ctx->pc == 0x10368cu) { ctx->pc = 0x103690u; }
}
