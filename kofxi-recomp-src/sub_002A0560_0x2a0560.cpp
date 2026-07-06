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

// Function: sub_002A0560
// Address: 0x2a0560 - 0x2a05b0
void sub_002A0560_0x2a0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0560_0x2a0560");
#endif

    switch (ctx->pc) {
        case 0x2a0560u: goto label_2a0560;
        case 0x2a0564u: goto label_2a0564;
        case 0x2a0568u: goto label_2a0568;
        case 0x2a056cu: goto label_2a056c;
        case 0x2a0570u: goto label_2a0570;
        case 0x2a0574u: goto label_2a0574;
        case 0x2a0578u: goto label_2a0578;
        case 0x2a057cu: goto label_2a057c;
        case 0x2a0580u: goto label_2a0580;
        case 0x2a0584u: goto label_2a0584;
        case 0x2a0588u: goto label_2a0588;
        case 0x2a058cu: goto label_2a058c;
        case 0x2a0590u: goto label_2a0590;
        case 0x2a0594u: goto label_2a0594;
        case 0x2a0598u: goto label_2a0598;
        case 0x2a059cu: goto label_2a059c;
        case 0x2a05a0u: goto label_2a05a0;
        case 0x2a05a4u: goto label_2a05a4;
        case 0x2a05a8u: goto label_2a05a8;
        case 0x2a05acu: goto label_2a05ac;
        default: break;
    }

    ctx->pc = 0x2a0560u;

label_2a0560:
    // 0x2a0560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a0564:
    // 0x2a0564: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a0564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0568:
    // 0x2a0568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a056c:
    // 0x2a056c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2a056cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a0570:
    // 0x2a0570: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2a0570u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a0574:
    // 0x2a0574: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2a0574u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a0578:
    // 0x2a0578: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x2a0578u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a057c:
    // 0x2a057c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2a057cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a0580:
    // 0x2a0580: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a0580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0584:
    // 0x2a0584: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a0588:
    // 0x2a0588: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2a0588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2a058c:
    // 0x2a058c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2a058cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2a0590:
    // 0x2a0590: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2a0590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2a0594:
    // 0x2a0594: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x2a0594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2a0598:
    // 0x2a0598: 0x40f809  jalr        $v0
label_2a059c:
    if (ctx->pc == 0x2A059Cu) {
        ctx->pc = 0x2A059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0598u;
        // 0x2a059c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05A0u;
        goto label_2a05a0;
    }
    ctx->pc = 0x2A0598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A05A0u);
        ctx->pc = 0x2A059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0598u;
        // 0x2a059c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0598u, 0x2A05A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A05A0u;
label_2a05a0:
    // 0x2a05a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a05a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a05a4:
    // 0x2a05a4: 0x3e00008  jr          $ra
label_2a05a8:
    if (ctx->pc == 0x2A05A8u) {
        ctx->pc = 0x2A05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05A4u;
        // 0x2a05a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A05ACu;
        goto label_2a05ac;
    }
    ctx->pc = 0x2A05A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05A4u;
        // 0x2a05a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A05A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A05ACu;
label_2a05ac:
    // 0x2a05ac: 0x0  nop
    ctx->pc = 0x2a05acu;
    // NOP
}
