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

// Function: sub_001F77C0
// Address: 0x1f77c0 - 0x1f7880
void sub_001F77C0_0x1f77c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F77C0_0x1f77c0");
#endif

    switch (ctx->pc) {
        case 0x1f77e4u: goto label_1f77e4;
        case 0x1f77f4u: goto label_1f77f4;
        case 0x1f7848u: goto label_1f7848;
        case 0x1f7858u: goto label_1f7858;
        default: break;
    }

    ctx->pc = 0x1f77c0u;

    // 0x1f77c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f77c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f77c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f77c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f77c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f77c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f77ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f77d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f77d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f77d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f77d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f77d8: 0x8e320048  lw          $s2, 0x48($s1)
    ctx->pc = 0x1f77d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f77dc: 0xc07de20  jal         func_1F7880
    ctx->pc = 0x1F77DCu;
    SET_GPR_U32(ctx, 31, 0x1F77E4u);
    ctx->pc = 0x1F77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77DCu;
    // 0x1f77e0: 0x8e30004c  lw          $s0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7880u, 0x1F77DCu, 0x1F77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77E4u;
label_1f77e4:
    // 0x1f77e4: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F77E4u;
    {
        const bool branch_taken_0x1f77e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f77e4) {
            ctx->pc = 0x1F77E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F77E4u;
            // 0x1f77e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7868u;
            goto label_1f7868;
        }
    }
    ctx->pc = 0x1F77ECu;
    // 0x1f77ec: 0xc07de4c  jal         func_1F7930
    ctx->pc = 0x1F77ECu;
    SET_GPR_U32(ctx, 31, 0x1F77F4u);
    ctx->pc = 0x1F77F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77ECu;
    // 0x1f77f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7930u, 0x1F77ECu, 0x1F77F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77F4u;
label_1f77f4:
    // 0x1f77f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f77f8: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F77F8u;
    {
        const bool branch_taken_0x1f77f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77F8u;
        // 0x1f77fc: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77f8) {
            ctx->pc = 0x1F7860u;
            goto label_1f7860;
        }
    }
    ctx->pc = 0x1F7800u;
    // 0x1f7800: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7800u;
    {
        const bool branch_taken_0x1f7800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7800u;
        // 0x1f7804: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7800) {
            ctx->pc = 0x1F7820u;
            goto label_1f7820;
        }
    }
    ctx->pc = 0x1F7808u;
    // 0x1f7808: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f780c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F780Cu;
    {
        const bool branch_taken_0x1f780c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F780Cu;
        // 0x1f7810: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f780c) {
            ctx->pc = 0x1F7838u;
            goto label_1f7838;
        }
    }
    ctx->pc = 0x1F7814u;
    // 0x1f7814: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7814u;
    {
        const bool branch_taken_0x1f7814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7814u;
        // 0x1f7818: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7814) {
            ctx->pc = 0x1F786Cu;
            goto label_1f786c;
        }
    }
    ctx->pc = 0x1F781Cu;
    // 0x1f781c: 0x0  nop
    ctx->pc = 0x1f781cu;
    // NOP
label_1f7820:
    // 0x1f7820: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7820u;
    {
        const bool branch_taken_0x1f7820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7820u;
        // 0x1f7824: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7820) {
            ctx->pc = 0x1F7840u;
            goto label_1f7840;
        }
    }
    ctx->pc = 0x1F7828u;
    // 0x1f7828: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7828u;
    {
        const bool branch_taken_0x1f7828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7828u;
        // 0x1f782c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7828) {
            ctx->pc = 0x1F7840u;
            goto label_1f7840;
        }
    }
    ctx->pc = 0x1F7830u;
    // 0x1f7830: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F7830u;
    {
        const bool branch_taken_0x1f7830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7830u;
        // 0x1f7834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7830) {
            ctx->pc = 0x1F786Cu;
            goto label_1f786c;
        }
    }
    ctx->pc = 0x1F7838u;
label_1f7838:
    // 0x1f7838: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F7838u;
    {
        const bool branch_taken_0x1f7838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7838u;
        // 0x1f783c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7838) {
            ctx->pc = 0x1F7864u;
            goto label_1f7864;
        }
    }
    ctx->pc = 0x1F7840u;
label_1f7840:
    // 0x1f7840: 0xc07df16  jal         func_1F7C58
    ctx->pc = 0x1F7840u;
    SET_GPR_U32(ctx, 31, 0x1F7848u);
    ctx->pc = 0x1F7844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7840u;
    // 0x1f7844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C58u, 0x1F7840u, 0x1F7848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7848u;
label_1f7848:
    // 0x1f7848: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7848u;
    {
        const bool branch_taken_0x1f7848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7848u;
        // 0x1f784c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7848) {
            ctx->pc = 0x1F7860u;
            goto label_1f7860;
        }
    }
    ctx->pc = 0x1F7850u;
    // 0x1f7850: 0xc07e32a  jal         func_1F8CA8
    ctx->pc = 0x1F7850u;
    SET_GPR_U32(ctx, 31, 0x1F7858u);
    ctx->pc = 0x1F7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7850u;
    // 0x1f7854: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8CA8u, 0x1F7850u, 0x1F7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7858u;
label_1f7858:
    // 0x1f7858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7858u;
    {
        const bool branch_taken_0x1f7858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7858u;
        // 0x1f785c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7858) {
            ctx->pc = 0x1F7868u;
            goto label_1f7868;
        }
    }
    ctx->pc = 0x1F7860u;
label_1f7860:
    // 0x1f7860: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1f7860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f7864:
    // 0x1f7864: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f7864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f7868:
    // 0x1f7868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f786c:
    // 0x1f786c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f786cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f7870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7874: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f7874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7878: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7878u;
        // 0x1f787c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7880u;
}
