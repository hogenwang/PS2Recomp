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

// Function: sub_00203378
// Address: 0x203378 - 0x203440
void sub_00203378_0x203378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203378_0x203378");
#endif

    switch (ctx->pc) {
        case 0x2033d0u: goto label_2033d0;
        case 0x2033e0u: goto label_2033e0;
        case 0x2033f8u: goto label_2033f8;
        case 0x20340cu: goto label_20340c;
        default: break;
    }

    ctx->pc = 0x203378u;

    // 0x203378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20337c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x203384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x203388: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x203388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20338c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x203390: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x203390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x203394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203398: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x203398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20339c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2033a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2033a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2033a4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2033a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2033a8: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2033A8u;
    {
        const bool branch_taken_0x2033a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A8u;
        // 0x2033ac: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033a8) {
            ctx->pc = 0x20341Cu;
            goto label_20341c;
        }
    }
    ctx->pc = 0x2033B0u;
    // 0x2033b0: 0x58a0001b  blezl       $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2033B0u;
    {
        const bool branch_taken_0x2033b0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2033b0) {
            ctx->pc = 0x2033B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2033B0u;
            // 0x2033b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203420u;
            goto label_203420;
        }
    }
    ctx->pc = 0x2033B8u;
    // 0x2033b8: 0x58a00019  blezl       $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2033B8u;
    {
        const bool branch_taken_0x2033b8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2033b8) {
            ctx->pc = 0x2033BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2033B8u;
            // 0x2033bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203420u;
            goto label_203420;
        }
    }
    ctx->pc = 0x2033C0u;
    // 0x2033c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2033c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033c4: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x2033c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x2033c8: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x2033c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x2033cc: 0x0  nop
    ctx->pc = 0x2033ccu;
    // NOP
label_2033d0:
    // 0x2033d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2033d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033d4: 0x26a5f478  addiu       $a1, $s5, -0xB88
    ctx->pc = 0x2033d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964344));
    // 0x2033d8: 0xc049c22  jal         func_127088
    ctx->pc = 0x2033D8u;
    SET_GPR_U32(ctx, 31, 0x2033E0u);
    ctx->pc = 0x2033DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2033D8u;
    // 0x2033dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2033D8u, 0x2033E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033E0u;
label_2033e0:
    // 0x2033e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2033e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033e4: 0x2685f408  addiu       $a1, $s4, -0xBF8
    ctx->pc = 0x2033e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964232));
    // 0x2033e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2033E8u;
    {
        const bool branch_taken_0x2033e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2033ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033E8u;
        // 0x2033ec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033e8) {
            ctx->pc = 0x203410u;
            goto label_203410;
        }
    }
    ctx->pc = 0x2033F0u;
    // 0x2033f0: 0xc049c22  jal         func_127088
    ctx->pc = 0x2033F0u;
    SET_GPR_U32(ctx, 31, 0x2033F8u);
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2033F0u, 0x2033F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033F8u;
label_2033f8:
    // 0x2033f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2033F8u;
    {
        const bool branch_taken_0x2033f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2033f8) {
            ctx->pc = 0x2033FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2033F8u;
            // 0x2033fc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203414u;
            goto label_203414;
        }
    }
    ctx->pc = 0x203400u;
    // 0x203400: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x203400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x203404: 0xc080d10  jal         func_203440
    ctx->pc = 0x203404u;
    SET_GPR_U32(ctx, 31, 0x20340Cu);
    ctx->pc = 0x203408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203404u;
    // 0x203408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203440u, 0x203404u, 0x20340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20340Cu;
label_20340c:
    // 0x20340c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20340cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_203410:
    // 0x203410: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x203410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_203414:
    // 0x203414: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x203414u;
    {
        const bool branch_taken_0x203414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x203418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203414u;
        // 0x203418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203414) {
            ctx->pc = 0x2033D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2033d0;
        }
    }
    ctx->pc = 0x20341Cu;
label_20341c:
    // 0x20341c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20341cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203420:
    // 0x203420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x203424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x203428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20342c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20342cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203430: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x203430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203434: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x203434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203438: 0x3e00008  jr          $ra
    ctx->pc = 0x203438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203438u;
        // 0x20343c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203440u;
}
