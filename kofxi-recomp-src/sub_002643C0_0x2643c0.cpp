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

// Function: sub_002643C0
// Address: 0x2643c0 - 0x264470
void sub_002643C0_0x2643c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002643C0_0x2643c0");
#endif

    switch (ctx->pc) {
        case 0x2643f0u: goto label_2643f0;
        case 0x264414u: goto label_264414;
        case 0x264424u: goto label_264424;
        case 0x264434u: goto label_264434;
        case 0x264440u: goto label_264440;
        case 0x26444cu: goto label_26444c;
        default: break;
    }

    ctx->pc = 0x2643c0u;

    // 0x2643c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2643c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2643c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2643c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2643c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2643c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2643cc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2643ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2643d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2643d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2643d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2643d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2643dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2643dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2643e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2643e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2643e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2643e8: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x2643E8u;
    SET_GPR_U32(ctx, 31, 0x2643F0u);
    ctx->pc = 0x2643ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2643E8u;
    // 0x2643ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x2643E8u, 0x2643F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2643F0u;
label_2643f0:
    // 0x2643f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2643f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643f4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2643F4u;
    {
        const bool branch_taken_0x2643f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643F4u;
        // 0x2643f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643f4) {
            ctx->pc = 0x264450u;
            goto label_264450;
        }
    }
    ctx->pc = 0x2643FCu;
    // 0x2643fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2643fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264400: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x264400u;
    {
        const bool branch_taken_0x264400 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x264404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264400u;
        // 0x264404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264400) {
            ctx->pc = 0x26442Cu;
            goto label_26442c;
        }
    }
    ctx->pc = 0x264408u;
    // 0x264408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26440c: 0xc09911c  jal         func_264470
    ctx->pc = 0x26440Cu;
    SET_GPR_U32(ctx, 31, 0x264414u);
    ctx->pc = 0x264410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26440Cu;
    // 0x264410: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264470u, 0x26440Cu, 0x264414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264414u;
label_264414:
    // 0x264414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264418: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x264418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26441c: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x26441Cu;
    SET_GPR_U32(ctx, 31, 0x264424u);
    ctx->pc = 0x264420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26441Cu;
    // 0x264420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x26441Cu, 0x264424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264424u;
label_264424:
    // 0x264424: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x264424u;
    {
        const bool branch_taken_0x264424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264424u;
        // 0x264428: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264424) {
            ctx->pc = 0x264450u;
            goto label_264450;
        }
    }
    ctx->pc = 0x26442Cu;
label_26442c:
    // 0x26442c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x26442Cu;
    SET_GPR_U32(ctx, 31, 0x264434u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x26442Cu, 0x264434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264434u;
label_264434:
    // 0x264434: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x264434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x264438: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x264438u;
    SET_GPR_U32(ctx, 31, 0x264440u);
    ctx->pc = 0x26443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264438u;
    // 0x26443c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x264438u, 0x264440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264440u;
label_264440:
    // 0x264440: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x264440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264444: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x264444u;
    SET_GPR_U32(ctx, 31, 0x26444Cu);
    ctx->pc = 0x264448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264444u;
    // 0x264448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x264444u, 0x26444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26444Cu;
label_26444c:
    // 0x26444c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26444cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264450:
    // 0x264450: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x264450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264454: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x264454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264458: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x264458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26445c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26445cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264460: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x264460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264468: 0x3e00008  jr          $ra
    ctx->pc = 0x264468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264468u;
        // 0x26446c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264470u;
}
