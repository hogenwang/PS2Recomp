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

// Function: sub_001E55A8
// Address: 0x1e55a8 - 0x1e5670
void sub_001E55A8_0x1e55a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E55A8_0x1e55a8");
#endif

    switch (ctx->pc) {
        case 0x1e55ccu: goto label_1e55cc;
        case 0x1e55f4u: goto label_1e55f4;
        case 0x1e560cu: goto label_1e560c;
        case 0x1e5624u: goto label_1e5624;
        case 0x1e563cu: goto label_1e563c;
        case 0x1e5654u: goto label_1e5654;
        default: break;
    }

    ctx->pc = 0x1e55a8u;

    // 0x1e55a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e55a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e55ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e55acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e55b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e55b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e55b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e55b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e55b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e55bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e55c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e55c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e55c4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E55C4u;
    SET_GPR_U32(ctx, 31, 0x1E55CCu);
    ctx->pc = 0x1E55C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55C4u;
    // 0x1e55c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E55C4u, 0x1E55CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55CCu;
label_1e55cc:
    // 0x1e55cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e55d0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e55d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55d4: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1e55d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e55d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e55d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e55dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55e0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E55E0u;
    {
        const bool branch_taken_0x1e55e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55E0u;
        // 0x1e55e4: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55e0) {
            ctx->pc = 0x1E5600u;
            goto label_1e5600;
        }
    }
    ctx->pc = 0x1E55E8u;
    // 0x1e55e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e55ec: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E55ECu;
    SET_GPR_U32(ctx, 31, 0x1E55F4u);
    ctx->pc = 0x1E55F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E55ECu;
    // 0x1e55f0: 0x2484e268  addiu       $a0, $a0, -0x1D98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E55ECu, 0x1E55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E55F4u;
label_1e55f4:
    // 0x1e55f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E55F4u;
    {
        const bool branch_taken_0x1e55f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55F4u;
        // 0x1e55f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55f4) {
            ctx->pc = 0x1E5658u;
            goto label_1e5658;
        }
    }
    ctx->pc = 0x1E55FCu;
    // 0x1e55fc: 0x0  nop
    ctx->pc = 0x1e55fcu;
    // NOP
label_1e5600:
    // 0x1e5600: 0x8e2603a8  lw          $a2, 0x3A8($s1)
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
    // 0x1e5604: 0xc06c52c  jal         func_1B14B0
    ctx->pc = 0x1E5604u;
    SET_GPR_U32(ctx, 31, 0x1E560Cu);
    ctx->pc = 0x1E5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5604u;
    // 0x1e5608: 0x8e310048  lw          $s1, 0x48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14B0u, 0x1E5604u, 0x1E560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E560Cu;
label_1e560c:
    // 0x1e560c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e560cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5614: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E5614u;
    {
        const bool branch_taken_0x1e5614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5614u;
        // 0x1e5618: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5614) {
            ctx->pc = 0x1E5648u;
            goto label_1e5648;
        }
    }
    ctx->pc = 0x1E561Cu;
    // 0x1e561c: 0xc06c5b4  jal         func_1B16D0
    ctx->pc = 0x1E561Cu;
    SET_GPR_U32(ctx, 31, 0x1E5624u);
    ctx->pc = 0x1B16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B16D0u, 0x1E561Cu, 0x1E5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5624u;
label_1e5624:
    // 0x1e5624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5628: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1e5628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e562c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e562cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5630: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1e5630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e5634: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x1E5634u;
    SET_GPR_U32(ctx, 31, 0x1E563Cu);
    ctx->pc = 0x1E5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5634u;
    // 0x1e5638: 0x8fa80008  lw          $t0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x1E5634u, 0x1E563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E563Cu;
label_1e563c:
    // 0x1e563c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E563Cu;
    {
        const bool branch_taken_0x1e563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E563Cu;
        // 0x1e5640: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e563c) {
            ctx->pc = 0x1E5658u;
            goto label_1e5658;
        }
    }
    ctx->pc = 0x1E5644u;
    // 0x1e5644: 0x0  nop
    ctx->pc = 0x1e5644u;
    // NOP
label_1e5648:
    // 0x1e5648: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e564c: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E564Cu;
    SET_GPR_U32(ctx, 31, 0x1E5654u);
    ctx->pc = 0x1E5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E564Cu;
    // 0x1e5650: 0x2484e298  addiu       $a0, $a0, -0x1D68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E564Cu, 0x1E5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5654u;
label_1e5654:
    // 0x1e5654: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e5654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5658:
    // 0x1e5658: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e5658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e565c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e565cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5660: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e5660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5664: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5664u;
        // 0x1e5668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E566Cu;
    // 0x1e566c: 0x0  nop
    ctx->pc = 0x1e566cu;
    // NOP
    if (ctx->pc == 0x1e566cu) { ctx->pc = 0x1e5670u; }
}
