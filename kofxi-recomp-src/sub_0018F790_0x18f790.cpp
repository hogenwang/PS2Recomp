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

// Function: sub_0018F790
// Address: 0x18f790 - 0x18f880
void sub_0018F790_0x18f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F790_0x18f790");
#endif

    switch (ctx->pc) {
        case 0x18f7acu: goto label_18f7ac;
        case 0x18f7b8u: goto label_18f7b8;
        case 0x18f818u: goto label_18f818;
        case 0x18f820u: goto label_18f820;
        case 0x18f82cu: goto label_18f82c;
        case 0x18f858u: goto label_18f858;
        case 0x18f860u: goto label_18f860;
        default: break;
    }

    ctx->pc = 0x18f790u;

    // 0x18f790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f7a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18f7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f7a4: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x18f7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x18f7a8: 0x2610cee0  addiu       $s0, $s0, -0x3120
    ctx->pc = 0x18f7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954720));
label_18f7ac:
    // 0x18f7ac: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x18f7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f7b0: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18F7B0u;
    SET_GPR_U32(ctx, 31, 0x18F7B8u);
    ctx->pc = 0x18F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7B0u;
    // 0x18f7b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18F7B0u, 0x18F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F7B8u;
label_18f7b8:
    // 0x18f7b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18f7bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18f7c0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18f7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18f7c4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18F7C4u;
    {
        const bool branch_taken_0x18f7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7C4u;
        // 0x18f7c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f7c4) {
            ctx->pc = 0x18F7ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18f7ac;
        }
    }
    ctx->pc = 0x18F7CCu;
    // 0x18f7cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f7d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f7d4: 0x8c47cee0  lw          $a3, -0x3120($v0)
    ctx->pc = 0x18f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954720)));
    // 0x18f7d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f7dc: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18f7e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f7e4: 0xac67cef8  sw          $a3, -0x3108($v1)
    ctx->pc = 0x18f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954744), GPR_U32(ctx, 7));
    // 0x18f7e8: 0x8c46cee4  lw          $a2, -0x311C($v0)
    ctx->pc = 0x18f7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954724)));
    // 0x18f7ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f7f0: 0x8c63ceec  lw          $v1, -0x3114($v1)
    ctx->pc = 0x18f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954732)));
    // 0x18f7f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f7f8: 0xac46cf04  sw          $a2, -0x30FC($v0)
    ctx->pc = 0x18f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954756), GPR_U32(ctx, 6));
    // 0x18f7fc: 0x8c86cee8  lw          $a2, -0x3118($a0)
    ctx->pc = 0x18f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954728)));
    // 0x18f800: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f804: 0xac43cf1c  sw          $v1, -0x30E4($v0)
    ctx->pc = 0x18f804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954780), GPR_U32(ctx, 3));
    // 0x18f808: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18f808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18f80c: 0xaca6cf10  sw          $a2, -0x30F0($a1)
    ctx->pc = 0x18f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954768), GPR_U32(ctx, 6));
    // 0x18f810: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x18F810u;
    SET_GPR_U32(ctx, 31, 0x18F818u);
    ctx->pc = 0x18F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F810u;
    // 0x18f814: 0x24844290  addiu       $a0, $a0, 0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x18F810u, 0x18F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F818u;
label_18f818:
    // 0x18f818: 0xc063d18  jal         func_18F460
    ctx->pc = 0x18F818u;
    SET_GPR_U32(ctx, 31, 0x18F820u);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x18F818u, 0x18F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F820u;
label_18f820:
    // 0x18f820: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18f820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18f824: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x18F824u;
    SET_GPR_U32(ctx, 31, 0x18F82Cu);
    ctx->pc = 0x18F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F824u;
    // 0x18f828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8B0u, 0x18F824u, 0x18F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F82Cu;
label_18f82c:
    // 0x18f82c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x18f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x18f830: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x18f830u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x18f834: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x18f834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x18f838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f840: 0x24c64290  addiu       $a2, $a2, 0x4290
    ctx->pc = 0x18f840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17040));
    // 0x18f844: 0x24e742a0  addiu       $a3, $a3, 0x42A0
    ctx->pc = 0x18f844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17056));
    // 0x18f848: 0x250842b0  addiu       $t0, $t0, 0x42B0
    ctx->pc = 0x18f848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17072));
    // 0x18f84c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x18f84cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18f850: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x18F850u;
    SET_GPR_U32(ctx, 31, 0x18F858u);
    ctx->pc = 0x18F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F850u;
    // 0x18f854: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3221B0u, 0x18F850u, 0x18F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F858u;
label_18f858:
    // 0x18f858: 0xc063d18  jal         func_18F460
    ctx->pc = 0x18F858u;
    SET_GPR_U32(ctx, 31, 0x18F860u);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x18F858u, 0x18F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F860u;
label_18f860:
    // 0x18f860: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f86c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f870: 0x3e00008  jr          $ra
    ctx->pc = 0x18F870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F870u;
        // 0x18f874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F878u;
    // 0x18f878: 0x0  nop
    ctx->pc = 0x18f878u;
    // NOP
    // 0x18f87c: 0x0  nop
    ctx->pc = 0x18f87cu;
    // NOP
}
