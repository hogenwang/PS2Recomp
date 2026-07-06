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

// Function: sub_00262830
// Address: 0x262830 - 0x262878
void sub_00262830_0x262830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262830_0x262830");
#endif

    switch (ctx->pc) {
        case 0x262830u: goto label_262830;
        case 0x262834u: goto label_262834;
        case 0x262838u: goto label_262838;
        case 0x26283cu: goto label_26283c;
        case 0x262840u: goto label_262840;
        case 0x262844u: goto label_262844;
        case 0x262848u: goto label_262848;
        case 0x26284cu: goto label_26284c;
        case 0x262850u: goto label_262850;
        case 0x262854u: goto label_262854;
        case 0x262858u: goto label_262858;
        case 0x26285cu: goto label_26285c;
        case 0x262860u: goto label_262860;
        case 0x262864u: goto label_262864;
        case 0x262868u: goto label_262868;
        case 0x26286cu: goto label_26286c;
        case 0x262870u: goto label_262870;
        case 0x262874u: goto label_262874;
        default: break;
    }

    ctx->pc = 0x262830u;

label_262830:
    // 0x262830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_262834:
    // 0x262834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_262838:
    // 0x262838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26283c:
    // 0x26283c: 0xc098a02  jal         func_262808
label_262840:
    if (ctx->pc == 0x262840u) {
        ctx->pc = 0x262840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26283Cu;
        // 0x262840: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262844u;
        goto label_262844;
    }
    ctx->pc = 0x26283Cu;
    SET_GPR_U32(ctx, 31, 0x262844u);
    ctx->pc = 0x262840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26283Cu;
    // 0x262840: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262808u, 0x26283Cu, 0x262844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262844u;
label_262844:
    // 0x262844: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_262848:
    if (ctx->pc == 0x262848u) {
        ctx->pc = 0x262848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262844u;
        // 0x262848: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26284Cu;
        goto label_26284c;
    }
    ctx->pc = 0x262844u;
    {
        const bool branch_taken_0x262844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262844) {
            ctx->pc = 0x262848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262844u;
            // 0x262848: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262854u;
            goto label_262854;
        }
    }
    ctx->pc = 0x26284Cu;
label_26284c:
    // 0x26284c: 0x10000005  b           . + 4 + (0x5 << 2)
label_262850:
    if (ctx->pc == 0x262850u) {
        ctx->pc = 0x262850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26284Cu;
        // 0x262850: 0x2402ffe4  addiu       $v0, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262854u;
        goto label_262854;
    }
    ctx->pc = 0x26284Cu;
    {
        const bool branch_taken_0x26284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26284Cu;
        // 0x262850: 0x2402ffe4  addiu       $v0, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26284c) {
            ctx->pc = 0x262864u;
            goto label_262864;
        }
    }
    ctx->pc = 0x262854u;
label_262854:
    // 0x262854: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x262854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_262858:
    // 0x262858: 0x40f809  jalr        $v0
label_26285c:
    if (ctx->pc == 0x26285Cu) {
        ctx->pc = 0x26285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262858u;
        // 0x26285c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262860u;
        goto label_262860;
    }
    ctx->pc = 0x262858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262860u);
        ctx->pc = 0x26285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262858u;
        // 0x26285c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262858u, 0x262860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262860u;
label_262860:
    // 0x262860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262864:
    // 0x262864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_262868:
    // 0x262868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26286c:
    // 0x26286c: 0x3e00008  jr          $ra
label_262870:
    if (ctx->pc == 0x262870u) {
        ctx->pc = 0x262870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26286Cu;
        // 0x262870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262874u;
        goto label_262874;
    }
    ctx->pc = 0x26286Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26286Cu;
        // 0x262870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26286Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262874u;
label_262874:
    // 0x262874: 0x0  nop
    ctx->pc = 0x262874u;
    // NOP
}
