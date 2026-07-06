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

// Function: sub_002787B8
// Address: 0x2787b8 - 0x278888
void sub_002787B8_0x2787b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002787B8_0x2787b8");
#endif

    switch (ctx->pc) {
        case 0x2787f0u: goto label_2787f0;
        case 0x278804u: goto label_278804;
        case 0x278834u: goto label_278834;
        case 0x278848u: goto label_278848;
        case 0x278860u: goto label_278860;
        case 0x278884u: goto label_278884;
        default: break;
    }

    ctx->pc = 0x2787b8u;

    // 0x2787b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2787b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2787bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2787bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2787c0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2787c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2787c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2787c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2787c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2787ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2787d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2787d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2787d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2787d8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2787d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2787dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2787e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2787e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787e4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2787e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2787e8: 0xc09e11e  jal         func_278478
    ctx->pc = 0x2787E8u;
    SET_GPR_U32(ctx, 31, 0x2787F0u);
    ctx->pc = 0x2787ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2787E8u;
    // 0x2787ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278478u, 0x2787E8u, 0x2787F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787F0u;
label_2787f0:
    // 0x2787f0: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2787F0u;
    {
        const bool branch_taken_0x2787f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2787F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787F0u;
        // 0x2787f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2787f0) {
            ctx->pc = 0x278850u;
            goto label_278850;
        }
    }
    ctx->pc = 0x2787F8u;
    // 0x2787f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2787f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2787fc: 0xc09e15a  jal         func_278568
    ctx->pc = 0x2787FCu;
    SET_GPR_U32(ctx, 31, 0x278804u);
    ctx->pc = 0x278800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2787FCu;
    // 0x278800: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278568u, 0x2787FCu, 0x278804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278804u;
label_278804:
    // 0x278804: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278808: 0x4600017  bltz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x278808u;
    {
        const bool branch_taken_0x278808 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278808u;
        // 0x27880c: 0x2402ff96  addiu       $v0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278808) {
            ctx->pc = 0x278868u;
            goto label_278868;
        }
    }
    ctx->pc = 0x278810u;
    // 0x278810: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x278810u;
    {
        const bool branch_taken_0x278810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x278814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278810u;
        // 0x278814: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278810) {
            ctx->pc = 0x278824u;
            goto label_278824;
        }
    }
    ctx->pc = 0x278818u;
    // 0x278818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27881c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x27881cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x278820: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x278820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_278824:
    // 0x278824: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x278824u;
    {
        const bool branch_taken_0x278824 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x278824) {
            ctx->pc = 0x278840u;
            goto label_278840;
        }
    }
    ctx->pc = 0x27882Cu;
    // 0x27882c: 0xc09d244  jal         func_274910
    ctx->pc = 0x27882Cu;
    SET_GPR_U32(ctx, 31, 0x278834u);
    ctx->pc = 0x278830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27882Cu;
    // 0x278830: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274910u, 0x27882Cu, 0x278834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278834u;
label_278834:
    // 0x278834: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x278834u;
    {
        const bool branch_taken_0x278834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278834) {
            ctx->pc = 0x278858u;
            goto label_278858;
        }
    }
    ctx->pc = 0x27883Cu;
    // 0x27883c: 0x0  nop
    ctx->pc = 0x27883cu;
    // NOP
label_278840:
    // 0x278840: 0xc09e1b2  jal         func_2786C8
    ctx->pc = 0x278840u;
    SET_GPR_U32(ctx, 31, 0x278848u);
    ctx->pc = 0x278844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278840u;
    // 0x278844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2786C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786C8u, 0x278840u, 0x278848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278848u;
label_278848:
    // 0x278848: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278848u;
    {
        const bool branch_taken_0x278848 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x278848) {
            ctx->pc = 0x278858u;
            goto label_278858;
        }
    }
    ctx->pc = 0x278850u;
label_278850:
    // 0x278850: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278850u;
    {
        const bool branch_taken_0x278850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278850u;
        // 0x278854: 0x2402ff96  addiu       $v0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278850) {
            ctx->pc = 0x278868u;
            goto label_278868;
        }
    }
    ctx->pc = 0x278858u;
label_278858:
    // 0x278858: 0xc09e562  jal         func_279588
    ctx->pc = 0x278858u;
    SET_GPR_U32(ctx, 31, 0x278860u);
    ctx->pc = 0x27885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278858u;
    // 0x27885c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279588u, 0x278858u, 0x278860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278860u;
label_278860:
    // 0x278860: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x278860u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x278864: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x278864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_278868:
    // 0x278868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27886c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27886cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278874: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278878: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x278878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27887c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27887cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x278880: 0x3e00008  jr          $ra
label_278884:
    if (ctx->pc == 0x278884u) {
        ctx->pc = 0x278884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278880u;
        // 0x278884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278888u;
        goto label_fallthrough_0x278880;
    }
    ctx->pc = 0x278880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278880u;
        // 0x278884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x278880:
    ctx->pc = 0x278888u;
}
