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

// Function: sub_002A03F0
// Address: 0x2a03f0 - 0x2a0440
void sub_002A03F0_0x2a03f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A03F0_0x2a03f0");
#endif

    switch (ctx->pc) {
        case 0x2a03f0u: goto label_2a03f0;
        case 0x2a03f4u: goto label_2a03f4;
        case 0x2a03f8u: goto label_2a03f8;
        case 0x2a03fcu: goto label_2a03fc;
        case 0x2a0400u: goto label_2a0400;
        case 0x2a0404u: goto label_2a0404;
        case 0x2a0408u: goto label_2a0408;
        case 0x2a040cu: goto label_2a040c;
        case 0x2a0410u: goto label_2a0410;
        case 0x2a0414u: goto label_2a0414;
        case 0x2a0418u: goto label_2a0418;
        case 0x2a041cu: goto label_2a041c;
        case 0x2a0420u: goto label_2a0420;
        case 0x2a0424u: goto label_2a0424;
        case 0x2a0428u: goto label_2a0428;
        case 0x2a042cu: goto label_2a042c;
        case 0x2a0430u: goto label_2a0430;
        case 0x2a0434u: goto label_2a0434;
        case 0x2a0438u: goto label_2a0438;
        case 0x2a043cu: goto label_2a043c;
        default: break;
    }

    ctx->pc = 0x2a03f0u;

label_2a03f0:
    // 0x2a03f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a03f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a03f4:
    // 0x2a03f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a03f8:
    // 0x2a03f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a03f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a03fc:
    // 0x2a03fc: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2a03fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a0400:
    // 0x2a0400: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x2a0400u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a0404:
    // 0x2a0404: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2a0404u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a0408:
    // 0x2a0408: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x2a0408u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a040c:
    // 0x2a040c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2a040cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a0410:
    // 0x2a0410: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a0410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0414:
    // 0x2a0414: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a0414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a0418:
    // 0x2a0418: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2a0418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2a041c:
    // 0x2a041c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x2a041cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2a0420:
    // 0x2a0420: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x2a0420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2a0424:
    // 0x2a0424: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x2a0424u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2a0428:
    // 0x2a0428: 0x40f809  jalr        $v0
label_2a042c:
    if (ctx->pc == 0x2A042Cu) {
        ctx->pc = 0x2A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0428u;
        // 0x2a042c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0430u;
        goto label_2a0430;
    }
    ctx->pc = 0x2A0428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0430u);
        ctx->pc = 0x2A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0428u;
        // 0x2a042c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0428u, 0x2A0430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0430u;
label_2a0430:
    // 0x2a0430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0434:
    // 0x2a0434: 0x3e00008  jr          $ra
label_2a0438:
    if (ctx->pc == 0x2A0438u) {
        ctx->pc = 0x2A0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0434u;
        // 0x2a0438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A043Cu;
        goto label_2a043c;
    }
    ctx->pc = 0x2A0434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0434u;
        // 0x2a0438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A043Cu;
label_2a043c:
    // 0x2a043c: 0x0  nop
    ctx->pc = 0x2a043cu;
    // NOP
    if (ctx->pc == 0x2a043cu) { ctx->pc = 0x2a0440u; }
}
