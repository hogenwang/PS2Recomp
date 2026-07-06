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

// Function: sub_0024E818
// Address: 0x24e818 - 0x24e898
void sub_0024E818_0x24e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E818_0x24e818");
#endif

    switch (ctx->pc) {
        case 0x24e830u: goto label_24e830;
        case 0x24e838u: goto label_24e838;
        case 0x24e870u: goto label_24e870;
        case 0x24e880u: goto label_24e880;
        default: break;
    }

    ctx->pc = 0x24e818u;

    // 0x24e818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24e81c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24e81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24e820: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24e824: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x24e824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x24e828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24e82c: 0x0  nop
    ctx->pc = 0x24e82cu;
    // NOP
label_24e830:
    // 0x24e830: 0xc08c682  jal         func_231A08
    ctx->pc = 0x24E830u;
    SET_GPR_U32(ctx, 31, 0x24E838u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24E830u, 0x24E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E838u;
label_24e838:
    // 0x24e838: 0x8e3011a8  lw          $s0, 0x11A8($s1)
    ctx->pc = 0x24e838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4520)));
    // 0x24e83c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24e83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e840: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E840u;
    {
        const bool branch_taken_0x24e840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E840u;
        // 0x24e844: 0x262311a8  addiu       $v1, $s1, 0x11A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e840) {
            ctx->pc = 0x24E868u;
            goto label_24e868;
        }
    }
    ctx->pc = 0x24E848u;
    // 0x24e848: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24e848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24e84c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24E84Cu;
    {
        const bool branch_taken_0x24e84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E84Cu;
        // 0x24e850: 0xae2211a8  sw          $v0, 0x11A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e84c) {
            ctx->pc = 0x24E858u;
            goto label_24e858;
        }
    }
    ctx->pc = 0x24E854u;
    // 0x24e854: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x24e854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_24e858:
    // 0x24e858: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x24e858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x24e85c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24e860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24e860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24e864: 0x0  nop
    ctx->pc = 0x24e864u;
    // NOP
label_24e868:
    // 0x24e868: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24E868u;
    SET_GPR_U32(ctx, 31, 0x24E870u);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24E868u, 0x24E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E870u;
label_24e870:
    // 0x24e870: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E870u;
    {
        const bool branch_taken_0x24e870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E870u;
        // 0x24e874: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e870) {
            ctx->pc = 0x24E888u;
            goto label_24e888;
        }
    }
    ctx->pc = 0x24E878u;
    // 0x24e878: 0xc093a26  jal         func_24E898
    ctx->pc = 0x24E878u;
    SET_GPR_U32(ctx, 31, 0x24E880u);
    ctx->pc = 0x24E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E878u;
    // 0x24e87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E898u, 0x24E878u, 0x24E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E880u;
label_24e880:
    // 0x24e880: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x24E880u;
    {
        const bool branch_taken_0x24e880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e880) {
            ctx->pc = 0x24E830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24e830;
        }
    }
    ctx->pc = 0x24E888u;
label_24e888:
    // 0x24e888: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24e888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e890: 0x3e00008  jr          $ra
    ctx->pc = 0x24E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E890u;
        // 0x24e894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E898u;
}
