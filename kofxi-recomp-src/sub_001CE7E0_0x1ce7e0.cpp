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

// Function: sub_001CE7E0
// Address: 0x1ce7e0 - 0x1ce888
void sub_001CE7E0_0x1ce7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE7E0_0x1ce7e0");
#endif

    switch (ctx->pc) {
        case 0x1ce7e0u: goto label_1ce7e0;
        case 0x1ce7e4u: goto label_1ce7e4;
        case 0x1ce7e8u: goto label_1ce7e8;
        case 0x1ce7ecu: goto label_1ce7ec;
        case 0x1ce7f0u: goto label_1ce7f0;
        case 0x1ce7f4u: goto label_1ce7f4;
        case 0x1ce7f8u: goto label_1ce7f8;
        case 0x1ce7fcu: goto label_1ce7fc;
        case 0x1ce800u: goto label_1ce800;
        case 0x1ce804u: goto label_1ce804;
        case 0x1ce808u: goto label_1ce808;
        case 0x1ce80cu: goto label_1ce80c;
        case 0x1ce810u: goto label_1ce810;
        case 0x1ce814u: goto label_1ce814;
        case 0x1ce818u: goto label_1ce818;
        case 0x1ce81cu: goto label_1ce81c;
        case 0x1ce820u: goto label_1ce820;
        case 0x1ce824u: goto label_1ce824;
        case 0x1ce828u: goto label_1ce828;
        case 0x1ce82cu: goto label_1ce82c;
        case 0x1ce830u: goto label_1ce830;
        case 0x1ce834u: goto label_1ce834;
        case 0x1ce838u: goto label_1ce838;
        case 0x1ce83cu: goto label_1ce83c;
        case 0x1ce840u: goto label_1ce840;
        case 0x1ce844u: goto label_1ce844;
        case 0x1ce848u: goto label_1ce848;
        case 0x1ce84cu: goto label_1ce84c;
        case 0x1ce850u: goto label_1ce850;
        case 0x1ce854u: goto label_1ce854;
        case 0x1ce858u: goto label_1ce858;
        case 0x1ce85cu: goto label_1ce85c;
        case 0x1ce860u: goto label_1ce860;
        case 0x1ce864u: goto label_1ce864;
        case 0x1ce868u: goto label_1ce868;
        case 0x1ce86cu: goto label_1ce86c;
        case 0x1ce870u: goto label_1ce870;
        case 0x1ce874u: goto label_1ce874;
        case 0x1ce878u: goto label_1ce878;
        case 0x1ce87cu: goto label_1ce87c;
        case 0x1ce880u: goto label_1ce880;
        case 0x1ce884u: goto label_1ce884;
        default: break;
    }

    ctx->pc = 0x1ce7e0u;

label_1ce7e0:
    // 0x1ce7e0: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1ce7e4:
    // 0x1ce7e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce7e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce7e8:
    // 0x1ce7e8: 0x8c427ff8  lw          $v0, 0x7FF8($v0)
    ctx->pc = 0x1ce7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32760)));
label_1ce7ec:
    // 0x1ce7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ce7f0:
    // 0x1ce7f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce7f4:
    // 0x1ce7f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ce7f8:
    if (ctx->pc == 0x1CE7F8u) {
        ctx->pc = 0x1CE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7F4u;
        // 0x1ce7f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE7FCu;
        goto label_1ce7fc;
    }
    ctx->pc = 0x1CE7F4u;
    {
        const bool branch_taken_0x1ce7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE7F4u;
        // 0x1ce7f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce7f4) {
            ctx->pc = 0x1CE810u;
            goto label_1ce810;
        }
    }
    ctx->pc = 0x1CE7FCu;
label_1ce7fc:
    // 0x1ce7fc: 0x40f809  jalr        $v0
label_1ce800:
    if (ctx->pc == 0x1CE800u) {
        ctx->pc = 0x1CE804u;
        goto label_1ce804;
    }
    ctx->pc = 0x1CE7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE804u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE7FCu, 0x1CE804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE804u;
label_1ce804:
    // 0x1ce804: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ce808:
    if (ctx->pc == 0x1CE808u) {
        ctx->pc = 0x1CE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE804u;
        // 0x1ce808: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE80Cu;
        goto label_1ce80c;
    }
    ctx->pc = 0x1CE804u;
    {
        const bool branch_taken_0x1ce804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE804u;
        // 0x1ce808: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce804) {
            ctx->pc = 0x1CE830u;
            goto label_1ce830;
        }
    }
    ctx->pc = 0x1CE80Cu;
label_1ce80c:
    // 0x1ce80c: 0x0  nop
    ctx->pc = 0x1ce80cu;
    // NOP
label_1ce810:
    // 0x1ce810: 0xc0736d2  jal         func_1CDB48
label_1ce814:
    if (ctx->pc == 0x1CE814u) {
        ctx->pc = 0x1CE818u;
        goto label_1ce818;
    }
    ctx->pc = 0x1CE810u;
    SET_GPR_U32(ctx, 31, 0x1CE818u);
    ctx->pc = 0x1CDB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB48u, 0x1CE810u, 0x1CE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE818u;
label_1ce818:
    // 0x1ce818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce81c:
    // 0x1ce81c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ce81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ce820:
    // 0x1ce820: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ce820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ce824:
    // 0x1ce824: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ce824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ce828:
    // 0x1ce828: 0xc0736d8  jal         func_1CDB60
label_1ce82c:
    if (ctx->pc == 0x1CE82Cu) {
        ctx->pc = 0x1CE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE828u;
        // 0x1ce82c: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE830u;
        goto label_1ce830;
    }
    ctx->pc = 0x1CE828u;
    SET_GPR_U32(ctx, 31, 0x1CE830u);
    ctx->pc = 0x1CE82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE828u;
    // 0x1ce82c: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB60u, 0x1CE828u, 0x1CE830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE830u;
label_1ce830:
    // 0x1ce830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ce830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce834:
    // 0x1ce834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce838:
    // 0x1ce838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ce838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ce83c:
    // 0x1ce83c: 0x3e00008  jr          $ra
label_1ce840:
    if (ctx->pc == 0x1CE840u) {
        ctx->pc = 0x1CE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE83Cu;
        // 0x1ce840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE844u;
        goto label_1ce844;
    }
    ctx->pc = 0x1CE83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE83Cu;
        // 0x1ce840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE844u;
label_1ce844:
    // 0x1ce844: 0x0  nop
    ctx->pc = 0x1ce844u;
    // NOP
label_1ce848:
    // 0x1ce848: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1ce84c:
    // 0x1ce84c: 0x24457ff8  addiu       $a1, $v0, 0x7FF8
    ctx->pc = 0x1ce84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32760));
label_1ce850:
    // 0x1ce850: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ce850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ce854:
    // 0x1ce854: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ce858:
    if (ctx->pc == 0x1CE858u) {
        ctx->pc = 0x1CE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE854u;
        // 0x1ce858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE85Cu;
        goto label_1ce85c;
    }
    ctx->pc = 0x1CE854u;
    {
        const bool branch_taken_0x1ce854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE854u;
        // 0x1ce858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce854) {
            ctx->pc = 0x1CE864u;
            goto label_1ce864;
        }
    }
    ctx->pc = 0x1CE85Cu;
label_1ce85c:
    // 0x1ce85c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ce85cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1ce860:
    // 0x1ce860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce864:
    // 0x1ce864: 0x3e00008  jr          $ra
label_1ce868:
    if (ctx->pc == 0x1CE868u) {
        ctx->pc = 0x1CE86Cu;
        goto label_1ce86c;
    }
    ctx->pc = 0x1CE864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE86Cu;
label_1ce86c:
    // 0x1ce86c: 0x0  nop
    ctx->pc = 0x1ce86cu;
    // NOP
label_1ce870:
    // 0x1ce870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ce874:
    // 0x1ce874: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ce874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce878:
    // 0x1ce878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ce87c:
    // 0x1ce87c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce880:
    // 0x1ce880: 0x8073a12  j           func_1CE848
label_1ce884:
    if (ctx->pc == 0x1CE884u) {
        ctx->pc = 0x1CE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE880u;
        // 0x1ce884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE888u;
        goto label_fallthrough_0x1ce880;
    }
    ctx->pc = 0x1CE880u;
    ctx->pc = 0x1CE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE880u;
    // 0x1ce884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE848u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1ce848;
label_fallthrough_0x1ce880:
    ctx->pc = 0x1CE888u;
}
