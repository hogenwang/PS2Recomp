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

// Function: sub_001ED628
// Address: 0x1ed628 - 0x1ed6d0
void sub_001ED628_0x1ed628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED628_0x1ed628");
#endif

    switch (ctx->pc) {
        case 0x1ed650u: goto label_1ed650;
        case 0x1ed664u: goto label_1ed664;
        case 0x1ed684u: goto label_1ed684;
        case 0x1ed68cu: goto label_1ed68c;
        case 0x1ed694u: goto label_1ed694;
        case 0x1ed69cu: goto label_1ed69c;
        case 0x1ed6a4u: goto label_1ed6a4;
        case 0x1ed6acu: goto label_1ed6ac;
        default: break;
    }

    ctx->pc = 0x1ed628u;

    // 0x1ed628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed62c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ed62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ed630: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ed630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ed634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed638: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1ed638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed63c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ed63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ed640: 0x2451174c  addiu       $s1, $v0, 0x174C
    ctx->pc = 0x1ed640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
    // 0x1ed644: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ed644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ed648: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ed648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed64c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ed64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ed650:
    // 0x1ed650: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1ed650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1ed654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED654u;
    {
        const bool branch_taken_0x1ed654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED654u;
        // 0x1ed658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed654) {
            ctx->pc = 0x1ED668u;
            goto label_1ed668;
        }
    }
    ctx->pc = 0x1ED65Cu;
    // 0x1ed65c: 0xc07e2d4  jal         func_1F8B50
    ctx->pc = 0x1ED65Cu;
    SET_GPR_U32(ctx, 31, 0x1ED664u);
    ctx->pc = 0x1F8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8B50u, 0x1ED65Cu, 0x1ED664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED664u;
label_1ed664:
    // 0x1ed664: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ed664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ed668:
    // 0x1ed668: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ed668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ed66c: 0x603fff8  bgezl       $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1ED66Cu;
    {
        const bool branch_taken_0x1ed66c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ed66c) {
            ctx->pc = 0x1ED670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED66Cu;
            // 0x1ed670: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ed650;
        }
    }
    ctx->pc = 0x1ED674u;
    // 0x1ed674: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1ed674u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1ed678: 0x261016f0  addiu       $s0, $s0, 0x16F0
    ctx->pc = 0x1ed678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5872));
    // 0x1ed67c: 0xc07ed3c  jal         func_1FB4F0
    ctx->pc = 0x1ED67Cu;
    SET_GPR_U32(ctx, 31, 0x1ED684u);
    ctx->pc = 0x1ED680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED67Cu;
    // 0x1ed680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB4F0u, 0x1ED67Cu, 0x1ED684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED684u;
label_1ed684:
    // 0x1ed684: 0xc07a7f2  jal         func_1E9FC8
    ctx->pc = 0x1ED684u;
    SET_GPR_U32(ctx, 31, 0x1ED68Cu);
    ctx->pc = 0x1ED688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED684u;
    // 0x1ed688: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9FC8u, 0x1ED684u, 0x1ED68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED68Cu;
label_1ed68c:
    // 0x1ed68c: 0xc07f4bc  jal         func_1FD2F0
    ctx->pc = 0x1ED68Cu;
    SET_GPR_U32(ctx, 31, 0x1ED694u);
    ctx->pc = 0x1ED690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED68Cu;
    // 0x1ed690: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD2F0u, 0x1ED68Cu, 0x1ED694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED694u;
label_1ed694:
    // 0x1ed694: 0xc07b66e  jal         func_1ED9B8
    ctx->pc = 0x1ED694u;
    SET_GPR_U32(ctx, 31, 0x1ED69Cu);
    ctx->pc = 0x1ED698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED694u;
    // 0x1ed698: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9B8u, 0x1ED694u, 0x1ED69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED69Cu;
label_1ed69c:
    // 0x1ed69c: 0xc07b666  jal         func_1ED998
    ctx->pc = 0x1ED69Cu;
    SET_GPR_U32(ctx, 31, 0x1ED6A4u);
    ctx->pc = 0x1ED998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED998u, 0x1ED69Cu, 0x1ED6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6A4u;
label_1ed6a4:
    // 0x1ed6a4: 0xc07b658  jal         func_1ED960
    ctx->pc = 0x1ED6A4u;
    SET_GPR_U32(ctx, 31, 0x1ED6ACu);
    ctx->pc = 0x1ED960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED960u, 0x1ED6A4u, 0x1ED6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6ACu;
label_1ed6ac:
    // 0x1ed6ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ed6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed6b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ed6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed6b4: 0x250100a  movz        $v0, $s2, $s0
    ctx->pc = 0x1ed6b4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x1ed6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed6bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ed6bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed6c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ed6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ed6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6C4u;
        // 0x1ed6c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED6CCu;
    // 0x1ed6cc: 0x0  nop
    ctx->pc = 0x1ed6ccu;
    // NOP
    if (ctx->pc == 0x1ed6ccu) { ctx->pc = 0x1ed6d0u; }
}
