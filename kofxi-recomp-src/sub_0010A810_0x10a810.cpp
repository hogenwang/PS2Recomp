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

// Function: sub_0010A810
// Address: 0x10a810 - 0x10a888
void sub_0010A810_0x10a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A810_0x10a810");
#endif

    switch (ctx->pc) {
        case 0x10a810u: goto label_10a810;
        case 0x10a814u: goto label_10a814;
        case 0x10a818u: goto label_10a818;
        case 0x10a81cu: goto label_10a81c;
        case 0x10a820u: goto label_10a820;
        case 0x10a824u: goto label_10a824;
        case 0x10a828u: goto label_10a828;
        case 0x10a82cu: goto label_10a82c;
        case 0x10a830u: goto label_10a830;
        case 0x10a834u: goto label_10a834;
        case 0x10a838u: goto label_10a838;
        case 0x10a83cu: goto label_10a83c;
        case 0x10a840u: goto label_10a840;
        case 0x10a844u: goto label_10a844;
        case 0x10a848u: goto label_10a848;
        case 0x10a84cu: goto label_10a84c;
        case 0x10a850u: goto label_10a850;
        case 0x10a854u: goto label_10a854;
        case 0x10a858u: goto label_10a858;
        case 0x10a85cu: goto label_10a85c;
        case 0x10a860u: goto label_10a860;
        case 0x10a864u: goto label_10a864;
        case 0x10a868u: goto label_10a868;
        case 0x10a86cu: goto label_10a86c;
        case 0x10a870u: goto label_10a870;
        case 0x10a874u: goto label_10a874;
        case 0x10a878u: goto label_10a878;
        case 0x10a87cu: goto label_10a87c;
        case 0x10a880u: goto label_10a880;
        case 0x10a884u: goto label_10a884;
        default: break;
    }

    ctx->pc = 0x10a810u;

label_10a810:
    // 0x10a810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10a814:
    // 0x10a814: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10a814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a818:
    // 0x10a818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10a81c:
    // 0x10a81c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_10a820:
    if (ctx->pc == 0x10A820u) {
        ctx->pc = 0x10A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A81Cu;
        // 0x10a820: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A824u;
        goto label_10a824;
    }
    ctx->pc = 0x10A81Cu;
    {
        const bool branch_taken_0x10a81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A81Cu;
        // 0x10a820: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a81c) {
            ctx->pc = 0x10A874u;
            goto label_10a874;
        }
    }
    ctx->pc = 0x10A824u;
label_10a824:
    // 0x10a824: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x10a824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_10a828:
    // 0x10a828: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10a82c:
    if (ctx->pc == 0x10A82Cu) {
        ctx->pc = 0x10A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A828u;
        // 0x10a82c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A830u;
        goto label_10a830;
    }
    ctx->pc = 0x10A828u;
    {
        const bool branch_taken_0x10a828 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A828u;
        // 0x10a82c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a828) {
            ctx->pc = 0x10A874u;
            goto label_10a874;
        }
    }
    ctx->pc = 0x10A830u;
label_10a830:
    // 0x10a830: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10a830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10a834:
    // 0x10a834: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x10a834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_10a838:
    // 0x10a838: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x10a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_10a83c:
    // 0x10a83c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x10a83cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10a840:
    // 0x10a840: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_10a844:
    if (ctx->pc == 0x10A844u) {
        ctx->pc = 0x10A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A840u;
        // 0x10a844: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A848u;
        goto label_10a848;
    }
    ctx->pc = 0x10A840u;
    {
        const bool branch_taken_0x10a840 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A840u;
        // 0x10a844: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a840) {
            ctx->pc = 0x10A878u;
            goto label_10a878;
        }
    }
    ctx->pc = 0x10A848u;
label_10a848:
    // 0x10a848: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_10a84c:
    // 0x10a84c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10a84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10a850:
    // 0x10a850: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x10a850u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10a854:
    // 0x10a854: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10a854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10a858:
    // 0x10a858: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x10a858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_10a85c:
    // 0x10a85c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x10a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_10a860:
    // 0x10a860: 0xe0f809  jalr        $a3
label_10a864:
    if (ctx->pc == 0x10A864u) {
        ctx->pc = 0x10A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A860u;
        // 0x10a864: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A868u;
        goto label_10a868;
    }
    ctx->pc = 0x10A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10A868u);
        ctx->pc = 0x10A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A860u;
        // 0x10a864: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A860u, 0x10A868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A868u;
label_10a868:
    // 0x10a868: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x10a868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a86c:
    // 0x10a86c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x10a86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10a870:
    // 0x10a870: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10a870u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a874:
    // 0x10a874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10a878:
    // 0x10a878: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x10a878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_10a87c:
    // 0x10a87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10a880:
    // 0x10a880: 0x3e00008  jr          $ra
label_10a884:
    if (ctx->pc == 0x10A884u) {
        ctx->pc = 0x10A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A880u;
        // 0x10a884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A888u;
        goto label_fallthrough_0x10a880;
    }
    ctx->pc = 0x10A880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A880u;
        // 0x10a884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10a880:
    ctx->pc = 0x10A888u;
}
